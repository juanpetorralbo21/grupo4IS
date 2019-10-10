## Insertar nuevo paciente o usuario

**ID**: 02
**Descripción**: Se inserta un nuevo paciente en el sistema

**Actores principales**: Secretario
**Actores secundarios**: Usuario

**Precondiciones**:
* El paciente a insertar no se encuentra registrado dentro del sistema

**Flujo principal**:
1. El secretario selecciona insertar un nuevo usuario
2. El sistema muestra un formulario con los campos de registro necesarios
3. El administrador rellena el formulario con la información del paciente
4. El sistema busca dentro del fichero de pacientes según apellidos y nombre
5. El sistema almacena el nuevo paciente dentro del fichero
6. El sistema muestra un mensaje de éxito

**Postcondiciones**:

* El paciente insertado debe estar en la base del sistema

**Flujos alternativos**:

2.a. Si ya existe el paciente, se muestra un mensaje de error
