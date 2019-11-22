//Archivo de funciones de la clase Cita
//Juan Pedro Torralbo Mejías

#include "cita.h"
#include <fstream>
#include <iostream>
using namespace std;

//Constructor clase cita
Cita::Cita(string nombre, string apellidos, string fecha, string hora, string motivo, int telefono)
{
	setNombre(nombre);
	setApellidos(apellidos);
	setFecha(fecha);
	setHora(hora);
	setMotivo(motivo);
	setTelefono(telefono);
}

//Comprueba si el númeor introducido podría existir
bool Cita::setTelefono(int nTelefono)
{
	if ((nTelefono > 100000000) && (nTelefono < 999999999))
	{
		telefono_ = nTelefono;
		return true;
	}
	else
		return false;
}

void Cita::setLineaFichero(string linea)
{
	int pos; //variable auxiliar
	string sub; //cadena auxiliar

	//Nombre del paciente
	pos=linea.find(",");
	setNombre(linea.substr(0,pos));
	sub=linea.substr(pos,linea.size());

	//Apellido del paciente
	pos=sub.find(",");
	setApellidos(sub.substr(0,pos));
	sub=sub.substr(pos,sub.size());

	//Fecha de la cita
	pos=sub.find(",");
	setFecha(sub.substr(0,pos));
	sub=sub.substr(pos,sub.size());

	//Hora de la cita
	pos=sub.find(",");
	setHora(sub.substr(0,pos));
	sub=sub.substr(pos,sub.size());

	//Telefono del paciente
	pos=sub.find(",");
	setTelefono(stoi(sub.substr(0,pos), nullptr, 16));
	sub=sub.substr(pos,sub.size());

	//Modificar del motivo
	setMotivo(sub);
}

void Cita::mostrarCita()
{
	cout << "CITA MEDICA";
	cout << "-----------------------";
	cout << "Nombre: " << getApellidosyNombre();
	cout << "Fecha de la cita: " << getFecha();
	cout << "Hora de la cita: " << getHora();
	cout << "Telefono: " << getTelefono();
	cout << "Motivo: " << getMotivo();
}
