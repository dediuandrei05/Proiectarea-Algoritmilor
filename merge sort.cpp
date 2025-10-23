
#include <iostream>
using namespace std;

void mergee(int v[], int st, int mij, int dr) {
    int i, j, k;
    int n1 = mij - st + 1;
    int n2 = dr - mij;
    int L[100], R[100];

    for(i = 0; i < n1; i++)
        L[i] = v[st + i];
    for(j = 0; j < n2; j++)
        R[j] = v[mij + 1 + j];

    i = 0;
    j = 0;
    k = st;

    while(i < n1 && j < n2) {
        if(L[i] <= R[j]) {
            v[k] = L[i];
            i++;
        } else {
            v[k] = R[j];
            j++;
        }
        k++;
    }

    while(i < n1) {
        v[k] = L[i];
        i++;
        k++;
    }

    while(j < n2) {
        v[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int v[], int st, int dr) {
    if(st < dr) {
        int mij = (st + dr) / 2;
        mergeSort(v, st, mij);
        mergeSort(v, mij + 1, dr);
        mergee(v, st, mij, dr);
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

    mergeSort(v, 0, n - 1);

    cout << "Sortat: ";
    for(i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}
