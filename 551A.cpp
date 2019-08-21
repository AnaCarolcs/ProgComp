#include <bits/stdc++.h>

using namespace std;

int main(){

    int quantidadeAlunos,contador=0,aux=1,x, i;

    cin >> quantidadeAlunos;

    int vetNotas[quantidadeAlunos], vetNovo[quantidadeAlunos], vetAux[10000]={0};

    while(i < quantidadeAlunos){
        cin >> vetNotas[i];
        vetNovo[i] = vetNotas[i];
        i++;
    }

    sort(vetNovo,vetNovo+quantidadeAlunos);

    x = vetNovo[quantidadeAlunos-1];

    for(int i = quantidadeAlunos-1;i>=0;i--){
       if(vetNovo[i]!=x){
        x=vetNovo[i];
          aux+=contador;
          vetAux[x]=aux;
          contador=1;

       } else{
          vetAux[x]=aux;
           contador++;
       }
    }

    i = 0;
    while(i<quantidadeAlunos-1){
        x=vetNotas[i];
        cout << vetAux[x] << " ";
        ++i;
    }

    x=vetNotas[quantidadeAlunos-1];
    cout << vetAux[x] << endl;

    return 0;
}