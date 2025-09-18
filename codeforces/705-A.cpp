#include <iostream>
#include <string> 
#include <vector>
using namespace std; 

int main() {
  int n; 
  cin >> n; 
  vector <string> word; 
  for (int j=0; j<n; j++){
    if (j%2==0){ 
      word.push_back("I hate ");
      if (j+1==n){
        word.push_back("it");
        break; 
      }
      else if (j!=n){
        word.push_back("that ");
      }
    } else if (j%2!=0) {
        word.push_back("I love ");
      if (j+1==n){
        word.push_back("it");
      }
      else if (j!=n){
        word.push_back("that ");
      } else if(j+1==n){
         word.push_back(" it");
        break; 
      }
    }
  } for (int k=0; k<word.size(); k++){
    cout << word[k]; 
  }
return 0; 
}