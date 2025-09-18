#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector <string> nombres;
    map <string, int> contador;

    for (int i=0; i<n; i++) {
        string aux;
        cin >> aux;
        nombres.push_back(aux);
    }

    for (string nombre: nombres) {
        contador[nombre]++;
        if (contador[nombre] == 1){
            cout << "OK" << endl;
        } else if (contador[nombre] >= 2){
            cout << nombre << contador[nombre] -1 << endl;
        }
    }

    return 0;
}