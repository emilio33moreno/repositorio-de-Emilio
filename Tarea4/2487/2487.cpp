#include<iostream>
#include<math.h>
using namespace std;

void main() {

	float x, y, r, a;

	cout << "El programa calcula las coordenadas (x,y) dado el radio y su angulo sexagesimal." << endl;
	cout << "Introduce el radio: ";
	cin >> r;
	cout << "Introduce el angulo: ";
	cin >> a;

	a = a * 3.14159265 / 180;
	x = r * (cos(a));
	y = r * (sin(a));
	cout << "Las coordenadas son(" << x << "," << y << ") " << endl;


	system("pause");



}