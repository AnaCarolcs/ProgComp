#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){

  int n, h, m, caixaMinimo = 1, auxh, auxm, ca = 1;

  cin >> n;
  cin >> auxh >> auxm;

  for(n; n > 1; --n){
    cin >> h >> m;
      if (m == auxm && h == auxh){
        ca++;
          if (ca > caixaMinimo)
            caixaMinimo = ca;
          }else{
            ca = 1;
          }
    auxh = h;
    auxm = m;
  }

  cout << caixaMinimo << endl;

  return 0;
}