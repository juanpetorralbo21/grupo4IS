## Extracción de requisitos

#### Partes interesadas:
* Principal:  Secretario
* Secundaria: 

#### Datos que gestiona el sistema:
* Clientes
  * Nombre
  * Apellidos
  * Fecha nacimiento
  * Teléfono
  * Tipo de seguro
* Historial médico (máx. 1 por usuario)
  * Detalles ocurrido
  * Fecha
  * Hora
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

#### Requisitos funcionales (ordenados por prioridad)
1. Listar pacientes
   Insertar nuevo paciente
2. Modificar datos paciente
3. Buscar paciente por apellidos y nombre
4. Eliminar paciente
5. 
 . Listar citas del día
 . Listar citas de la semana
6. Insertar nueva cita
 . Buscar cita por apellido del paciente
 . Buscar todas las citas del paciente
7. Modificar cita
8. Cancelar cita
 . 
 . Mostrar historial paciente
 . Insertar nuevo historial de paciente
 . Modificar historial paciente
 . Eliminar historial paciente
   

1. Añadir nueva mascota
1. Mostrar una lista de los usuarios
1. Buscar usuario por nombre y apellidos
1. Modificar datos de usuario
1. Modificar datos de mascota
1. Mostrar todas las mascotas de un usuario
1. Mostrar todas las mascotas de un tipo concreto

#### Requisitos no funcionales
* Sistema operativo Linux
* Interfaz CLI
* Lenguaje de implementación: C++
* Máximo 10 GiB de almacenamiento
