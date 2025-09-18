#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int contador = 0;
    int suma = 0;
    vector<int> vectorcito;

    for (int i = 0; i < n; i++) {
        int aux;
        cin >> aux;
        if (aux < 0) {
            vectorcito.push_back(aux);
        } else {
            vectorcito.push_back(0);
        }
    }

    sort(vectorcito.begin(), vectorcito.end());

    while (contador <= m) {
        for(int i=0; i<m; i++){
            if(vectorcito[i] < 0){
                suma += vectorcito[i];
                contador++;
            } else{
                suma += 0;
                contador++;
            }
        }
    }

    cout << abs(suma)/2 << endl;
    return 0;
}