//Archivo que contiene la clase tratamiento
//Antonio Marín Rodríguez

#ifndef TRATAMIENTO_H
#define TRATAMIENTO_H

	#include <string>
	using namespace std;
	using std::string;

  class Tratamiento{

	private:
		string nombre_tratamiento_;
		string dosis_;
		string regularidad_;
		string fechaInicio_;
		string fechaFin_;

	public:
		//Constructor de Tratamiento
		Tratamiento(string nTrat="", string dosis="", string regularidad="", string fInicio="", string fFin="");

		//Modificadores de Tratamiento
		inline void setNomTratamiento(string nNombre){nombre_tratamiento_=nNombre;};
		inline void setDosis(string nDosis){dosis_ = nDosis;};
		inline void setRegularidad(string nRegularidad) {regularidad_=nRegularidad;};
		inline void setFechaInicio(string nFecha){fechaInicio_=nFecha;};
		inline void setFechaFin(string nFecha){fechaFin_=nFecha;};

		//Observadores
		inline string getNomTratamiento() const {return nombre_tratamiento_;};
		inline string getDosis() const {return dosis_;};
		inline string getRegularidad() const {return regularidad_;};
		inline string getFechaInicio() const {return fechaInicio_;};
		inline string getFechaFin() const {return fechaFin_;};

		//Funciones
		//Devuelve la linea con todos los datos para almacenarlos en el fichero
		inline string getLineaFichero() const {return getNomTratamiento()+","+getDosis()+","+getRegularidad()+","+getFechaInicio()+","+getFechaFin();}; 
  		void setLineaFichero(string linea); //el inverso del anterior
		void mostrarTratamiento();
  };

#endif