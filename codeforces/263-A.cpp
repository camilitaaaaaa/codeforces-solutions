#include <iostream>
using namespace std; 

int main() {
  int matriz[5][5];
  int aux = 0; 

  //llenado de matriz
  for (int n=0; n<5; n++){
    for (int m=0; m<5; m++){
      int valor; 
      cin >> valor; 
      matriz[n][m] = valor; 
    }
  }

  //buscar el 1
  for (int i=0; i<5; i++){
    for (int j=0; j<5; j++){
      if(matriz[i][j] == 1){ 
        aux = aux + abs(i-2); 
        aux = aux + abs(j-2);
      }
    }
  } cout << aux << endl;
  return 0; 
}