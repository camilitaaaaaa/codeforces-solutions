#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int contador = 0;
    vector <string> vectorcito;

    for(int i=0; i<n; i++){
        string aux;
        cin >> aux;
        vectorcito.push_back(aux);
    }

    for(int i=0; i<n-1; i++){
        if(vectorcito[i] != vectorcito[i+1]){
            contador++;
        }
    }
    cout << contador+1 << endl;
}