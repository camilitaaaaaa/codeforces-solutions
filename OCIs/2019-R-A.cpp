#include <vector>
#include <iostream>
using namespace std;

int main(){
  int n; 
  cin >> n; 
  int aux1 = 0;
  int a, b, c; 
  
  vector<int>secuencia; 

  for(int i=0; i<n; i++){
    int aux; 
    cin >> aux; 
    secuencia.push_back(aux); 
  }

  cin >> a >> b >> c; 

  for (int j=0; j<n; j++){ 
    if(secuencia[j] == a && secuencia[j+1] == b && secuencia[j+2] == c){
      aux1++;
    }
  } 
  cout << aux1 << endl; 
  return 0; 
}

