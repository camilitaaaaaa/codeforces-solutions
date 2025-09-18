#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector <int> vectorcito;

    int suma_tot = 0;
    int suma_parc = 0;
    int contador = 0;

    for(int i=0; i<n; i++){
        int aux;
        cin >> aux;
        suma_tot += aux;
        vectorcito.push_back(aux);
    }
    //you take the minimum number of coins, whose sum of values is strictly more than the sum of values of the remaining coins!!
    sort(vectorcito.begin(), vectorcito.end());

    for(int j=vectorcito.size()-1; j>=0; j--){
        contador++;
        suma_parc = suma_parc + vectorcito[j];
        suma_tot = suma_tot - vectorcito[j];
        if(suma_parc > suma_tot){
            break;
        }
    }

    cout << contador << "\n";

    return 0;
}