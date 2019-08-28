#include <bits/stdc++.h>

using namespace std;

int proximoPrimo(int primo){
  int novoPrimo, respotaErrada = -1;

  while(primo++){
    for (int i = 0; i <= primo / 2; i++) {
      if (primo % i == 0) {
        return primo;
      }
    }
  }
  return respotaErrada;
}

int main(){

  int n, m;

  cin >> n;
  cin >> m;

  if (proximoPrimo(n) == m){
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;

}