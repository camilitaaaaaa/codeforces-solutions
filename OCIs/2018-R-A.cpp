#include <iostream>
#include <vector>
using namespace std; 

int main() {
  int n;
  int contador = 0; 
  cin >> n; 
  vector <int> bus; 
  for (int i=0; i<n; i++){
    int aux; 
    cin >> aux; 
    bus.push_back(aux); 
  }
  
  for (int j=0; j<bus.size(); j++){
    if (bus[j]%2!=0 && bus[j] >=3){
      contador++; 
    }
  } cout << contador << endl; 
  return 0; 
}