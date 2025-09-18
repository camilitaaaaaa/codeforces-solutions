#include <iostream>
#include <string>
#include <vector>
using namespace std; 

int main() {
  int n; 
  cin >> n; 
  string newString = ""; 

  for (int i=0; i<n; i++){
    newString = "";
    string aux; 
    cin >> aux; 
    if (aux.size() > 10){
        char inicio = aux[0]; 
        int tamano = (aux.size() -2);
        string tamano_en_string = to_string(tamano); 
        char termino  = aux[aux.size()-1];
        newString = inicio+tamano_en_string+termino;
        cout << newString << endl;; 
    }
    else{
      cout << aux << endl; 
    }
  }
  return 0; 
} 