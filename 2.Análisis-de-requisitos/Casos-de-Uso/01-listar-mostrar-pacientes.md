## Listar o mostrar pacientes

**ID**: 01
**Descripción**: Muestra por pantalla la lista de todos los pacientes de la clínica

**Actores principales**: Secretario

**Precondiciones**:
* Ninguna

**Flujo principal**:
1. El administrador selecciona mostrar listado pacientes
2. El sistema muestra selecciona todos los pacientes almacenados en el fichero de pacientes
3. El sistema muestra los pacientes por pantalla por orden alfabético respecto al apellido

**Postcondiciones**:

* Ninguna

**Flujos alternativos**:

1.a Si no hay pacientes registrados, se muestra un mensaje de que no hay ningún paciente registrado todavía
