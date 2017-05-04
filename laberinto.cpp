// reading text file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//Funcion crea una matriz de chars n x n
char** createMatrix(int);
//Función libera la memoria asignada a una matriz n x n
void freeMatrix(int, char**);


//Imprime la matriz en consola
void printMatrix(int, char**);

int main (int argc, char* argv[]) {
	char letra;
	int size;
	char** matrix;
	ifstream myfile (argv[1]);
	if (myfile.is_open()){
		int cont=0;
	
		//Leer el tama�o de la matriz e iniciarla
		myfile >> size;

		matrix = createMatrix(size);

		//Leer la matriz que contiene el laberinto
		for (int i = 0; i < size; i++){
			for (int j = 0; j < size; j++){
				myfile >> matrix[i][j];
			}
		}

		/*while (!myfile.eof()){
			myfile >> letra;
			cout<<" "<<letra;
			if(cont == 8){
				cout<<endl;
				cont=0;
			} else
				cont++;
			//Llenar la matriz
      
		}*/

		myfile.close();
  	} else 
		cout << "El archivo no existe"; 

	//Imprimir laberinto
	printMatrix(size, matrix);

	//llamar funci�n SalirLaberinto
	//Liberar Memoria
	freeMatrix(size, matrix);

	return 0;
}

//Imprimir una matriz
void printMatrix(int size, char** matrix){
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			cout << " " << matrix[i][j];
		}
		cout << endl;
	}
}

//Crear matriz
char** createMatrix(int n){
	char** retVal = new char*[n];
	for (int i = 0; i < n; i++){
		retVal[i] = new char[n];
	}
	return retVal;
}

//Liberar memoria
void freeMatrix(int n, char** matrix){
	for (int i = 0; i < n; i++){
		delete[] matrix[i];
	}
	delete[] matrix;
}






