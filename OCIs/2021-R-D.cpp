#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std; 

int main() {
  int n; 
  cin >> n; 
  set <int> miConjunto; 
  vector <int> miVector;
  
  for(int i=0; i<n; i++){
    int x;
    cin >> x; 
    miVector.push_back(x); 
  }
  
  sort(miVector.begin(), miVector.end()); 
  for (int j=0; j<n; j++){
    miConjunto.insert(miVector[j]); 
  }
  
  set<int>::iterator it = miConjunto.begin(); // Apunta al primer elemento
  ++it; // Mueve el iterador al segundo elemento
  cout << *it << endl; // Imprime el segundo elemento
  return 0; 
}