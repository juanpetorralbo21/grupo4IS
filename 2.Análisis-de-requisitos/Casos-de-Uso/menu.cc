
#include "fichero.h"

//Prototipo funciones
void menuPrincipal();
void menuPacientes();
void menuDetallesPaciente();
void menuDetallesTratamientoPaciente();
void menuCitas();
void menuCitasPaciente();
void opInc();

int main()
{
	int mP, mPac, mDPac, mDTPac, mC, mCPac;

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
						case 1:

						break;

						case 2:

							//MENU OPCIONES PACIENTE
							while(mDPac != 0)
							{
								menuDetallesPaciente();
								cin >> mDPac;

								
								switch(mDPac)
								{
									case 1:

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
	cout<<"MENU PRINCIPAL"<<endl;
	cout<<"INTRODUCE EL NUMERO DE OPERACION"<<endl<<endl;
	cout<<"1 PACIENTES"<<endl;
	cout<<"2 CITAS"<<endl;
	cout<<"0 SALIR"<<endl;
	cout<<endl<<"-> ";
}

void menuPacientes()
{
	cout<<"MENU PACIENTES"<<endl;
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