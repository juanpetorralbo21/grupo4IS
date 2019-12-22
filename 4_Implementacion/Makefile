INCLUDES = fichero.h cita.h paciente.h tratamiento.h historial.h
OBJECTS = cita.o paciente.o tratamiento.o fichero.o historial.o menu.o
FLAGS = -Wall -g -o

all:  paciente fichero cita historial tratamiento menu clean 


menu: $(INCLUDES) $(OBJECTS)
	g++ $(OBJECTS) $(FLAGS) menu.exe

menu.o: menu.cc fichero.h
	g++ -c menu.cc

fichero.o: fichero.cc fichero.h
	g++ -c fichero.cc

cita.o: cita.cc cita.h
	g++ -c cita.cc

tratamiento.o: tratamiento.cc tratamiento.h
	g++ -c tratamiento.cc

historial.o: historial.cc historial.h
	g++ -c historial.cc

paciente.o: paciente.cc paciente.h
	g++ -c paciente.cc

clean:
	rm *.o