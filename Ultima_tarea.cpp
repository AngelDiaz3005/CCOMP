#include <iostream>
//añadari cocktailsort
using namespace std;

void cocktailsort(int* ini, int* fin) {
	bool cambio = true;
	int inicio = 0, final = 0;
	int contp = 0;

	for (int* B = ini; B < fin; B++) {

		cambio = false;

		for (int* A = ini + inicio; A < fin - final; A++) {
			if (*A > * (A + 1)) {
				swap(*A, *(A + 1));
				cambio = true;
			}
		}

		++final;

		if (cambio == false) {
			break;
		}

		cambio = false;

		for (int* A = fin - final; ini + inicio < A; A--) {
			if (*A < *(A - 1)) {
				swap(*A, *(A - 1));
				cambio = true;
			}
		}

		++inicio;

		if (cambio == false) {
			break;
		}

	}

}

void ordenar(int* ini, int* final, int size) {

	int cont = 0 - 1; //CONTADOR DE PARES

	//ORDENAR MITAD PARES Y MITAD IMPARES
	for (int* p = ini; p < final; p++) {
		for (int* p = ini; p < final; p++) {
			if (*(p - 1) % 2 > 0) {
				swap(*p, *(p - 1));
			}
		}
	}
	for (int* p = ini; p < final; p++) {
		if (*p % 2 == 0) {
			cont++;
		}
	}
	/*----------------------------------------------------*/
	cout << cont << endl;

	cocktailsort(ini, ini + cont);
	cocktailsort(ini + cont + 1, final - 1);
}

void imprimir(int* ini, int* final) {
	for (; ini < final; ini++) {
		cout << *ini << " ";
	}
}

int main() {
	int size;
	int paresimpares[] = { 1,2,3,4,5,6,7,8,9,10 };

	size = sizeof(paresimpares) / sizeof(*paresimpares);

	ordenar(paresimpares, paresimpares + size, size);
	imprimir(paresimpares, paresimpares + size);

	return 0;

}