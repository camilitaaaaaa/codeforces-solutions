#include <iostream>
#include <vector>
using namespace std; 

/*  
        PARTIAL POINTS: 90 POINTS
*/


int main() {
  int n; 
  cin >> n; 
  vector<int> numero; 
  vector<int> reversa;
  int aux = 0; 
  
  for (int i=0; i<n; i++){
    int aux; 
    cin >> aux; 
    numero.push_back(aux); 
  }
    if (n==1 && aux==0 || n==1 && aux==1 || n==1 && aux==2 || n==1 && aux==5 || n==1 && aux==8){
      cout << "Mauricio" << endl; 
    } else if(n==1 && aux==3 || n==1 && aux==4 || n==1 && aux==7){
      cout << "Camilo" << endl;
    }
  
  for (int j=numero.size()-1; j>=0; j--){
    if (numero[j] == 0){
      reversa.push_back(0);
    } else if (numero[j] == 1){
      reversa.push_back(1);
    } else if (numero[j] == 2){
      reversa.push_back(2);
    } else if (numero[j] == 3 || numero[j] == 4 || numero[j] == 7){
      reversa.push_back(-1);
    } else if (numero[j] == 5){
      reversa.push_back(5);
    } else if (numero[j] == 6){
      reversa.push_back(9);
    } else if (numero[j] == 8){
      reversa.push_back(8);
    } else if (numero[j] == 9){
        reversa.push_back(6);
    }
  }

  
  for(int k=0; k<numero.size(); k++){
    if (numero[k] == reversa[k]){
      aux++;
      
    } else {
      break; 
    }
  }
  
    if (aux == numero.size()){
      cout << "Mauricio" << endl;
    } else{
      cout << "Camilo" << endl; 
    }
  
  return 0; 
}