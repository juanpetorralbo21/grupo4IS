//Archivo que contiene la cabecera de la clase Fichero
//La clase Fichero se encarga de abrir, introducir, eliminar y buscar todos los datos de las demás clases
//Antonio Marín Rodríguez

#ifndef FICHERO_H
#define FICHERO_H
	
	#include "paciente.h"
	#include <list>
	#include <fstream>
	using std::ifstream;
	using std::ofstream;
	#include <iostream>

	class Fichero {

		private:

			string nombre_fichero_Pacientes_;
			string nombre_fichero_Citas_;
			string nombre_fichero_Tratamientos_;

		public:

			Fichero(string nPacientes, string nCitas, string nTratamientos);

			//Modificadores
			inline void setNFPacientes(string nPacientes) {nombre_fichero_Pacientes_=nPacientes;}
			inline void setNFCitas(string nCitas) {nombre_fichero_Citas_=nCitas;}
			inline void setNFTratamientos(string nTratamientos) {nombre_fichero_Tratamientos_=nTratamientos;}

			//Observadores
			inline string getNFPacientes() {return nombre_fichero_Pacientes_;}
			inline string getNFCitas() {return nombre_fichero_Citas_;}
			inline string getNFTratamientos() {return nombre_fichero_Tratamientos_;}

			//Funciones
	};

#endif