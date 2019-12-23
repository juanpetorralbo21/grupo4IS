//Archivo de funciones de la clase Paciente
//Antonio Marín Rodríguez

#include "paciente.h"
#include <fstream>
#include <iostream>

//Constructor
Paciente::Paciente(string nombre, string apellidos, string fecha, string direccion, int telefono, string tipo_seguro)
{
	setNombre(nombre);
	setApellidos(apellidos);
	setFechaNacimiento(fecha);
	setDireccion(direccion);
	setSeguro(tipo_seguro);
	setTelefono(telefono);
}

//Comprueba si el númeor introducido podría existir
bool Paciente::setTelefono(int nTelefono)
{
	if ((nTelefono > 100000000) && (nTelefono < 999999999))
	{
		telefono_ = nTelefono;
		return true;
	}
	else
		return false;
}

void Paciente::setLineaFichero(string linea)
{
	size_t pos; //variable auxiliar
	string sub; //cadena auxiliar
	std::string::size_type sz;

	//Para el nombre
	pos=linea.find(",");
	setNombre(linea.substr(0,pos));
	sub=linea.substr(pos+1,linea.size());

	//Para los apellidos
	pos=sub.find(",");
	setApellidos(sub.substr(0,pos));
	sub=sub.substr(pos+1,sub.size());

	//Para Fecha de nacimiento
	pos=sub.find(",");
	setFechaNacimiento(sub.substr(0,pos));
	sub=sub.substr(pos+1,sub.size());

	//Para direccion
	pos=sub.find(",");
	setDireccion(sub.substr(0,pos));
	sub=sub.substr(pos+1,sub.size());

	//Para telefono
	pos=sub.find(",");
	setTelefono(std::stoi(sub.substr(0,pos), &sz));
	sub=sub.substr(pos+1,sub.size());

	//Para tipo de seguro
	setSeguro(sub);
}

void Paciente::mostrarPaciente()
{
	std::cout << "DATOS PACIENTE" << std::endl;
	std::cout << "-----------------------" << std::endl;
	std::cout << "Nombre: " << getNombre() << std::endl;
	std::cout << "Apellidos: " << getApellidos() << std::endl;
	std::cout << "Fecha nacimiento: " << getFechaNacimiento()<< std::endl;
	std::cout << "Direccion: " << getDireccion()<< std::endl;
	std::cout << "Telefono: " << getTelefono()<< std::endl;
	std::cout << "Tipo de seguro: " << getTipoSeguro()<< std::endl;
}