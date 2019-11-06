## Insertar nuevo historial de paciente

**ID**: 12
**Descripción**: Se inserta un nuevo historial del paciente en el sistema

**Actores principales**: Secretario
**Actores secundarios**: Usuario

**Precondiciones**:
* El historial del paciente a insertar no se encuentra registrado dentro del sistema

**Flujo principal**:
1. El secretario selecciona insertar un nuevo historial de usuario
2. El sistema muestra un formulario con los campos de necesarios
3. El secretario rellena el formulario con la información del historial del paciente
4. El sistema almacena la nueva entrada del historial del paciente dentro del fichero
5. El sistema muestra un mensaje de éxito

**Postcondiciones**:

* El historial del paciente insertado debe estar en la base del sistema

**Flujos alternativos**:

