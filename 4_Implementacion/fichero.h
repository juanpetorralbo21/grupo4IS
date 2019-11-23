//Archivo que contiene la cabecera de la clase Fichero
//La clase Fichero se encarga de abrir, introducir, eliminar y buscar todos los datos de las demás clases
//Antonio Marín Rodríguez y Juan Pedro Torralbo Mejías

#ifndef FICHERO_H
#define FICHERO_H
	
	#include "paciente.h"
	#include "cita.h"
	#include "historial.h"
	#include <list>
	#include <fstream>
	using std::ifstream;
	using std::ofstream;
	#include <iostream>

	using namespace std;

	class Fichero {

		private:

			string nombre_fichero_Pacientes_;
			string nombre_fichero_Citas_;
			string nombre_fichero_Tratamientos_;

		public:

			Fichero(string nPacientes="pacientes.txt", string nCitas="citas.txt", string nTratamientos="tratamientos.txt");

			//Modificadores
			inline void setNFPacientes(string nPacientes) {nombre_fichero_Pacientes_=nPacientes;}
			inline void setNFCitas(string nCitas) {nombre_fichero_Citas_=nCitas;}
			inline void setNFTratamientos(string nTratamientos) {nombre_fichero_Tratamientos_=nTratamientos;}

			//Observadores
			inline string getNFPacientes() {return nombre_fichero_Pacientes_;}
			inline string getNFCitas() {return nombre_fichero_Citas_;}
			inline string getNFTratamientos() {return nombre_fichero_Tratamientos_;}

			//Funciones clase paciente
			bool insertarPaciente(Paciente nPaciente);
			bool buscarPacienteNombreCompleto(string nombre, string apellidos);
			bool eliminarPaciente(string nombre, string apellidos);
			bool modificarPaciente(Paciente nuevo_paciente);
			list<Paciente> listarPacientes();

			//Funciones clase citas
			bool insertarCita(Cita cita);
			bool buscarCitaNombre(string nombre, string apellidos);
			bool cancelarCita(string nombre, string apellidos);
			list<Cita> listarCitas();

			//Funciones clase historial
			void insertarNuevaEntradaHistorial(string nombre, string apellidos, Historial historial);
			list<Historial> listarHistorial(string nombre, string apellidos);			
	};

#endif
