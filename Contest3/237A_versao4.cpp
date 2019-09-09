#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> xs(n);

  for(int i = 0; i < n; i++){
    int h, m;
    cin >> h >> m;

    xs[i] = 60*h + m;
  }

  int ans = 1, l = 0, r = l + 1;

  while(l < n){
    int r = l + 1;

    while(r < n and xs[r] == xs[l]){
      ++r;
    }

    ans = max(ans, r-l);
    l = r;
  }

  cout << ans << endl;

  return 0;
}