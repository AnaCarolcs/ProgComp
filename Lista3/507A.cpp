#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, k, g = 0;

  cin >> n >> k;

  vector<int> is(n);
  vector<int> res(k);

  for (int i = 0; i < n; ++i){
    cin >> is[i];
  }

  sort(is.begin(), is.end());

  while(k){
    if(is[g] <= k){
      k -= is[g];
      res[g] = is[g];
    }
    g++;
  }

  for (int i = 0; res[i] != 0 ; ++i){
    cout << res[i] << " ";
  }
    cout << endl;

  return 0;
}