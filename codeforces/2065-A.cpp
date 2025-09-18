#include <iostream>
#include <string>
using namespace std;


int main(){
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        string palabra;
        cin >> palabra;
        palabra.replace(palabra.size()-2, palabra.size(), "i");
        cout << palabra << endl;
    }

    return 0;
}