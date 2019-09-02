#include <bits/stdc++.h>

using namespace std;

int main(){

    int x, posicao1, posicao2;

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> x;

    for (int i = 3; i > 0; --i){
        cin >> posicao1 >> posicao2;
        if(posicao1 == x){
            x = posicao2;
        } else if (posicao2 == x) {
            x = posicao1;
        }
    }

    cout << x << endl;

    return 0;
}