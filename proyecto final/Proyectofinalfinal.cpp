#include<iostream>
#include <stdlib.h>
#include<string>
#include <fstream>
using namespace std;

int pls, longi, o;

struct lista {
	string nombre;
	string apellido;
	int matricula;
	string n;
	string telefono;
	string correo;
	string colonia;
	string calle;
	float cal1 = 0, cal2 = 0, cal3 = 0;
	float promedio;

};
lista alumnos[100];


int spm;
int op;
void menu();
void registrar();
void guardar();
void mostrar();
void buscar();
void modificar();
void eliminar();
void guardarDEF();
void manual();

void main() {
	locale::global(locale("spanish"));
	system("cls");
	menu();
}

void registrar() {

	system("cls");
	cin.ignore();
	cout << "Nombre(s): ";
	getline(cin, alumnos[pls].nombre);
	cout << "Apellidos: ";
	getline(cin, alumnos[pls].apellido);
	cout << "Matrícula: ";
	cin >> alumnos[pls].matricula;
	cin.ignore();
	system("pause>nul");
	cout << "Numero de teléfono: ";
	getline(cin, alumnos[pls].telefono);

	longi = alumnos[pls].telefono.size();
	while (longi < 8 || longi > 12) {

		cout << "ERROR! D:. El numero de teléfono debe tener al menos 8 digitos y ser menor a 12. " << endl;
		break;
		getline(cin, alumnos[pls].telefono);
		longi = alumnos[pls].telefono.size();
	}


	cin.ignore();
	cout << "Correo (email): ";
	int i, ARROBA = 0, COM = 0;
	while (ARROBA == 0 || COM == 0) {
		getline(cin, alumnos[pls].correo);
		for (i = 0; alumnos[pls].correo[i] != NULL; i++) {
			if (alumnos[pls].correo[i] == '@') {
				ARROBA++;
			}
			if (alumnos[pls].correo[i] == '.') {
				COM++;
			}
			if (alumnos[pls].correo[i] == 'c') {
				COM++;
			}
			if (alumnos[pls].correo[i] == 'o') {
				COM++;
			}
			if (alumnos[pls].correo[i] == 'm') {
				COM++;
			}
		
		}

	}


	cin.ignore();
	cout << "Dirección: \nColonia: ";
	getline(cin, alumnos[pls].colonia);
	cout << "Calle: ";
	getline(cin, alumnos[pls].calle);
	cout << "Numero: ";
	getline(cin, alumnos[pls].n);

	cout << "Calificaciones: \nCalificación 1: ";
	cin >> alumnos[pls].cal1;
	if (alumnos[pls].cal1 > 100) {
		alumnos[pls].cal1 = 100;
	}

	cout << "Calificación 2: ";
	cin >> alumnos[pls].cal2;
	if (alumnos[pls].cal2 > 100) {
		alumnos[pls].cal2 = 100;
	}

	cout << "Calificación 3: ";
	cin >> alumnos[pls].cal3;
	if (alumnos[pls].cal2 > 100) {
		alumnos[pls].cal3 = 100;
	}

	if (alumnos[pls].cal1 < 0 || alumnos[pls].cal2 < 0 || alumnos[pls].cal3 < 0) {

		alumnos[pls].promedio = 0;
	}

	else {

		alumnos[pls].promedio = (alumnos[pls].cal1 * 30) / 100 + (alumnos[pls].cal2 * 45) / 100 + (alumnos[pls].cal3 * 25) / 100;
	}
	cout << "Promedio: " << alumnos[pls].promedio << endl;

	pls++;
	guardar();

	cout << "El alumno ha sido registrado, Hurra!" << endl << endl;

	cout << "¿Desea registrar otro alumno?" << endl;
	cout << "1.-Si    2.-No" << endl;
	cin >> spm;
	if (spm == 1) {
		registrar();
	}
	else
		if (spm == 2) {
			menu();
		}


	system("pause>nul");

}



void menu() {
	system("cls");
	cout << "Menu" << endl << endl;
	cout << "1.- Registrar \n2.- Ver registros \n3.- Buscar \n4.- Modificar \n5.- Eliminar \n6.- Manual de Usuario \n7.- Salir" << endl;
	cin >> spm;

	switch (spm) {

	case 1:
		registrar();
		break;

	case 2:
		mostrar();
		break;

	case 3:
		buscar();
		break;

	case 4:
		modificar();
		break;

	case 5:
		eliminar();
		break;

	case 6:
		manual();

	case 7:
		guardar();
		cout << "Gracias";
		system("pause>nul");
		break;

	default:
		cout << "ERROR! D: Eliga una opcion valida" << endl;
		system("pause>nul");
		menu();
		break;
	}


}

