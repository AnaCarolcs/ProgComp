#include<bits/stdc++.h>

using namespace std;

int main(){

  int n, m;

  cin >> n >> m;

  //vector<int> v;

  int res;

  for(int i = 0; i < n; i++){
    if((m+i % m)%2 == 0){
      res = (m-i % m)/2;
      cout << res << endl;
    } else {
      res = (m+i % m+1)/2;
      cout << res << endl;
    }
  }

  return 0;
}