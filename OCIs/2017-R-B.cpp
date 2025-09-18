#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
        PARTIAL POINTS: 60 POINTS
*/

int main() {
  int tenedores, comprarT, reciclarT; 
  cin >> tenedores >> comprarT >> reciclarT; 
  int cuchillos, comprarC, reciclarC; 
  cin >> cuchillos >> comprarC >> reciclarC; 
  int recicle = 0;
  int comprar = 0; 
  vector <int> costos; 

  if (tenedores == cuchillos){
    cout << 0 << endl; 
  } else {
    
    if (cuchillos > tenedores){
    recicle = recicle + (cuchillos - tenedores)*reciclarC; //reciclar
   // cout << "("<<cuchillos<<" - "<<tenedores<<")*"<<reciclarC<<" = "<<recicle<<endl;
    comprar = comprar + (cuchillos - tenedores)*comprarT; 
    costos.push_back(comprar); 
    costos.push_back(recicle); 
      
    } else if (tenedores > cuchillos){
    recicle = recicle + (tenedores - cuchillos)*reciclarT; //reciclar
    comprar = comprar + (tenedores - cuchillos)*comprarC; 
    costos.push_back(comprar); 
    costos.push_back(recicle);
    } 
  }
  
  sort(costos.begin(), costos.end()); 
    cout << costos[0]; 
  return 0; 
}
