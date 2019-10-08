#include <bits/stdc++.h>

using namespace std;

int main(){

  string s[100];
  int n, count = 1, res = 0;
  cin >> n;

  for(int i = 0; i < n; i++){
        cin>>s[i];
  }

  sort(s, s+n);

  for(int i = 1; i < n; i++){
    if (s[i]!=s[i-1]){
      res = max(count, res);
      count=1;
    }else{
      count++;
    }
  }

  cout << max(count, res) << endl;

  return 0;
}