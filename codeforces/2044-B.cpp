#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=0; i<n; i++) {
        string b = "";
        string a;
        cin >> a;

        reverse(a.begin(), a.end());

        for (int j = 0; j < a.size(); j++) {
            if (a[j] == 'q') {
                b += 'p';
            } else if (a[j] == 'p') {
                b += 'q';
            } else {
                b += 'w';
            }
        }
        
        cout << b << endl;
        
    }
    return 0;
}