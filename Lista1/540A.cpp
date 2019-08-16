#include <bits/stdc++.h>

using namespace std;

int main(){

    long int maximo,minimo,modulo,tamanhoCombinacao,numeroOriginal,numeroCombinacao, tamanho;
    char estadoOriginal[10000],combinacaoVerdadeira[10000];

    while(cin>>tamanhoCombinacao){

        cin>>estadoOriginal;
        cin>>combinacaoVerdadeira;

        tamanho = strlen(estadoOriginal);
        int resultado = 0, indice = 0;

          while(indice < tamanho){

            numeroOriginal = estadoOriginal[indice] -'0';
            numeroCombinacao = combinacaoVerdadeira[indice] -'0';

            modulo = fabs(numeroOriginal-numeroCombinacao);

            if(modulo>5){
                maximo = max(numeroOriginal,numeroCombinacao);
                minimo = min(numeroOriginal,numeroCombinacao);

                resultado = resultado + (9-maximo+minimo+1);
            }
            else resultado = resultado + modulo;

            indice++;
        }

        cout<<resultado<<endl;
    }

    return 0;
}