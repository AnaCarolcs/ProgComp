#include <bits/stdc++.h>

using namespace std;

int main() {

  int numCaixa, res;
  int aux = 0;
  int mixn = 99999999;

  cin>>numCaixa; //recebe numero de caixas
  int vetPessoa[numCaixa];

  while(aux < numCaixa){
    cin>>vetPessoa[aux]; //guarda a quantidade de coisa das pessoas
    aux++;
  }

  for(int i=0;i<numCaixa;i++){
    int soma = 0;
    for(int j=0;j<vetPessoa[i];j++){

      cin>>res;
      soma = soma + 15 + (res*5);

    }

    if(soma < mixn){
      mixn = soma;
    }
    //vetPessoa[i]=soma;
  }

  //sort(vetPessoa,vetPessoa+numCaixa);

  cout<<mixn<<endl;
  //cout<<vetPessoa[0]<<endl;

  return 0;
}