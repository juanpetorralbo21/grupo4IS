//Archivo de cabecera de la clase historial
//Antonio Marín Rodríguez

#ifndef HISTORIAL_H
#define HISTORIAL_H

	#include <string>
	using std::string;

  class Historial{

	private:
		string detalles_;
		string fecha_;

	public:
		//Constructor
		Paciente(string nombre="", string apellidos="", string fechanacimiento="", string direccion="", int telefono=111111111, string tipo_seguro="");

		//Modificadores
		inline void setDetalles(string detalles){detalles_=detalles;};
		inline void setFecha(string fecha) {fecha_=fecha;};


		//Observadores
		inline string getDetalles() const {return detalles_;};
		inline string getFecha() const {return fecha_;};

		//Funciones
		//Devuelve la linea con todos los datos para almacenarlos en el fichero
		inline string getLineaFichero() const {return getFecha()+","+getDetalles();} 
  		void setLineaFichero(string linea); //el inverso del anterior
  };

#endif