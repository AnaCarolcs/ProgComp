#include <bits/stdc++.h>

using namespace std;

int main() {

    int n,m;

    cin >> n >> m;

    map<string,bool> primeiroT, segundoT;

    int aux = 0, auxN = 1, auxM = 1;

    while(auxN <= n){
        string s;
        cin >> s;

        primeiroT[s] = true;
        auxN++;
    }

    while(auxM <= m){
        string s;
        cin >> s;

        segundoT[s] = true;
        aux += (primeiroT[s]);
        auxM++;
    }

        n -= aux;
        m -= aux;
        m -= (aux%2);

    if(n > m){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


    return 0;
}