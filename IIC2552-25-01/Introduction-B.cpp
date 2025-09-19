#include <iostream>
using namespace std;
 
int main(){
 
    float N,K,L,R;
    cin >> N >> K >> L >> R;
    float trozo = K/N;
 
    if(trozo < L || trozo > R){
        cout << "N" << endl;
    } else {
        cout << "S" << endl;
    }
 
    return 0;
}