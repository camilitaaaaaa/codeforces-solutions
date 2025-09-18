#include <iostream>
using namespace std; 


int main() {
  int n; 
  string partida; 
  cin >> n; 
  cin >> partida;
  int anton = 0; 
  int danika = 0; 
  
  for (int i=0; i<n; i++){
    if (partida[i] == 'A'){
      anton++;
    }
    else{
      danika++; 
    }
  }
  if (anton < danika){
    cout << "Danik" << endl; 
  }
  else if(danika < anton){
    cout << "Anton" << endl;
  }
  else {
    cout << "Friendship" << endl; 
  }
  return 0; 
}