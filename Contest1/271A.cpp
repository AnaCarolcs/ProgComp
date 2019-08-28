#include <iostream>

using namespace std;

int main(){

  int ano, aux = 1;

  cin>>ano;

  int m = 0, c = 0, d = 0, u = 0;

  while(aux == 1){
    ano++;
    m = ano /1000;
    c = ano / 100 % 10;
    d = ano / 10 % 10;
    u = ano % 10;

    if (m != c && m != c && m != d && m != u && c != d && c != u && d != u){
      cout<<ano<<endl;
      return 0;
      //break;
    }
  }

}