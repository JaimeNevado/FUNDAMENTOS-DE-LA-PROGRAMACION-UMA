/*

Diseña un algoritmo para calcular el salario neto de un trabajador en una determinada empresa.
Para ello se leerán dos números de teclado. El primero será un número real que representa el
sueldo base del empleado. El segundo será un número natural que representa la antigüedad (en
años) del empleado en la empresa. El salario bruto del empleado se calcula sumando al sueldo
base unas gratificaciones por antigüedad. En concreto, el empleado recibirá 60 € por
quinquenio trabajado y 6 € por cada año del tramo para conseguir el siguiente quinquenio.
Finalmente, el salario neto se calcula restando al salario bruto un 20% de impuestos sobre el
salario bruto más un 5% de seguro médico también sobre el salario bruto. Por ejemplo, si se
introducen 1400 euros de sueldo base y una antigüedad de 28 años, el salario neto que
aparecerá por pantalla será de 1288.5 euros

*/

#include <iostream>

using namespace std;

int	main(void)
{
	unsigned int	sueldoBase, antiguedad, salarioBruto;
	float salarioNeto;

	// salarioBruto = +60€ por cada 5 años y 6€ al año
	// salarioNeto = bruto * 0,75
	cout << "Inserte su sueldo base: " << endl;
	cin >> sueldoBase;
	cout << "Inserte la antiguedad: " << endl;
	cin >> antiguedad;

	salarioBruto = sueldoBase + (60 * (antiguedad / 5) + (6 * (antiguedad % 5)));
	salarioNeto = salarioBruto * 0.75;

	cout << "El salario neto es de: " << salarioNeto << " euros" << endl;	

	return (0);
}
