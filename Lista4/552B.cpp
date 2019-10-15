#include<bits/stdc++.h>

using namespace std;

int main(){

    long long n, res = 0, digitos = 0, aux = 1 ;

    cin >> n;

    for (int i = 1; n > 0; i*=10){
        if(i*9 > n){
            res = n;
        }else{
            res = i*9;
        }

        digitos += res * aux;

        n -= res;

        aux++;
    }

    cout << digitos << endl;

  return 0;
}