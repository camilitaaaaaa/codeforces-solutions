#include <iostream>
#include <string>
#include <vector>
using namespace std; 

/*
        PARTIAL POINTS: 15 POINTS
*/

int main() {
  int espera, enviado; 
  cin >> espera >> enviado; 
  vector <int> semana {1, 2, 3, 4, 5, 6, 7};
  int contadorSemana = 0; 
  int contadorWeekend = 0; 

  
  if(espera == 1){ //estamos en un lunes
    for (int i=0; i<semana.size(); i++){ //recorrer semana desde el lunes
      while(contadorSemana<=espera){
      if(semana[i] >= 5){ //si estoy en fin de semana
        contadorWeekend++;
      } else{
        contadorSemana++; 
      }
    }
    
  }
  } else if(espera == 2){
    while(contadorSemana<=espera){
    for (int i=1; i<semana.size(); i++){ //recorrer semana desde el martes
      if(semana[i] >= 5){ //si estoy en fin de semana
        contadorWeekend++;
      } else{
        contadorSemana++; 
      }
    }
    
  }
  } else if(espera == 3){
    for (int i=2; i<semana.size(); i++){ //recorrer semana desde el lunes
      if(semana[i] >= 5){ //si estoy en fin de semana
        contadorWeekend++;
      } else{
        contadorSemana++; 
      }
    }
    
  } else if(espera == 4){
    for (int i=3; i<semana.size(); i++){ //recorrer semana desde el lunes
      if(semana[i] >= 5){ //si estoy en fin de semana
        contadorWeekend++;
      } else{
        contadorSemana++; 
      }
    }
    
  } else if(espera == 5){
    for (int i=4; i<semana.size(); i++){ //recorrer semana desde el lunes
      if(semana[i] >= 5){ //si estoy en fin de semana
        contadorWeekend++;
      } else{
        contadorSemana++; 
      }
    }
    
  } else if(espera == 6){
    for (int i=5; i<semana.size(); i++){ //recorrer semana desde el lunes
      if(semana[i] >= 5){ //si estoy en fin de semana
        contadorWeekend++;
      } else{
        contadorSemana++; 
      }
    }
    
  } else if(espera == 7){
    for (int i=6; i<semana.size(); i++){ //recorrer semana desde el lunes
      if(semana[i] >= 5){ //si estoy en fin de semana
        contadorWeekend++;
      } else{
        contadorSemana++; 
      }
    }
  }
  cout << contadorSemana+contadorWeekend; 
  return 0; 
}