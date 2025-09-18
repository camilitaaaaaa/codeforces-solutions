#include <iostream>
#include <string>
 
using namespace std;
 
int main(){
    int n;
    cin >> n;
 
    for(int i=0; i<n; i++) {
        string palabra1;
        string palabra2;
        string palabra3;
        cin >> palabra1;
        cin >> palabra2;
        cin >> palabra3;
        cout << palabra1[0] << palabra2[0] << palabra3[0] << endl;
    }
 
    return 0;
}