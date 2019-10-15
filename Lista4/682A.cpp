#include<bits/stdc++.h>

using namespace std;

int main(){

    long long n, m, div = 0, aux = 0;

    cin >> n >> m;

    while(aux < n){
        aux++;
        div += (m+aux%5)/5;

    }

    cout << div << endl;

  return 0;
}