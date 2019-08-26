#include <bits/stdc++.h>

using namespace std;

int main(){

    int estacao, dist, estacaoS, estacaoT, i = 2, aux;
    int vet[100+2] = {0};

    cin >> estacao;

    while(i < estacao + 2){
        cin >> dist;
        vet[i] = vet[i-1] + dist;
        i++;
    }

    cin >> estacaoS;
    cin >> estacaoT;

    if (estacaoS > estacaoT){
        aux = estacaoS;
        estacaoS = estacaoT;
        estacaoT = aux;
    }

    int distancia = vet[estacaoT] - vet[estacaoS];
    int resultado = min(distancia, (vet[estacao+1] - distancia));

    cout << resultado << endl;

    return 0;
}