#include <iostream>
#include <string> 
using namespace std; 

int main() {
  int x = 0; 
  int n; 
  cin >> n; 
  for (int i=0; i<n; i++){
    string aux; 
    cin >> aux; 
    for (int i=0; i<aux.size(); i++){
      if (aux[i] == '+' && aux[i+1] == '+'){
        x++; 
      } else if (aux[i] == '-' && aux[i+1] == '-'){
        x--;
      }
    }
  } cout << x << endl; 
  return 0; 
}