#include <iostream>
using namespace std;

int main(){
	int arregloEstatico[5];
	cout << "Dir arr: " << arregloEstatico << endl;
	//apuntador de enteros
	int* apuntador = arregloEstatico;
	cout << "Dir ptr: " << apuntador << endl;
	
	for (int i = 0; i < 5; i++){
		arregloEstatico[i] = i + 1;
	}

	cout << "Contenidor de ptr: " << endl;

	//imprimir contenido
	for (int i = 0; i < 5; i++){
		cout << apuntador[i] << endl;
	}
	cout << "___________" << endl;
	cout << *(apuntador + 4) << endl;

	//Reservar arreglo tamaño 10
	apuntador = new int [10];
	cout << "Dir arreglo en heap: " << apuntador << endl;

	//liberar memoria
	delete[] apuntador;
	apuntador = NULL;
	delete[] apuntador;

	//Matrices
	int** matriz;
	matriz = new int*[5];
	for (int i = 0; i < 5; i++){
		matriz [i] = new int [5];
	}

	//Poblar matriz
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++){
			matriz [i][j] = i*j;
		}
	}

	//Usar la matriz


	//Liberar la memoria
	for (int i = 0; i < 5; i++){
		delete[] matriz[5];
	}
	delete[] matriz;
	return 0;

}









