## Eliminar paciente

**ID**: 07
**Descripción**: Se introduce una nueva cita

**Actores principales**: Secretario

**Precondiciones**:
* El paciente se encuentre registrado en el sistema

**Flujo principal**:
1. El secretario selecciona introducir nueva cita
2. El sistema muestra por pantalla un formulario de registro
3. El secretario rellena los campos
4. El sistema identifica la fecha y hora introducida
5. El sistema busca dentro del fichero si ya hay una cita registrada para esa fecha
6. El sistema almacena la cita en el fichero
7. El sistema muestra un mensaje de exito al secretario

**Postcondiciones**:

* El sistema debe de situar el registro de cita por orden en el fichero

**Flujos alternativos**:

7.a. Si no se rellenan correctamente todos los campos del formulario, se muestra un error
7.b  Si ya existe una cita para la fecha y hora seleccionada, se muestra un error
