#include <iostream>
#include <vector>
using namespace std; 

int main() {
  int horas, minutos; 
  cin >> horas >> minutos; 
  int cantidad_canciones; 
  cin >> cantidad_canciones;
  int canciones_escuchadas = 0; 
  int seg_escuchados = 0; 
  vector <int> sumas; 
  
  int distancia = minutos*60 + (horas*60)*60;

  for (int i=0; i<cantidad_canciones; i++){
    int min, seg; 
    cin >> min >> seg; 
    if (seg_escuchados <= distancia){
      seg_escuchados = seg_escuchados + min*60 + seg;
      canciones_escuchadas++;
      sumas.push_back(canciones_escuchadas);
    } else {
      break;
    }
  } if (seg_escuchados > distancia){
    cout << canciones_escuchadas - 1;
  } else {
    cout << canciones_escuchadas; 
  }

  return 0; 
}