#include <iostream>
#include <stack>

using namespace std;


int main () {

  int N;

  cin >> N;
  int arr[N];


  for (int i = 0; i < N; i++) {
    cin >> arr[i];
  }


  stack <int> miPila;
  int n1, n2;
  
  for (int i = 0; i < N; i++) {

    n2 = arr[i];

    if (miPila.empty()) {
      miPila.push(n2);
      continue;
    }else {
      n1 = miPila.top();
      miPila.pop();
    }

    if ((n1 + n2) % 2 != 0) {
      miPila.push(n1);
      miPila.push(n2);
    }
  }


  cout << miPila.size() << endl;
  
  return 0;
}