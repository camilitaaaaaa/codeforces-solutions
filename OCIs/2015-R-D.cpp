#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std; 

typedef pair <int, int> ii; 

int main() {
  int n; 
  cin >> n; 
  vector <int> hombres; 
  vector <int> mujeres; 
  vector <ii> pares; 

  for (int i=0; i<n; i++){
    int hombre; 
    cin >> hombre; 
    hombres.push_back(hombre); 
  }
  sort(hombres.begin(), hombres.end());

  for (int j=0; j<n; j++){
    int mujer; 
    cin >> mujer; 
    mujeres.push_back(mujer); 
  }
  sort(mujeres.begin(), mujeres.end());

  for (int k=0; k<n; k++){
    for (int l=0; l<n; l++){
      if (hombres[k] >= mujeres[l]){
        ii par = make_pair(hombres[k], mujeres[l]);
        pares.push_back(par);
        hombres[k] = 0; 
        mujeres[l] = 1000; 
      } else{
        continue; 
      } 
    }
  } for (int f=0; f<pares.size(); f++){
    cout << pares[f].first << " " << pares[f].second << endl; 
  }
  
  return 0; 
}