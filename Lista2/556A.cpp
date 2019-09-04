#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, quant1 = 0, quant0 = 0, aux = 0;
    string s;

    cin >> n;
    cin >> s;

    for (int i = 0; i < n; i++){
        if(s[i] == '0'){
            quant0 ++;
        } else if(s[i] == '1'){
            quant1 ++;
        }
     }

    //cout << quant0 << " " << quant1;

    if(quant0 < quant1){
        aux = n - 2 * quant0;
    } else {
        aux = n - 2 * quant1;
    }

    cout << aux << endl;

    return 0;
}