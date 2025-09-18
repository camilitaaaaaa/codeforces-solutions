#include <iostream>
#include <vector>
using namespace std; 

int main() {
  int n;
  cin >> n; 
  int suma = 0; 
  
  int matriz[n][n]; 
  vector<vector<int>> estado(n, vector<int>(n, true));

  for (int i=0; i<n; i++){ //llenado de la primera matriz
    for (int j=0; j<n; j++){
      int aux; 
      cin >> aux; 
      matriz[i][j] = aux; 
    }
  }

  for (int i=0; i<n; i++){ //si ambos numeros son iguales
    for (int j=0; j<n; j++){
      if (i == j){
        suma = suma + matriz[i][j];
        estado[i][j] = false; 
      }
    }
  }

   for (int j=0; j<n; j++){ 
    if (estado[(n-1)/2][j] == true){
      suma = suma + matriz[(n-1)/2][j];
      estado[(n-1)/2][j] = false;
    } else{
      suma = suma + 0;
    }  
   }

   for (int i=0; i<n; i++){
    if (estado[i][(n-1)/2] == true){
      suma = suma + matriz[i][(n-1)/2];
      estado[i][(n-1)/2] = false;
    } else{
      suma = suma + 0;
    }  
   }

  for (int i=0; i<n; i++){
    for (int j=0; j<n; j++){
      if ((i+j == n-1) && estado[i][j] == true){
        suma = suma + matriz[i][j];
        estado[i][j] = false; 
      }
    }
  }
  cout << suma << endl; 
  return 0;
}