void mostrar() {
	system("cls");
	for (int i = 0; i < pls; i++) {
		cout << "Nombre y apellido: " << alumnos[i].nombre << " " << alumnos[i].apellido << endl;
		cout << "Matrícula: " << alumnos[i].matricula << endl;
		cout << "Correo electronico: " << alumnos[i].correo << endl;
		cout << "Numero de contacto: " << alumnos[i].telefono << endl;
		cout << "Dirección: Colonia " << alumnos[i].colonia << " ,Calle " << alumnos[i].calle << " ,Numero " << alumnos[i].n << endl;
		cout << "Calificaciones: " << alumnos[i].cal1 << ", " << alumnos[i].cal2 << ", " << alumnos[i].cal3 << endl;
		cout << "Promedio: " << alumnos[i].promedio << endl << endl;
	}

	cout << "No hay más alumnos registrados.";

	system("pause > nul");

	menu();
}


void buscar() {
	system("cls");
	int matri;
	cout << "Ingrese la matrícula: ";
	cin >> matri;
	bool encontrado = false;

	int i = 0;
	while (i < pls) {
		if (matri == alumnos[i].matricula) {
			cout << "Nombre y apellido: " << alumnos[i].nombre << " " << alumnos[i].apellido << endl;
			cout << "Matrícula: " << alumnos[i].matricula << endl;
			cout << "Correo electronico: " << alumnos[i].correo << endl;
			cout << "Numero de contacto: " << alumnos[i].telefono << endl;
			cout << "Dirección: Colonia " << alumnos[i].colonia << " ,Calle " << alumnos[i].calle << " ,Numero " << alumnos[i].n << endl;
			cout << "Calificaciones: " << alumnos[i].cal1 << ", " << alumnos[i].cal2 << ", " << alumnos[i].cal3 << endl;
			cout << "Promedio: " << alumnos[i].promedio << endl;

			encontrado = true;
			break;
		}
		i++;

	}


	if (!encontrado) {
		cout << "Lo sentimos. El alumno que usted ingresó no existe. Favor de verificarlo. Gracias." << endl;
	}

	i++;


	system("pause>nul");
	menu();
}

void modificar() {
	system("cls");
	cin.ignore();

	int op, o;
	cout << "Ingrese la matrícula: " << endl;
	cin >> op;
	int i = 0;
	while (i < pls) {
		if (alumnos[i].matricula == op) {
			cout << "Nombre y apellido: " << alumnos[i].nombre << " " << alumnos[i].apellido << endl;
			cout << "Matrícula" << ": " << alumnos[i].matricula << endl << endl;
			cout << "Correo electronico: " << alumnos[i].correo << endl;
			cout << "Numero de contacto: " << alumnos[i].telefono << endl;
			cout << "Dirección: Colonia " << alumnos[i].colonia << " ,Calle " << alumnos[i].calle << " ,Numero " << alumnos[i].n << endl;
			cout << "Calificaciones: " << alumnos[i].cal1 << ", " << alumnos[i].cal2 << ", " << alumnos[i].cal3 << endl;
			cout << "Promedio: " << alumnos[i].promedio << endl;

			cout << "¿Que desea modificar?" << endl;
			cout << "1. Matrícula \n2. Nombre \n3. Apellido \n4. Correo Electronico\n5. Telefono \n6. Dirección \n7. Calificaciones \n0. Nada" << endl;
			cin >> op;
			cin.ignore();
			switch (op) {
			case 1:
				cout << "Ingresa nueva matrícula: ";
				cin >> alumnos[i].matricula;
				break;
			case 2:
				cout << "Ingresa nuevo nombre: ";
				getline(cin, alumnos[i].nombre);
				break;
			case 3:
				cout << "Ingresa nuevo apellido: ";
				getline(cin, alumnos[i].apellido);
				break;
			case 4:
				cout << "Ingresa el nuevo correo: ";
				cin >> alumnos[pls].correo;
				break;
			case 5:
				cout << "Ingresa el nuevo teléfono: ";
				getline(cin, alumnos[i].telefono);
				break;
			case 6:
				cout << "¿Qué desea modificar? " << endl;
				cout << "1. Colonia \n2.Calle \n3.Numero ";
				cin >> o;
				switch (o) {
				case 1:
					cin.ignore();
					cout << "Ingresa la nueva colonia : ";
					getline(cin, alumnos[i].colonia);
					break;
				case 2:
					cin.ignore();
					cout << "Ingresa la nueva calle: ";
					getline(cin, alumnos[i].calle);
					break;
				case 3:
					cin.ignore();
					cout << "Ingresa el nuevo número de casa: ";
					getline(cin, alumnos[i].n);
					break;
				default:
					break;
				}
				break;
			case 7:
				cout << "¿Qué calificación desea modificar? " << endl;
				cout << "1. Calificación 1 \n2.Calificación 2 \n3.Calificación 3 ";
				cin >> o;
				switch (o) {
				case 1:
					cin.ignore();
					cout << "Ingresa la nueva Calificación 1 : ";
					cin >> alumnos[i].cal1;
					alumnos[i].promedio = ((alumnos[i].cal1 * .30) + (alumnos[i].cal2 * .45) + (alumnos[i].cal3 * .25) / 3);
					break;
				case 2:
					cin.ignore();
					cout << "Ingresa la nueva Calificación 3: ";
					cin >> alumnos[pls].cal2;
					alumnos[i].promedio = ((alumnos[i].cal1 * .30) + (alumnos[i].cal2 * .45) + (alumnos[i].cal3 * .25) / 3);
					break;
				case 3:
					cin.ignore();
					cout << "Ingresa la nueva Calificación 3: ";
					cin >> alumnos[i].cal3;
					alumnos[i].promedio = ((alumnos[i].cal1 * .30) + (alumnos[i].cal2 * .45) + (alumnos[i].cal3 * .25) / 3);
					break;
				default:
					break;
				}
				break;
			default:
				break;
			}

			if (op != 0) {
				cout << "Modificación exitosa: " << endl;
				cout << "Nombre y apellido: " << alumnos[i].nombre << " " << alumnos[i].apellido << endl;
				cout << "Matrícula" << ": " << alumnos[i].matricula << endl << endl;
				cout << "Correo electronico: " << alumnos[i].correo << endl;
				cout << "Numero de contacto: " << alumnos[i].telefono << endl;
				cout << "Dirección: Colonia " << alumnos[i].colonia << " ,Calle " << alumnos[i].calle << " ,Numero " << alumnos[i].n << endl;
				cout << "Calificaciones: " << alumnos[i].cal1 << ", " << alumnos[i].cal2 << ", " << alumnos[i].cal3 << endl;
				cout << "Promedio: " << alumnos[i].promedio << endl;
			}
			else {
				cout << "No se realizó ninguna modificación." << endl;
			}

			break;
		}
		i++;
	}

	system("pause > nul");
	menu();

}

