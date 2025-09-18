#include <cstdio>
#include <iostream>
#include <vector>
#include <stack>
#include <set>
#include <map>
using namespace std;

int main () {
  int N, v;
  cin >> N;
  int contador = 0;
  
  map <int, int> numeros;
  for (int i = 0; i < N; i++) {
    cin >> v;
    if (!numeros[v]) {
      numeros[v] = 1;
    }else {
      numeros[v] = 0;
    }      
  }
  
  for (auto it = numeros.begin();
    it != numeros.end(); it++) {

    if ((*it).second) {
      contador++;
    }   
  }
  cout << contador << endl;
}