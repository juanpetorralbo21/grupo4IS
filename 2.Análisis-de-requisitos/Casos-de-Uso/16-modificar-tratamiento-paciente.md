## Modificar tratamiento del paciente

**ID**: 16
**Descripción**: Primero se deberá buscar el tratamiento del paciente y una vez encontrado, se debe indicar el dato que desea modificar.

**Actores principales**: Secretario
**Actores secundarios**: Usuario

**Precondiciones**:
* El tratamiento del paciente debe de encontrarse registrado

**Flujo principal**:
1. El secretario desea modificar los datos del tratamiento de un usuario
2. El secretario abre el cuadro de diálogo de búsqueda en el menú principal
3. El secretario introduce el nombre y apellidos del usuario
4. El secretario indica que desea modificar el tratamiento del usuario
5. El secretario modifica el tratamiento del usuario
6. El sistema muestra por pantalla el nuevo tratamiento del usuario

**Postcondiciones**:

* El tratamiento del paciente se almacenan modificados

**Flujos alternativos**:

3.a. Si se introduce un dato incorrecto , el tratamiento del paciente no se modificará
3.b. Si no existe el tratamiento del paciente, aparecerá un mensaje de error