void eliminar() {
	cin.ignore();
	system("cls");
	int matri;
	int op;
	cout << "Ingrese la matricula del alumno que desea borrar " << endl;
	cin >> matri;
	bool encontradoo = false;

	int i = 0;
	while (i < pls) {
		if (alumnos[i].matricula == matri) {

			cout << "Nombre y apellido: " << alumnos[i].nombre << " " << alumnos[i].apellido << endl;
			cout << "Matrícula: " << alumnos[i].matricula << endl << endl;
			cout << "Correo electronico: " << alumnos[i].correo << endl;
			cout << "Numero de contacto: " << alumnos[i].telefono << endl;
			cout << "Dirección: Colonia " << alumnos[i].colonia << " ,Calle " << alumnos[i].calle << " ,Numero " << alumnos[i].n << endl;
			cout << "Calificaciones: " << alumnos[i].cal1 << ", " << alumnos[i].cal2 << ", " << alumnos[i].cal3 << endl;
			cout << "Promedio: " << alumnos[i].promedio << endl;
			encontradoo = true;

			cout << "¿Está seguro que desea eliminar a " << alumnos[i].nombre << "?" << endl;
			cout << "1. Si \n2. No" << endl;
			cin >> op;

			if (op == 1 && pls != 0) {
				for (int j = i; j < pls; j++)
				{
					alumnos[j] = alumnos[j + 1];
				}
				pls--;
				cout << "Alumno eliminado exitosamente" << endl;
			}
			break;
		}
		if (encontradoo = false) {
			cout << "Lo sentimos. El alumno que usted ingresó no existe. Favor de verificarlo. Gracias." << endl << endl;
		}
		i++;
	}

	system("pause > nul");
	menu();

}

void guardar() {
	cout << "¿Deseas guardar?" << endl;
	cout << "1.- Sí \n2. No." << endl;

	cin >> o;

	if (o == 1)
	{
		ofstream archivo;

		archivo.open("Datos de Alumnos.data", ios::binary);

		archivo.write((char*)&alumnos, sizeof(alumnos));

		archivo.close();
		guardarDEF();
	}
}

