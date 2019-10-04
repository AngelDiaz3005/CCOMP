#include <iostream>
//añadari cocktailsort
using namespace std;

void ordenar(int* ini, int* final, int size) {
	int cont = 0;
	for (int* p=ini; p < final; p++) {
		for (int* p = ini; p < final; p++) {
			if (*(p - 1) % 2 > 0) {
				swap(*p, *(p - 1));
			}
		}
	}
	for (int* p = final-(size/2+1); p > ini; p--) {
		for (int* p = final - (size / 2+1); p > ini; p--) {
			if (*p < *(p - 1)) {
				swap(*p, *(p - 1));
			}
		}
	}
	for (int* p = ini + (size / 2-1); p < final-1; p++) {
		for (int* p = ini + (size / 2-1); p < final-1; p++) {
			if (*p > *(p + 1)) {
				swap(*p, *(p + 1));
			}
		}
	}
}

void imprimir(int* ini, int* final) {
	for (; ini < final; ini++) {
		cout << *ini << ",";
	}
}

int main() {
	int size;
	int paresimpares[] = {8,9,6,5,4,2,6,9,57,789,98,56,5,1,21};
	
	size = sizeof(paresimpares) / sizeof(*paresimpares);

	ordenar(paresimpares, paresimpares + size, size);
	imprimir(paresimpares, paresimpares + size);
	
	return 0;

}