
#include "fichero.h"


//Prototipo funciones
void menuPrincipal();
void menuPacientes();
void menuDetallesPaciente();
void menuDetallesTratamientoPaciente();
void menuCitas();
void menuCitasPaciente();
void opInc();
Paciente formularioRegistroPaciente();

int main()
{
	int mP=-1, mPac=-1, mDPac=-1, mDTPac=-1, mC=-1, mCPac=-1; //Variables auxliares para los menus
	int i;
	Fichero f; //Clase que contiene toda las acciones con los ficheros
	list<Paciente> auxLP;
	Paciente auxP;

	auxLP = f.listarPacientes();

	string nombA, apeA;

	//MENU PRINCIPAL
	while (mP != 0)
	{
		menuPrincipal();
		cin >> mP;

		switch(mP)
		{	
			//MENU PACIENTES
			case 1:

				while(mPac != 0)
				{
					menuPacientes();
					cin >> mPac;

					switch(mPac)
					{
						//Listar pacientes
						case 1:
							while (!auxLP.empty())
							{
								auxLP.front().mostrarPaciente();
								auxLP.pop_front();
							}

						break;

						//Consultar paciente
						case 2:

							//Hay que buscar al paciente introducido
							cout << endl << "Introduce los datos del paciente" <<endl;
							cout << "Introduce el nombre del paciente:" <<endl;
							cin >> nombA;
							cout << "Introduce los apellidos del paciente: "<<endl;
							cin >> apeA;

							if(f.buscarPacienteNombreCompleto(nombA, apeA))
							{
								while (!auxLP.empty())
								{
									if(auxLP.front().getNombre() == nombA && auxLP.front().getApellidos() == apeA)
										auxP=auxLP.front();

									auxLP.pop_front();
								}

							//MENU OPCIONES PACIENTE
							while(mDPac != 0)
							{
								menuDetallesPaciente();
								cin >> mDPac;

								
								switch(mDPac)
								{
									case 1:
										auxP.mostrarPaciente();
									break;

									case 2:

									break;

									case 3:

									break;

									case 4:
									break;

									case 5:

										while (mDTPac != 0)
										{
											menuDetallesTratamientoPaciente();
											cin >> mDTPac;

											switch(mDTPac)
											{
												case 1:

												break;

												case 2:

												break;

												case 0:
												break;

												default:
													opInc();
											}


										}
										
									break;

									case 0:
									break;

									default:
										opInc();
								}
							}
							}//if
							else{
								cout << endl << "Pacinte introducido no existente. " << endl;
							}	
						break;

						//Introducir un nuevo paciente
						case 3:
							auxP = formularioRegistroPaciente();
							if(!f.insertarPaciente(auxP))
							{
								cout<< "ERROR AL INTRODUCIR EL PACIENTE DENTRO DEL FICHERO"<<endl;
								cout << "Paciente con nombre "+auxP.getNombre()+" y apellidos "+auxP.getApellidos()+" ya registrados."<<endl;
							}
							else
								cout <<endl<< "Paciente introducido correctamente"<<endl;
						break;

						case 0:
						break;

						default:
							opInc();
					}
				}
			break;

			//MENU CITAS
			case 2:
				while(mC != 0)
				{
					menuCitas();
					cin >> mC;

					switch(mC)
					{
						case 1:

						break;

						case 2:


						break;

						case 3:

						break;

						case 0:
						break;

						default:
							opInc();
					}
				}
			break;

			case 0:
			cout << "FIN DEL PROGRAMA"<<endl;
			break;

			//ERROR
			default:
				opInc();
		}
	}	

	return 0;

}

void opInc()
{
	cout << "OPERACION INCORRECTA, VUELVE A INTRODUCIRLO"<<endl;
}

//Funciones
void menuPrincipal(){
	cout<<endl<<"MENU PRINCIPAL"<<endl;
	cout<<"INTRODUCE EL NUMERO DE OPERACION"<<endl<<endl;
	cout<<"1 PACIENTES"<<endl;
	cout<<"2 CITAS"<<endl;
	cout<<"0 SALIR"<<endl;
	cout<<endl<<"-> ";
}

