INCLUDES = fichero.h cita.h paciente.h tratamiento.h historial.h
OBJECTS = menu.o paciente.o fichero.o tratamiento.o historial.o cita.o
FLAGS = -Wall -g -o

all:  menu clean 


menu: $(INCLUDES) $(OBJECTS)
	g++ $(OBJECTS) $(FLAGS) menu.exe

menu.o: menu.cc fichero.h paciente.h historial.h tratamiento.h
	g++ -c menu.cc fichero.h paciente.h historial.h tratamiento.h

fichero.o: fichero.cc fichero.h paciente.h historial.h tratamiento.h
	g++ -c fichero.cc fichero.h paciente.h historial.h tratamiento.h

cita.o: cita.cc cita.h
	g++ -c cita.cc cita.h

tratamiento.o: tratamiento.cc tratamiento.h
	g++ -c tratamiento.cc tratamiento.h

historial.o: historial.cc historial.h
	g++ -c historial.cc historial.h

paciente.o: paciente.cc paciente.h
	g++ -c paciente.cc paciente.h

clean:
	rm *.o *.gch