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
