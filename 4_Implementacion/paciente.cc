//Archivo de funciones de la clase Paciente
//Antonio Marín Rodríguez

#include "paciente.h"
#include <fstream>
#include <iostream>

//Constructor
Paciente::Paciente(string nombre, string apellidos, string fecha, string direccion, int telefono, string tipo_seguro)
{
	setNombre(nombre);
	setApellido(apellidos);
	setFechaNacimiento(fecha);
	setDireccion(direccion);
	setTelefono(telefono);
	setSeguro(tipo_seguro);
}

//Comprueba si el númeor introducido podría existir
Paciente::setTelefono(int nTelefono)
{
	if ((nTelefono > 100000000) && (nTelefono < 999999999))
	{
		telefono_ = nTelefono;
		return true;
	}
	else
		return false;
}