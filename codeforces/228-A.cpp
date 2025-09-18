#include <iostream>
#include <set> 
using namespace std; 

int main() {
  int aux; 
  set <int> miConjunto; 

  for (int i=0; i<4; i++){
    int aux; 
    cin >> aux; 
    miConjunto.insert(aux); 
  }

  int answer = 4 - miConjunto.size(); 
  cout << answer << endl; 
} 