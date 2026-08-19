// arreglo de 8 elemento- memoria estatica 
//encabezado 
#include <iostream>
using namespace std; // espacio de trabajo 
const int numero_global = 8; // variable global 
// funcion secundaria 
int sumatoria(int numero_secundario_local) {
	int resultado = 0, total = 0, total2 = 0;
	int arreglo_numeros[numero_global];
	for (int i = 0;i < numero_secundario_local; i++) {
		cout << " ingrese el valor de la posicion actual :" << endl;
		cin >> arreglo_numeros[i];
		total += arreglo_numeros[i];
		total2 = total2 + arreglo_numeros[i];

	}
	cout << total << endl;
	cout << total2 << endl;
	// return resultado 
	return resultado;

}
// funcion principal 
int main()
{

	int rest_main = 0;
	int numero_local_main = 0;
	rest_main = sumatoria(numero_global);
	cout << " el numero de la suma 1 es: " << endl;
	cout << rest_main << endl;
	cout << "cuantos numeros quiere capturar? ( manor 8) " << endl;
	cin >> numero_local_main;
	cout << " el resultado de la suma 2 es :" << endl;
	cout << rest_main << endl;
	return 0;
}