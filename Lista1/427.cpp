#include <bits/stdc++.h>

using namespace std;

int main() {

  int eventos;

  cin>>eventos;

  int retirar=0, ocupado=0, aux=0;

    for (int i = 0;i<eventos; ++i){

    int quantidade;

    cin>>quantidade;

    if(quantidade<0){
      if(retirar<1){
        ++ocupado;
      }else{
        --retirar;
      }
    }else{
      retirar = retirar + quantidade;
    }
  }

  cout<<ocupado<<endl;

  return 0;
}