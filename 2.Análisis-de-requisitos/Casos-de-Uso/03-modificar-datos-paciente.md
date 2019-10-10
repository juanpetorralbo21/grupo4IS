## Modificar los datos del paciente

**ID**: 03
**Descripción**: Primero se deberá buscar el paciente y una vez encontrado,se debe indicar el dato que desea modificar.

**Actores principales**: Secretario
**Actores secundarios**: Usuario

**Precondiciones**:
* El paciente debe de encontrarse registrado

**Flujo principal**:
1. El secretario desea modificar los datos de un usuario
2. El secretario abre el cuadro de diálogo de búsqueda en el menú principal
3. El secretario introduce el nombre y apellidos del usuario
4. El secretario indica que desea modificar "x" dato del usuario
5. El secretario modifica el dato del usuario
6. El sistema muestra por pantalla los nuevos datos del usuario

**Postcondiciones**:

* Los datos del paciente se almacenan modificados

**Flujos alternativos**:

3.a. Si se introduce un dato incorrecto , el paciente no se modificará
3.b. Si no existe el paciente, aparecerá un mensaje de error
