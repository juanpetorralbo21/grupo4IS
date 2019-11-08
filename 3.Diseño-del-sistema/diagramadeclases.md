# DIAGRAMA DE CLASES

## Clase Paciente:
Contiene los parámetros y métodos que han de guardarse en el fichero o base de datos.
* Datos:
- Nombre tipo string
- Apellidos tipo string
- Teléfono tipo int
- Fecha de nacimiento de tipo string
- Tipo de Seguro de tipo string 

Aparte la clase paciente contendrá los observadores y modificadores de los atributos anteriores.

## Clase Cita:
Esta clase tiene contenido de la clase paciente y aparte está contenida en nuestro sistema.
* Datos:
- Fecha tipo string
- Hora de tipo string
- Motivo de tipo string
- Contiene todos los datos de un paciente
- Numero de contacto: tipo Paciente coge el Teléfono incluido en esta clase 

También contiene los observadores y modificadores de los atributos anteriores

## Subclase Historial Médico:
La clase historial contendrá el historial del paciente, unos detalles de lo ocurrido y la fecha de modificacion
* Datos:
- Detalles ocurrido tipo string
- Fecha de modificacion de tipo string 

Contiene los observadores y el modificador de la fecha de moficiación

## Subclase Tratamiento:
Contiene la información de interés del tratamiento de un paciente
* Datos:
- Dosis de tipo string
- Regularidad de tipo string
- Fecha de inicio de tipo string
-Fecha de finalizacion de tipo string 

Contiene los observadores y modificadores de los atributos

## Clase Sistema:
Contiene todas las funciones que engloban a las clases citadas anteriormente, que son las mismas que nuestros casos de uso.
