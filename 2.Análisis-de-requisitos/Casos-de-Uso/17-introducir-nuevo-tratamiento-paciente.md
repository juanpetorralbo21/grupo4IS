## Insertar nuevo tratamiento de paciente

**ID**: 17
**Descripción**: Se inserta un nuevo tratamiento del paciente en el sistema

**Actores principales**: Secretario
**Actores secundarios**: Usuario

**Precondiciones**:
* El tratamiento del paciente a insertar no se encuentra registrado dentro del sistema

**Flujo principal**:
1. El secretario selecciona insertar un nuevo tratamiento de paciente
2. El sistema muestra un formulario con los campos de necesarios
3. El secretario rellena el formulario con la información del tratamiento del paciente
4. El sistema almacena el nuevo tratamiento del paciente dentro del fichero
5. El sistema muestra un mensaje de éxito

**Postcondiciones**:

* El tratamiento del paciente insertado debe estar en la base del sistema

**Flujos alternativos**:

1.a. Si ya existe el tratamiento del paciente, se muestra un mensaje de error
