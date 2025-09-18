#include <iostream>
#include <vector> 

using namespace std; 

int main() {
  int N; 
  cin >> N; 
  int M; 
  cin >> M; 
  int contador = 0; 
  vector <int> fideos; 
  vector <bool> owo; 

  for (int k=0; k<N; k++) {
    owo.push_back(true); 
  }
    
  for (int i=0; i<N; i++){ //llenar A
    int aux; 
    cin >> aux; 
    fideos.push_back(aux); 
  }
  
  for (int j=0; j<M; j++) { //leer lo que quiere comer en el día
    int aux; 
    cin >> aux; 
    for (int i=0; i<N; i++) { //buscarlo en los fideos 
      if (aux == fideos[i] && owo[i] == true){ 
        contador++; 
        owo[i] = false; 
        break;
      } 
    }
  } 

  //cout << "Contador = " << contador << endl;
  if (contador == M){
    cout << "Yes" << endl; 
  } else{
    cout << "No" << endl; 
  }
}

/*
[1, 1, 0, 1, 0]
[3, 2, 4, 6, 4]
[1, 2, 4, 4, 6]

*/

  
