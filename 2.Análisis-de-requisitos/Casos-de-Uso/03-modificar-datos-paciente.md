## Modificar los datos del paciente

**ID**: 03
**Descripción**: Primero se deberá buscar el usuario y una vez encontrado,se debe indicar el dato que desea modificar.

**Actores principales**: Administrador
**Actores secundarios**: Usuario

**Precondiciones**:
* Ninguna

**Flujo principal**:
1. El administrador desea modificar los datos de un usuario
1. El administrador abre el cuadro de diálogo de búsqueda en el menú principal
1. El administrador introduce el nombre y apellidos del usuario
1. El administrador indica que desea modificar "x" dato del usuario
1. El administrador modifica el dato del usuario
1. El sistema muestra por pantalla los nuevos datos del usuario

**Postcondiciones**:

* Los datos del usuario son modificados

**Flujos alternativos**:

3.a. Si se introduce un dato incorrecto , el usuario no se modificará
3.b. Si no existe el usuario, aparecerá un mensaje de error
