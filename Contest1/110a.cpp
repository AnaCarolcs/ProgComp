#include <bits/stdc++.h>

using namespace std;

int main(){

  string n;
  int tem = 0, naotem = 0;

  cin >> n;

  for (int i = 0; i < n.size(); ++i){
    if(n[i] == '4' || n[i] == '7'){
      tem++;
    }
  }

  if(!tem){
    cout<<"NO"<<endl;
    return 0;
  }

  if(tem == 4 || tem == 7){
    cout<<"YES"<<endl;
  }else{
    cout<<"NO"<<endl;
  }

  return 0;
}