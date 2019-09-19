#include <bits/stdc++.h>

using namespace std;

int main(){

  string mao, mesa;
  int r = 0;

  cin >> mao;

  for (int i = 0; i < 5; ++i){
    cin >> mesa;
    if(mesa[1] == mao[1]){
      r = 1;
    } else if(mesa[0] == mao[0]){
      r = 1;
    }
    if(r == 1){
      cout << "YES" << endl;
      return 0;
    }
  }

  if(r == 0){
    cout << "NO" << endl;
  }

  return 0;
}
    //  cout << "YES" << endl;