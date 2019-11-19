//Archivo de cabecera de la clase Paciente
//Antonio Marín Rodríguez

#ifndef PACIENTE_H
#define PACIENTE_H

	#include <string>
	using std::string;

  class Paciente{

	private:
		string nombre_;
		string apellidos_;
		string fechanacimiento_;
		string direccion_;
		int telefono_;
		string tipo_seguro_;

	public:
		//Constructor
		Paciente(string nombre, string apellidos, string fechanacimiento, string direccion, int telefono, string tipo_seguro);

		//Modificadores
		inline void setNombre(string nNombre){nombre_ = nNombre;};
		inline void setApellido(string nApellidos){apellidos_ = nApellidos;};
		inline void setFechaNacimiento(string nFecha) {fechanacimiento_=nFecha;};
		inline void setDireccion(string nDireccion){direccion_ = nDireccion;};
		bool setTelefono(int nuevo_telefono); //Comprobar si es correcto o no
		inline void setSeguro(string nSeguro){tipo_seguro_ = nSeguro;};

		//Observadores
		inline string getNombre() const {return nombre_;};
		inline string getApellidos() const {return apellidos_;};
		string getApellidosyNombre() const {return getApellidos() + " " + getNombre();};
		inline string getFechaNacimiento() const {return fechanacimiento_;};
		inline string getDireccion() const {return direccion_;};
		inline int getTelefono() const {return telefono_;};
		inline string getTipoSeguro() const {return tipo_seguro_;}
  };

#endif