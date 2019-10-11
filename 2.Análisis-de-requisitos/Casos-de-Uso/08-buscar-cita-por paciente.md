## Buscar cita por paciente

**ID**: 08
**Descripción**: El sistema busca dentro del fichero todas las citas que estan asignadas al paciente introducido

**Actores principales**: Secretario

**Precondiciones**:
* Ninguna

**Flujo principal**:
1. El sistema solicita al secretario que introduzca los apellidos del paciente
2. El secretario introduce los apellidos y nombre del paciente
3. El sistema busca dentro del fichero las citas que pertenecen al cliente
4. El sistema muestra por orden respecto a la fecha cuales son las citas

**Postcondiciones**:

* Ninguna

**Flujos alternativos**:

9.a. Si no existe citas asignadas al paciente, se muestra un mensaje de aviso
