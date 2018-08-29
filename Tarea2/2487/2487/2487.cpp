#include <iostream>
using namespace stc;
int main() {
	locale::global(locale("spanish"));
	cout << "¿Cuál es tu nombre?:" << endl;
	char N[20];
	cin >> N;
	cout << "¿Cuál es tu apellido?:" << endl;
	char A[20];
	cin >>A;
	cout << "¿Cuántos años tienes?:" << endl;
	int E;
	cin >> E;
	cout << "Introduce tu numero de teléfono:" << endl;
	char T[20];
	cin >> T;
	cout << "Nombre:" << A; cout << "," << N << endl;
	cout << "-- -" << endl;
	cout << "Edad:" << E; cout << "años." << endl;
	cout << "Teléfono : +52" << T << endl;
	system("pause");
	return 0;
}
