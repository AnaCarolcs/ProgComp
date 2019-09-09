#include<bits/stdc++.h>

using namespace std;

int main() {

    int n, ans = 1, aux, count = 0;

    cin >> n;

    long long vet[n];

    for(int i = 0; i < n; i++){
        cin >> vet[i];
    }

    sort(vet, vet + n);

    while(count < n){
        if(vet[count] >= ans){
          ans++;
        }
      count++;
    }

    aux = ans - 1;

    cout << aux << endl;

    return 0;
}