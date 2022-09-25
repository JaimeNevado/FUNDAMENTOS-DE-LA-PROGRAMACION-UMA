/*

Diseña un algoritmo que lea de teclado dos instantes de tiempo en un mismo día, cada uno
representado por dos números naturales que indican la hora (en formato 24 horas) y los
minutos, y muestre por pantalla la diferencia entre ellos, también expresada en horas y
minutos. Podemos suponer que los datos de entrada son correctos y primero se introduce el
instante anterior y después el posterior. Por ejemplo, si se introduce como primer instante 10
horas y 45 minutos, y como segundo instante 14 horas y 25 minutos, la salida será 3 horas y 40
minutos.

*/

#include <iostream>

using namespace std;

int	main(void)
{
	int	hora1, hora2, minutos1, minutos2, tiempo1, tiempo2;
	int	diferencia, horasFinales, minutosFinales;

	cout << "Introduce la hora del primer momento: " << endl;
	cin >> hora1;
	cout << "Introduce los minutos del primer momento: " << endl;
	cin >> minutos1;
	tiempo1 = hora1 * 60 + minutos1; 

	cout << "Introduce la hora del segundo momento: " << endl;
	cin >> hora2;
	cout << "Introduce los minutos del segundo momento: " << endl;
	cin >> minutos2;
	tiempo2 = hora2 * 60 + minutos2;  

	diferencia = tiempo2 - tiempo1;
	
	horasFinales = diferencia / 60;
	minutosFinales = diferencia % 60;

	if (minutosFinales > 0)
		cout << "La diferencia entre el primer momento y el segundo es de: " << horasFinales << " horas y " << minutosFinales << " minutos" << endl;	
	else if (minutosFinales == 0 && horasFinales != 0)
		cout << "La diferencia entre el primer momento y el segundo es de: " << horasFinales << " horas " << endl;
	else
		cout << "Los dos momentos introducidos son iguales" << endl;
	return (0);
}
