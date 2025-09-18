#include <iostream>
#include <queue> 
using namespace std; 

int main() {
  int n; //leo el numero
  cin >> n; 
  queue <int> cola; 

  for (int i=0; i<n; i++){
      char operacion; 
      cin >> operacion; 
  
   if (operacion == '1'){ //si es 1
      int numero; 
      cin >> numero; 
      cola.push((numero)); 

    } else if (operacion == '2'){ //si es 2
     if (!cola.empty()){    
       cola.pop(); 
     }
   } else if (operacion == '3') {
            if (!cola.empty()) {
                cout << cola.front() << endl;
            } else {
                cout << "Empty!" << endl;
            }
        } 
  }
}
