//Archivo que contiene las funciones de la clase Fichero
//La clase Fichero se encarga de abrir, introducir, eliminar y buscar todos los datos de las demás clases
//Antonio Marín Rodríguez y Juan Pedro Torralbo Mejías
#include "fichero.h"
#include "paciente.h"
#include "cita.h"

Fichero::Fichero(string nPacientes, string nCitas, string nTratamientos)
{
	setNFPacientes(nPacientes);
	setNFCitas(nCitas);
	setNFTratamientos(nTratamientos);
}

//FUNCIONES DE LA CLASE PACIENTE

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

bool Fichero::modificarPaciente(Paciente nuevo_paciente)
{
	//Se comprueba que el paciente se encuentra en los ficheros
	if(!buscarPacienteNombreCompleto(nuevo_paciente.getNombre(), nuevo_paciente.getApellidos()))
		return false;

	//Eliminamos el antiguo paciente
	if(!eliminarPaciente(nuevo_paciente.getNombre(), nuevo_paciente.getApellidos()))
		return false;

	//Insertamos el paciente con los nuevos datos
	if(!insertarPaciente(nuevo_paciente))
		return false;

	return true;
}

list<Paciente> Fichero::listarPacientes()
{
	list<Paciente> lPac; //Lista de pacientes
	ifstream fich(getNFPacientes());
	string linea;
	Paciente aux;

	while (!fich.eof()) 
	{
		fich >> linea;
		aux.setLineaFichero(linea);
		lPac.push_back(aux);
	}

	return lPac;
}

//FUNCIONES DE LA CLASE CITAS

bool Fichero::insertarCita(Cita cita)
{
	//Si la cita no se encuentra en el fichero
	if(!buscarCitaNombre(cita.getNombre(), cita.getApellidos()))
	{
		ofstream fich("./"+getNFCitas());
		fich << cita.getLineaFichero();
		fich.close();
		return true;
	}

	return false;
}

bool Fichero::buscarCitaNombre(string nombre, string apellidos)
{
	string linea;
	Cita aux;
	ifstream fich("./"+getNFCitas());

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


bool Fichero::cancelarCita(string nombre, string apellidos)
{
	string linea;
	Cita aux;
	if(!buscarPacienteNombreCompleto(nombre,apellidos))
		return false;

	ifstream fich(getNFCitas());
	ofstream auxF("aux.txt");

}

list<Cita> Fichero::listarCitas()
{
	list<Cita> lCit;
	ifstream fich(getNFCitas());
	string linea;
	Cita aux;

	while (!fich.eof())
	{
		fich >> linea;
		aux.setLineaFichero(linea);
		lCit.push_back(aux);
	}
	return lCit;
}



