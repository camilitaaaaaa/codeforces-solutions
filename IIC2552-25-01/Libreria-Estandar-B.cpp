#include <iostream>
#include <vector>
#include <string>
#include <utility>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    pair<string, string> parcito;
    pair<string, string> parcito2;
    vector <pair<string, string> > vector_pares;
    vector <pair<string, string> > vector_pares2;
 
 
    for (int i = 0; i < n; i++) { //llenado de nombres e ip's originales + 'ip' --> perfectooo
        string nombre_original, ip;
        cin >> nombre_original >> ip;
        parcito.first = nombre_original;
        string ip1 = ip + ';';
        parcito.second = (ip1);
        vector_pares.push_back(parcito);
    }
/*    for(int i=0; i<vector_pares.size(); i++){
        cout << "original: " << vector_pares[i].first << " " << vector_pares[i].second << endl;
    } */
    for (int i = 0; i < m; i++) { //llenado de nombres e ip's DAÑADOS
        string nombre_mal, ip_x;
        cin >> nombre_mal >> ip_x;
        parcito2.first = nombre_mal;
        parcito2.second = (ip_x);
        vector_pares2.push_back(parcito2);
    }
/*    for(int i=0; i<vector_pares2.size(); i++){
        cout << "danado: " << vector_pares2[i].first << " " << vector_pares[i].second << endl;
    } */
 
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (vector_pares2[i].second == vector_pares[j].second) {
                cout << vector_pares2[i].first << " " << vector_pares2[i].second << " #" << vector_pares[j].first << endl;
            }
        }
    }
 
 
    return 0;
}