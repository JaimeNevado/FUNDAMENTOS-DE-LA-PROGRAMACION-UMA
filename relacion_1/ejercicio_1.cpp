/*

Diseña un algoritmo que lea de teclado un número real que representa el valor de un ángulo
expresado en grados y muestre por pantalla ese valor expresado en radianes. Podemos suponer
que el dato de entrada es correcto. Recuerda que 180 grados equivalen a π radianes (podemos
aproximar π como 3.1416). Por ejemplo, si se introduce un valor de 360 grados, la salida será
6.2832 radianes.

*/

#include <iostream>

using namespace std;

const	double	PI = 3.1416;

int	main(void)
{
	int	angulo;

	angulo = 0;
	cin >> angulo;
	cout << "El ángulo es: " << angulo * PI/180 << endl;
	return (0);
}