void menuPacientes()
{
	cout<<endl<<"MENU PACIENTES"<<endl;
	cout<<"INTRODUCE EL NUMERO DE OPERACION"<<endl<<endl;
	cout<<"1 LISTAR PACIENTES"<<endl;
	cout<<"2 CONSULTAR PACIENTE"<<endl;
	cout<<"3 INTRODUCIR NUEVO PACIENTE"<<endl;
	cout<<"0 VOLVER ATRAS";
	cout<<endl<<"-> ";
}

void menuDetallesPaciente()
{
	cout<<"MENU DETALLES PACIENTES"<<endl;
	cout<<"INTRODUCE EL NUMERO DE OPERACION"<<endl<<endl;
	cout<<"1 CONSULTAR DATOS"<<endl;
	cout<<"2 MODIFICAR DATOS"<<endl;
	cout<<"3 CONSULTAR HISTORIAL MÉDICO"<<endl;
	cout<<"4 INTRODUCIR NUEVO HISTORIAL MÉDICO"<<endl;
	cout<<"5 CONSULTAR TRATAMIENTO "<<endl;
	cout<<"0 VOLVER ATRAS";
	cout<<endl<<"-> ";
}

void menuDetallesTratamientoPaciente()
{
	cout<<"MENU DETALLES TRATAMIENTO PACIENTES"<<endl;
	cout<<"INTRODUCE EL NUMERO DE OPERACION"<<endl<<endl;
	cout<<"1 CONSULTAR TRATAMIENTO"<<endl;
	cout<<"2 MODIFICAR TRATAMIENTO"<<endl;
	cout<<"3 FINALIZAR TRATAMIENTO"<<endl;
	cout<<"0 VOLVER ATRAS";
	cout<<endl<<"-> ";
}

void menuCitas()
{
	cout<<"MENU CITAS"<<endl;
	cout<<"INTRODUCE EL NUMERO DE OPERACION"<<endl<<endl;
	cout<<"1 LISTAR CITAS"<<endl;
	cout<<"2 NUEVA CITA"<<endl;
	cout<<"3 BUSCAR CITA POR PACIENTE"<<endl;
	cout<<"0 VOLVER ATRAS";
	cout<<endl<<"-> ";
}

void menuCitasPaciente()
{
	cout<<"MENU CITAS PACIENTE"<<endl;
	cout<<"INTRODUCE EL NUMERO DE OPERACION"<<endl<<endl;
	cout<<"1 MODIFICAR CITA"<<endl;
	cout<<"2 CANCELAR CITA"<<endl;
	cout<<"0 VOLVER ATRAS";
	cout<<endl<<"-> ";
}

Paciente formularioRegistroPaciente()
{
	Paciente aux;
	string auxS;
	int auxI;

	cout<<"FORMULARIO REGISTRO PACIENTE"<<endl;
	cout<<"INTRODUCE NOMBRE DEL PACIENTE"<<endl;
	cout<<endl<<"-> ";
	cin >> auxS;
	aux.setNombre(auxS);

	cout<<"INTRODUCE APELLIDOS DEL PACIENTE"<<endl;
	cout<<endl<<"-> ";
	cin >> auxS;
	aux.setApellidos(auxS);

	cout<<"INTRODUCE LA FECHA DE NACIMIENTO DEL PACIENTE"<<endl;
	cout<<endl<<"-> ";
	cin >> auxS;
	aux.setFechaNacimiento(auxS);

	cout<<"INTRODUCE LA DIRECCION DEL PACIENTE"<<endl;
	cout<<endl<<"-> ";
	cin >> auxS;
	aux.setDireccion(auxS);

	cout<<"INTRODUCE El NUMERO DE TELEFONO DEL PACIENTE"<<endl;
	cout<<endl<<"-> ";
	cin >> auxI;
	aux.setTelefono(auxI);

	cout<<"INTRODUCE EL TIPO DE SEGURO DEL PACIENTE"<<endl;
	cout<<endl<<"-> ";
	cin >> auxS;
	aux.setSeguro(auxS);

	return aux;
}