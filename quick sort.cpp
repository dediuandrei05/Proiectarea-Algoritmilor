#include <iostream>
using namespace std;

int partitie(int v[], int st, int dr) {
	int pivot = v[dr];
	int i = st - 1;
	for(int j = st; j < dr; j++) {
		if(v[j] < pivot) {
			i++;
			int aux = v[i];
			v[i] = v[j];
			v[j] = aux;
		}
	}
	int aux = v[i + 1];
	v[i + 1] = v[dr];
	v[dr] = aux;
	return i + 1;
}

void quickSort(int v[], int st, int dr) {
	if(st < dr) {
		int p = partitie(v, st, dr);
		quickSort(v, st, p - 1);
		quickSort(v, p + 1, dr);
	}
}

int main() {
	int n, i;
	cout << "Cate numere: ";
	cin >> n;
	int v[100];
	for(i = 0; i < n; i++) {
		cin >> v[i];
	}

	quickSort(v, 0, n - 1);

	cout << "Sortat: ";
	for(i = 0; i < n; i++) {
		cout << v[i] << " ";
	}

	return 0;
}
