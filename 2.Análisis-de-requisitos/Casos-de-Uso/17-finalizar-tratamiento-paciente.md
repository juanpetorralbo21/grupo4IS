## Finalizar tratamiento del paciente

**ID**: 17
**Descripción**: Se termina el tratamiento del paciente

**Actores principales**: Secretario
**Actores secundarios**: Usuario

**Precondiciones**:
* Debe existir el tratamiento del paciente

**Flujo principal**:
1. El secretario desea finalizar el tratamiento de un paciente de la lista
2. El secretario introduce el nombre y apellidos del usuario
3. El secretario selecciona mostrar el tratamiento del paciente
4. El secretario termina el tratamiento del cliente
5. El tratamiento finaliza

**Postcondiciones**:

* El tratamiento estará finalizado

**Flujos alternativos**:

1.a. Si no existe el tratamiento del paciente, se muestra un mensaje de error
