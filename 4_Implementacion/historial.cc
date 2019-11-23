//Archivo de funciones de la clase Historial
//Antonio Marín Rodríguez
#include "historial.h"

//Constructor
Historial::Historial(string detalles, string fecha)
{
 	setDetalles(detalles);
 	setFecha(fecha);
}

void Historial::setLineaFichero(string linea)
{
	int pos; //variable auxiliar
	string sub; //cadena auxiliar

	//Para el nombre
	pos=linea.find(",");
	setFecha(linea.substr(0,pos));
	sub=linea.substr(pos,linea.size());

	//Para tipo de seguro
	setDetalles(sub);
}