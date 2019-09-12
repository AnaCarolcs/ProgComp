#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, d, m;

  cin >> n >> d;

  vector<int> as(n);

  for (int i = 0; i < n; ++i){
      cin >> as[i];
  }

  sort(as.begin(), as.end());

  cin >> m;

  int lucro = 0;
  int aux = 0;

  while(m--){
    if (n >= 1){
      lucro += as[aux];
      n--;
      //cout << lucro << endl;
    }else{
      lucro -= d;
      //cout << lucro << endl;
    }
    aux++;
  }

  cout << lucro << endl;

  return 0;
}