void guardarDEF() {

	ofstream archivo;

	archivo.open("Datos de Alumnos.csv");

	archivo << "Matricula" << ",";
	archivo << "Nombre(s)" << ",";
	archivo << "Apellido(s)" << ",";
	archivo << "Correo" << ",";
	archivo << "Teléfono" << ",";
	archivo << "Colonia" << ",";
	archivo << "Calle" << ",";
	archivo << "Num de casa" << ",";
	archivo << "Calificacion 1" << ",";
	archivo << "Calificacion 2" << ",";
	archivo << "Calificacion 3" << ",";
	archivo << "Promedio" << ",";
	archivo << endl << endl;

	for (int i = 0; i < pls; i++) { 
		archivo << to_string(alumnos[i].matricula) << ",";
		archivo << alumnos[i].nombre << ",";
		archivo << alumnos[i].apellido << ",";
		archivo << alumnos[i].correo << ",";
		archivo << alumnos[i].telefono << ",";
		archivo << alumnos[i].colonia << ",";
		archivo << alumnos[i].calle << ",";
		archivo << alumnos[i].n << ",";
		archivo << alumnos[i].cal1 << ",";
		archivo << alumnos[i].cal2 << ",";
		archivo << alumnos[i].cal3 << ",";
		archivo << alumnos[i].promedio << ",";
		archivo << endl;
	}

	archivo.close();

}

void manual() {
	cout << "# Universidad Autonoma de Nuevo León" << endl;
	cout << "## FACULTAD DE CIENCIAS FISICO MATEMÁTICAS." << endl;
	cout << "### MANUAL DE USUARIO." << endl;
	cout << "#### Hecho por: Emilio Francisco Moreno Nava." << endl;
	cout << "---" << endl;
		cout << "# Introducción:" << endl;
		cout << "El objetivo de hacer este proyecto es para poner en prueba lo que hayamos aprendido durante el semestre en la clase de Programación Básica." << endl << endl;

		cout << "El proyecto es una especie de registrador en donde al usuario se le pide los siguientes datos :" << endl << endl << endl;


		cout << "-Nombre." << endl;
		cout << "- Apellidos." << endl;
		cout << "- Correo electrónico." << endl;
		cout << "- Teléfono." << endl;
		cout << "- Matrícula." << endl;
		cout << "- Dirección." << endl;
		cout << "- Calle." << endl;
		cout << "- Número." << endl;
		cout << "- Colonia." << endl;

		cout << "El programa debe estar validado para marcar los errores a la hora de registrar y mostrar en pantalla al usuario cómo corregir dichos errores para realizar un registro exitoso" << endl << endl;
		cout << "---" << endl;
		cout << "__Índice:__" << endl;
		cout << "1. Menú y sus funciones." << endl;
		cout << "2. Errores y soluciones." << endl;
		cout << "---" << endl;
		cout << "__1.__ Menú de opciones y sus funciones." << endl << endl;

		cout << "__Menú­­ : __" << endl;
		cout << "Es lo primero que sale al correr el programa; en el se pueden encontrar las siguientes opciones :" << endl << endl;

		cout << "*__Registrar : __ Aquí es donde el usuario llena los datos ya mencionados.Una vez terminado el registro se regresa al menú." << endl << endl;

		cout << "* __Mostrar : __ En este apartado se “muestran” a los alumnos ya registrados, cada uno con sus respectivos datos." << endl << endl;

		cout << "* __Buscar : __ Aquí se le pide al usuario que introduzca la matricula del alumno que esté buscando, esta debe estar registrada, de lo contrario el programa avisará al usuario que no se encontró dicho alumno." << endl << endl;

		cout << "* __Modificar : __ Aquí se le pide al usuario que introduzca la matricula del alumno que desee modificar.Puede modificarse todo el alumno registrado o solamente unos apartados, si así lo desea el usuario." << endl << endl;

		cout << "* __Borrar : __ Aquí se le pide al usuario que introduzca la matricula del alumno que desee borrar.En este apartado el usuario podrá eliminar por completo a cualquier alumno registrado." << endl << endl;

		cout << "* __Salir : __ Esta es la última opción del menú.El usuario deberá seleccionar esta opción cuando haya terminado con el registro.Una vez seleccionada el programa se cerrará." << endl << endl;

		cout << "---" << endl;
		cout << "__2.__ Errores y soluciones." << endl;
		cout << "- __Error de correo electrónico__ : El correo electrónico debe incluir un @ y.com al final, de lo contrario se marcará error y se le pedirá al usuario que ingrese un correo valido." << endl << endl;


		cout << "- __Error de teléfono__ : En este apartado solo están permitidos los números, si se llega a introducir otro carácter el programa marcará error0." << endl << endl;

		cout << "También solo se pueden registrar 10 números.Si al momento de registras se excede el límite de números se marcara error y se le pedirá al usuario que ingrese un número de teléfono válido" << endl << endl;



		cout << "-__Error de matrícula__ : Al igual que el punto anterior solamente está permitido ingresar números.La matrícula debe ser registrada con exactamente 7 dígitos, de lo contrario se marcará error y se le pedirá al usuario que ingrese una matrícula valida." << endl << endl;
		
		system("pause>nul");
	menu();
}