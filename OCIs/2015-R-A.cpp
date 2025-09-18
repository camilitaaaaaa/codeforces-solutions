#include <iostream>
using namespace std; 

int main() {
  int n; 
  cin >> n; 
  int aux = n/2; 
  if (n%2==0){
    cout << aux; 
  } else {
    cout << aux + 1; 
  }
}