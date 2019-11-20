//Archivo que contiene las funciones de la clase Fichero
//La clase Fichero se encarga de abrir, introducir, eliminar y buscar todos los datos de las demás clases
//Antonio Marín Rodríguez
#include "fichero.h"
#include "paciente.h"

Fichero::Fichero(string nPacientes, string nCitas, string nTratamientos)
{
	setNFPacientes(nPacientes);
	setNFCitas(nCitas);
	setNFTratamientos(nTratamientos);
}

bool Fichero::insertarPaciente(Paciente paciente)
{	
	//No se encuentra dentro del fichero
	if (!buscarPacienteNombreCompleto(paciente.getNombre(), paciente.getApellidos()))
	{
		ofstream fich("./"+getNFPacientes());
		fich << paciente.getLineaFichero();
		fich.close();
		return true;
	}

	return false;
}

//Funcion que busca a un paciente dentro del fichero por su nombre y apellidos
bool Fichero::buscarPacienteNombreCompleto(string nombre, string apellidos)
{
	string linea;
	Paciente aux;
	ifstream fich("./"+getNFPacientes());

	while (!fich.eof()) 
	{
		fich >> linea;
		aux.setLineaFichero(linea);

		//Ha encontrado al paciente
		if(aux.getNombre() == nombre && aux.getApellidos() == apellidos)
		{
			fich.close();
			return true;
		}
	}

  	fich.close();
	return false;
}

//Funcion que elimina un paciente del fichero
bool Fichero::eliminarPaciente(string nombre, string apellidos)
{
	string linea;
	Paciente aux;

	//Se comprueba que el paciente se encuentra en los ficheros
	if(!buscarPacienteNombreCompleto(nombre, apellidos))
		return false;

	ifstream fich(getNFPacientes());
	ofstream auxF("aux.txt");

	while (!fich.eof()) 
	{
		fich >> linea;
		aux.setLineaFichero(linea);

		//Copiar todo el contenido que no sea del usuario
		if(!(aux.getNombre() == nombre && aux.getApellidos() == apellidos))
			auxF << linea;		
	}

	fich.close();
	auxF.close();
	remove(getNFPacientes().c_str());

	rename("aux.txt", getNFPacientes().c_str());
	return true;
}


