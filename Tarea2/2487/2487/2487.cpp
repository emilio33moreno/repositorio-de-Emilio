#include <iostream>
using namespace stc;
int main() {
	locale::global(locale("spanish"));
	cout << "�Cu�l es tu nombre?:" << endl;
	char N[20];
	cin >> N;
	cout << "�Cu�l es tu apellido?:" << endl;
	char A[20];
	cin >>A;
	cout << "�Cu�ntos a�os tienes?:" << endl;
	int E;
	cin >> E;
	cout << "Introduce tu numero de tel�fono:" << endl;
	char T[20];
	cin >> T;
	cout << "Nombre:" << A; cout << "," << N << endl;
	cout << "-- -" << endl;
	cout << "Edad:" << E; cout << "a�os." << endl;
	cout << "Tel�fono : +52" << T << endl;
	system("pause");
	return 0;
}
