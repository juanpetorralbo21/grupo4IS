## Insertar nuevo paciente o usuario

**ID**: 02
**Descripción**: Se inserta un nuevo usuario en el sistema

**Actores principales**: Administrador
**Actores secundarios**: Usuario

**Precondiciones**:
* El paciente a insertar no se encuentra en el sistema

**Flujo principal**:
1. El administrador desea insertar un nuevo usuario
1. El administrador abre el cuadro de insertar usuario en el menú principal
1. El sistema le pide al administrador los datos del usuario a crear
1. El administrador inserta los datos del usuario
1. El sistema muestra por pantalla los datos del usuario

**Postcondiciones**:

* El paciente insertado debe estar en la base del sistema

**Flujos alternativos**:

2.a. Si ya existe el usuario, se muestra un mensaje de error
