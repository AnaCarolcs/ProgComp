#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, k;

    cin >> n >> k;

    int aux;
    aux =  3 * n - k;

    if (aux > 0){
      aux = 3 * n - k;
      cout << aux << endl;
    }else{
      cout << 0 << endl;
    }

    return 0;
}