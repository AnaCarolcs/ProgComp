#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> as(n);

  for (int i = 0; i < n; ++i){
    cin >> as[i];
  }

  sort(as.begin(), as.end());

  int k = 1, next = 0;

  while(next < n){
    if (as[next] >= k){
      ++ans;
      ++k;
    }
    ++next;
  }

  cout << ans << endl;

  return 0;

}