#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  map<pair<int, int>, int> h;
  int ans = 1;

  while(n--){
    int h, m;
    cin >> h >> m;

    auto p = make_pair(h,m);
    h[p]++;

    ans = max(ans, h[p]);
  }

  cout << ans << endl;

  return 0;
}