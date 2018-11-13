# Universidad Autonoma de Nuevo León
## FACULTAD DE CIENCIAS FISICO MATEMÁTICAS.
### MANUAL DE USUARIO.
#### Hecho por: Emilio Francisco Moreno Nava.
- - -
# Introducción:
El objetivo de hacer este proyecto es para poner en prueba lo que hayamos aprendido durante el semestre en la clase de Programación Básica. 

El proyecto es una especie de registrador en donde al usuario se le pide los siguientes datos:   


- Nombre.
- Apellidos.
- Correo electrónico.
- Teléfono.    
- Matrícula.
- Dirección.
    - Calle.
    - Número.
    - Colonia.
    
El programa debe estar validado para marcar los errores a la hora de registrar y mostrar en pantalla al usuario cómo corregir dichos errores para realizar un registro exitoso
- - -
__Índice:__
1. Menú y sus funciones.
2. Errores y soluciones.
- - -
__1.__ Menú de opciones y sus funciones.

__Menú­­:__    
Es lo primero que sale al correr el programa; en el se pueden encontrar las siguientes opciones:  

* __Registrar:__ Aquí es donde el usuario llena los datos ya mencionados. Una vez terminado el registro se regresa al menú.

* __Mostrar:__ En este apartado se “muestran” a los alumnos ya registrados, cada uno con sus respectivos datos.

* __Buscar:__ Aquí se le pide al usuario que introduzca la matricula del alumno que esté buscando, esta debe estar registrada, de lo contrario el programa avisará al usuario que no se encontró dicho alumno.

* __Modificar:__ Aquí se le pide al usuario que introduzca la matricula del alumno que desee modificar. Puede modificarse todo el alumno registrado o solamente unos apartados, si así lo desea el usuario.

* __Borrar:__ Aquí se le pide al usuario que introduzca la matricula del alumno que desee borrar. En este apartado el usuario podrá eliminar por completo a cualquier alumno registrado.

* __Salir:__ Esta es la última opción del menú. El usuario deberá seleccionar esta opción cuando haya terminado con el registro. Una vez seleccionada el programa se cerrará.

- - -
__2.__ Errores y soluciones.
- __Error de correo electrónico__: El correo electrónico debe incluir un @ y .com al final, de lo contrario se marcará error y se le pedirá al usuario que ingrese un correo valido.


- __Error de teléfono__: En este apartado solo están permitidos los números, si se llega a introducir otro carácter el programa marcará error.
 
  También solo se pueden registrar 10 números. Si al momento de registras se excede el límite de números se marcara error y se le pedirá al usuario que ingrese un número de teléfono válido
   


- __Error de matrícula__: Al igual que el punto anterior solamente está permitido ingresar números. La matrícula debe ser registrada con exactamente 7 dígitos, de lo contrario se marcará error y se le pedirá al usuario que ingrese una matrícula valida.
