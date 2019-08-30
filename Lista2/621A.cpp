#include <bits/stdc++.h>

using namespace std;

int main(){

    long long soma = 0, n, valores, aux2, zero = 0, aux1 = 0;

    cin >> n;
    
    if(n == 1){
        cin >> valores;
        if(valores & 1){
            cout << zero << endl;
        } else {
            cout << valores << endl;
        }
        return 0;
    } else if (n != 1){
 
        for (n; n > 0; n--){
            cin >> valores;
            if(valores & 1){
                aux2 = min(valores, aux2);
                aux1++;
            }
            soma += valores;
        }

        if(aux1 & 1){
            soma -= aux2;
        }
        
        cout << soma << endl;

    }
    return 0;
}