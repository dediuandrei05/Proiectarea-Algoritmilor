
#include <iostream>
using namespace std;

int main() {
    int n, i, j, aux;
    cout << "Cate numere: ";
    cin >> n;
    int v[100];
    for(i = 0; i < n; i++) {
        cin >> v[i];
    }

    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(v[j] > v[j+1]) {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }

    cout << "Sortat: ";
    for(i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}
