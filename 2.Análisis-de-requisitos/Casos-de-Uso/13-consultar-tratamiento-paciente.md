## Consultar tratamientos paciente

**ID**: 13
**Descripción**: Consulta cuáles son los tratamientos asignados al paciente

**Actores principales**: Secretario
**Actores secundarios**: Usuario

**Precondiciones**:
* El historial del paciente debe de encontrarse registrado

**Flujo principal**:
1. El secretario desea modificar los datos del historial de un usuario
2. El secretario abre el cuadro de diálogo de búsqueda en el menú principal
3. El secretario introduce el nombre y apellidos del usuario
4. El secretario indica que desea modificar el historial del usuario
5. El secretario modifica el historial del usuario
6. El sistema muestra por pantalla el nuevo historial del usuario

**Postcondiciones**:

* El historial del paciente se almacenan modificados

**Flujos alternativos**:

3.a. Si se introduce un dato incorrecto , el historial del paciente no se modificará
3.b. Si no existe el historial del paciente, aparecerá un mensaje de error
