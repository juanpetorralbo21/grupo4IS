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
		ofstream fich("./"+getNFPacientes(),ofstream::app);
		fich << paciente.getLineaFichero() << endl ;
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

	while (getline(fich,linea)) 
	{
		cout << linea;
		//aux.setLineaFichero(linea);

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

//Funcion que lista las citas del fichero
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

	fich.close();
	return lCit;
}


void Fichero::insertarNuevaEntradaHistorial(string nombre, string apellidos, Historial historial)
{
	ofstream fich("./Historiales/"+apellidos+"-"+nombre);
	fich << historial.getLineaFichero();
	fich.close();
}


list<Historial> Fichero::listarHistorial(string nombre, string apellidos)
{
	list<Historial> lHist; //Lista de entradas al historial
	ifstream fich("./Historiales/"+apellidos+"-"+nombre);
	string linea;
	Historial aux;

	while (!fich.eof()) 
	{
		fich >> linea;
		aux.setLineaFichero(linea);
		lHist.push_back(aux);
	}

	fich.close();
	return lHist;
}	

void insertarTratamientoPaciente(string nombre, string apellidos, Tratamiento tratamiento)
{
	ofstream fich("./Tratamiento/"+apellidos+"-"+nombre);
	fich << tratamiento.getLineaFichero();
	fich.close();
}


void modificarTratamientoPaciente(string nombre, string apellidos, Tratamiento tratamientos)
{

}

bool Fichero::finalizarTratamientoPaciente(string nombre, string apellidos, Tratamiento tratamiento)
{
	string linea;
	Tratamiento aux;
	bool flag=false;

	ifstream fich("./Tratamientos/"+apellidos+"-"+nombre);
	ofstream auxF("aux.txt");

	//Metemos todo el contenido de los tratamientos menos el finalizado
	while (!fich.eof()) 
	{
		fich >> linea;
		aux.setLineaFichero(linea);

		//Copiar todo el contenido que no sea del usuario
		if(!(aux.getNomTratamiento() == tratamiento.getNomTratamiento()))
		{
			flag=true;
			auxF << linea;		
		}
	}

	fich.close();
	auxF.close();
	remove(getNFPacientes().c_str());
	rename("aux.txt", getNFPacientes().c_str());

	if(flag)
	{
		Historial hist("Tratamiento " + aux.getNomTratamiento() + "finalizado.","");
		insertarNuevaEntradaHistorial(nombre, apellidos, hist);
	}
	return true;
}

//Funcion que lista los tratamientos del paciente
list<Tratamiento> Fichero::listarTratamientosPaciente(string nombre, string apellidos)
{
	list<Tratamiento> lTrat; //Lista de tratamientos

	ifstream fich("./Tratamientos/"+apellidos+"-"+nombre);
	string linea;
	Tratamiento aux;

	while (!fich.eof()) 
	{
		fich >> linea;
		aux.setLineaFichero(linea);
		lTrat.push_back(aux);
	}

	fich.close();
	return lTrat;
}
