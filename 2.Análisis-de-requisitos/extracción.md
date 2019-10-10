## Extracción de requisitos

#### Partes interesadas:
* Principal:  Secretario
* Secundaria: 

#### Datos que gestiona el sistema:
* Clientes
  * Nombre
  * Apellidos
  * Fecha nacimiento
  * Dirección
  * Teléfono
  * Tipo de seguro
* Historial médico (máx. 1 por usuario)
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
7. Listar citas de la semana
8. Insertar nueva cita
9. Buscar cita por apellido del paciente
10. 
11. Modificar cita
12. Cancelar cita
13. Mostrar historial paciente
14. Insertar nuevo historial de paciente
15. Modificar historial paciente
16. Eliminar historial paciente
17. Introducir nuevo tratamiento paciente
18. Modificar tratamiento paciente
19. Finalizar tratamiento

#### Requisitos no funcionales
* Sistema operativo Linux
* Interfaz CLI
* Lenguaje de implementación: C++
* Máximo 10 GiB de almacenamiento
* Gestión mínima de 200 pacientes
