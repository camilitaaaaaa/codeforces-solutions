#include <iostream>
#include <map>
using namespace std;

int main() {
    int N;
    cin >> N;

    map<int, int> palitos;

    for (int i = 0; i < N; ++i) {
        int l;
        cin >> l;
        palitos[l]++;
    }

    int maxAltura = 0; // altura máxima de una torre
    int cantidadTorres = palitos.size(); // número de diferentes longitudes (torres)

    for (auto par : palitos) {
        if (par.second > maxAltura) {
            maxAltura = par.second;
        }
    }

    cout << maxAltura << " " << cantidadTorres << endl;

    return 0;
}