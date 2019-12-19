//Archivo de funciones de la clase Tratamientos
//Antonio

#include "tratamiento.h"
#include <fstream>
#include <iostream>
using namespace std;

//Constructor de la clase
Tratamiento::Tratamiento(string nTrat, string dosis, string regularidad, string fInicio, string fFin)
{
	setNomTratamiento(nTrat);
	setDosis(dosis);
	setRegularidad(regularidad);
	setFechaInicio(fInicio);
	setFechaFin(fFin);
}

//Funcion que carga un tratamiento del fichero
void Tratamiento::setLineaFichero(string linea)
{
	int pos; //variable auxiliar
	string sub; //cadena auxiliar

	//Nombre del tratamiento
	pos=linea.find(",");
	setNomTratamiento(linea.substr(0,pos));
	sub=linea.substr(pos,linea.size());

	//Apellido del paciente
	pos=sub.find(",");
	setDosis(sub.substr(0,pos));
	sub=sub.substr(pos,sub.size());

	//Fecha de la cita
	pos=sub.find(",");
	setRegularidad(sub.substr(0,pos));
	sub=sub.substr(pos,sub.size());

	//Hora de la cita
	pos=sub.find(",");
	setFechaInicio(sub.substr(0,pos));
	sub=sub.substr(pos,sub.size());

	//Modificar del motivo
	setFechaFin(sub);
}


//Función que muestra el tratamiento
void Tratamiento::mostrarTratamiento()
{
	cout << "TRATMIENTO";
	cout << "-----------------------";
	cout << "Nombre del tratamiento: " << getNomTratamiento();
	cout << "Dosis: " << getDosis();
	cout << "regularidad: " << getRegularidad();
	cout << "Fecha de inicio " << getFechaInicio();
	cout << "Fecha de fin: " << getFechaFin();
}