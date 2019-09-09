#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  string es;
  cin >> es;

  vector<int> rs(10);

  for (const auto& e : es){

    switch(e) {

      case "L":
      for (int i = 0; i <= 9; ++i){
        if (rs[i] == 0){
          rs[i] = 1;
          break;
        }
      }
      break;

      case "R":
      for (int i = 9; i >= 0; --i){
        if (rs[i] == 0){
          rs[i] = 1;
          break;
        }
      }
      break;

      default:
      rs[e - '0'] = 0;
    }

  }

  for (int i = 0; i <= 9; ++i){
    cout << rs[i];
  }

  return 0;
}