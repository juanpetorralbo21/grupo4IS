//Archivo que contiene la clase cita médica
//Juan Pedro Torralbo Mejias

#ifndef CITA_H
#define CITA_H

	#include <string>
	using namespace std;
	using std::string;

  class Cita{

	private:
		string nombre_;
		string apellidos_;
		string fecha_;
		string hora_;
		string motivo_;
		int telefono_;

	public:
		//Constructor vacío cita
		Cita(string nombre="", string apellidos="", string fecha="", string hora="", string motivo="", int telefono=111111111);

		//Modificadores clase cita
		inline void setNombre(string nNombre){nombre_ = nNombre;};
		inline void setApellidos(string nApellidos){apellidos_ = nApellidos;};
		inline void setFecha(string nFecha) {fecha_=nFecha;};
		inline void setHora(string nHora){hora_=nHora;};
		inline void setMotivo(string nMotivo){motivo_ = nMotivo;};
		bool setTelefono(int nuevo_telefono); //Comprobar si es correcto o no
		

		//Observadores clase cita
		inline string getNombre() const {return nombre_;};
		inline string getApellidos() const {return apellidos_;};
		string getApellidosyNombre() const {return getApellidos() + " " + getNombre();};
		inline string getFecha() const {return fecha_;};
		inline string getHora() const {return hora_;};
		inline string getMotivo() const {return motivo_;}
		inline int getTelefono() const {return telefono_;};
	

		//Funciones
		//Devuelve la linea con todos los datos para almacenarlos en el fichero
		inline string getLineaFichero() const {return getNombre()+","+getApellidos()+","+getFecha()+","+getHora()+","+std::to_string(getTelefono())+","+getMotivo();} 
  		void setLineaFichero(string linea); //el inverso del anterior
  		void mostrarCita();
  };

#endif
