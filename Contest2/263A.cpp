#include <bits/stdc++.h>

using namespace std;

int main(){

  int valor, aux1, aux2;

  for (int i = 1; i < 6; ++i){
    for (int j = 1; j < 6; ++j){

      cin >> valor;
      if(valor == 1){
        aux1 = abs(j - 3);
        aux2 = abs(i - 3);
        cout << (aux1 + aux2) << endl;
      }
    }
  }

  return 0;
}