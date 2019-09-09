#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(false);

  string line;
  getline(cin, line);

  int n = stoi(line);

  multiset<string> ms;
  int ans = 1;

  while(n--){
    getline(cin, line);
    ms.insert(line);
    ans = max(ans, ms.count(line));
  }

  cout << ans << endl;

  return 0;
}