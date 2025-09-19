#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
 
int main(){
    string palabra;
    cin >> palabra;
    char actual;
 
    vector <char> desordenado;
    vector <char> sin_repeticion;
 
    for(int i=0; i<palabra.size(); i++){ //llenado del vector ["p" "a" "l" "a" "b" "r" "a"]
        desordenado.push_back(palabra[i]) ;
    }
 
    /*cout << "DESORDENADO: ";
    for(int i=0; i<desordenado.size(); i++){
        cout << desordenado[i] << " ";
    } */
 
 
    sort(desordenado.begin(), desordenado.end()); //ordenar el vector
 
    /* cout << endl << "ORDENADO: ";
    for(int i=0; i<desordenado.size(); i++){
        cout << desordenado[i] << " ";
    } */
 
    for(int j=0; j<desordenado.size(); j++){ //eliminar repetidos
        if(desordenado[j] != desordenado[j+1]){ //si son caracteres distintos...
            sin_repeticion.push_back(desordenado[j]);
            actual = desordenado[j+1];
        } else if(desordenado[j] == desordenado[j+1]){ //si son caracteres iguales
            continue;
        }
    }
 
    /*cout << endl << "SIN REPETICIÓN: ";
    for(int i=0; i<sin_repeticion.size(); i++){
        cout << sin_repeticion[i] << " ";
    }*/
 
    int resta = desordenado.size() - sin_repeticion.size();
    cout << resta << endl;
 
    return 0;