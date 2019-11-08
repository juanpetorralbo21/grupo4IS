## Consultar Historial del paciente

**ID**: 11
**Descripción**: Muestra por pantalla el historial médico del paciente

**Actores principales**: Secretario

**Precondiciones**:
* El paciente debe tener al menos una entrada en el historial

**Flujo principal**:
1. El administrador selecciona mostrar el historial del paciente
2. El sistema busca todas las entradas del historial del paciente
3. El sistema muestra por pantalla todo este contenido

**Postcondiciones**:

* Ninguna

**Flujos alternativos**:

2.a Si no hay entradas del historial, se muestra un mensaje de error
