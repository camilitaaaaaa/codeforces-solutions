#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
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
 
    /*cout << "VECTOR: "<< endl;
    for (int i=0; i<n; i++){
       cout << nombres[i] << " ";
    }*/
 
    for (string nombre: nombres) {
        contador[nombre]++;
        if (contador[nombre] == 1){
            cout << "NO" << endl;
        } else if (contador[nombre] >= 2){
            cout << "YES" << endl;
        }
    }
 
    /*for (auto par: contador) {
        cout << par.first << ": " << par.second << endl;
    } */
    return 0;
}