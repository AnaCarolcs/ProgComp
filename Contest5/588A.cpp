//Duff and Meat codeforces
#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, a, p, y,res;

  cin >> n;
  cin >> a >> p;

  res = p * a;
  int aux = n - 1;

  for(int i=0; i < aux; i++){
    cin >> a >> y;
    if(y < p){
      p = y;
    }
    res += p * a;
  }

  cout << res << endl;

  return 0;
}