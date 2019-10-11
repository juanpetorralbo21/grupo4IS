## Eliminar historial del paciente

**ID**: 16
**Descripción**: Se elimina el historial del paciente

**Actores principales**: Secretario
**Actores secundarios**: Usuario

**Precondiciones**:
* Debe existir el historial del paciente

**Flujo principal**:
1. El secretario desea eliminar el historial de un paciente de la lista
2. El secretario introduce el nombre y apellidos del usuario
3. El secretario selecciona mostrar el historial del paciente
4. El secretario elimina el historial del cliente
5. El hisorial se elimina

**Postcondiciones**:

* El historial ya no deberia de aparecer

**Flujos alternativos**:

1.a. Si no existe el historial del paciente, se muestra un mensaje de error
