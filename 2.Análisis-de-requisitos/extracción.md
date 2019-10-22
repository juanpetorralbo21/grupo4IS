## Extracción de requisitos

#### Partes interesadas:
* Principal:  Secretario
* Secundaria: Desarrolladores

#### Datos que gestiona el sistema:
* Clientes
  * Nombre
  * Apellidos
  * Fecha nacimiento
  * Dirección
  * Teléfono
  * Tipo de seguro
* Historial médico
  * Detalles ocurrido
  * Fecha de modificación
* Tratamiento 
  * Dosis
  * Regularidad
  * Fecha inicio
  * Fecha finalización
* Cita
  * Fecha
  * Hora
  * Motivo
  * Paciente
  * Numero de contacto

#### Requisitos funcionales (ordenados por prioridad)
1. Listar pacientes
2. Insertar nuevo paciente
3. Modificar datos paciente
4. Buscar paciente por apellidos y nombre
5. Eliminar paciente
6. Listar citas del día
7. Insertar nueva cita
8. Buscar cita por apellido del paciente
9. Modificar cita
10. Cancelar cita
11. Mostrar o consultar historial paciente
12. Insertar nuevo historial de paciente
13. Eliminar historial paciente
14. Introducir nuevo tratamiento paciente
15. Modificar tratamiento paciente
16. Finalizar tratamiento
17. Mostrar tratamiento de paciente

#### Requisitos no funcionales
* Sistema operativo Linux
* Interfaz CLI
* Lenguaje de implementación: C++
* Máximo 10 GiB de almacenamiento
* Gestión mínima de 200 pacientes
* No se puede modificar el historial pasado de un paciente
* No se puede modificar el tratamiento pasado de un paciente
