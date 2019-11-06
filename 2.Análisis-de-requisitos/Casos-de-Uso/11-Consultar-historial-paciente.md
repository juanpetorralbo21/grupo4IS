## Mostrar pacientes

**ID**: 11
**Descripción**: Muestra por pantalla la lista de todos los historiales de los pacientes de la clínica

**Actores principales**: Secretario

**Precondiciones**:
* El paciente debe tener al menos un archivo en el historial

**Flujo principal**:
1. El administrador selecciona mostrar historial de pacientes
2. El sistema muestra el historial de todos los pacientes almacenados en el fichero de pacientes
3. El sistema muestra los historiales de los pacientes por pantalla por orden alfabético respecto al apellido

**Postcondiciones**:

* Ninguna

**Flujos alternativos**:

1.a Si no hay historiales registrados, se muestra un mensaje de que no hay ningún historial registrado todavía
