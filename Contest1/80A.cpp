#include <bits/stdc++.h>

using namespace std;

bool primo(int primo){
  bool prime=true;
  for (int i=2; i<primo; i++){
    if ((primo % i) == 0){
        prime=false;
        break;
      }
  }
  if (!prime){
    return false;
  }
  else{
    return true;
  }
}

int main(){

  int n, m;

  cin >> n;
  cin >> m;

  bool x = false;

  for(n = n + 1; !x; n++){
    x = primo(n);
    if(x == true){
    //cout << n << endl;
      if (n == m){
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    }
  }

  return 0;

}