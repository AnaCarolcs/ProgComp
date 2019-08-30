#include <bits/stdc++.h>

using namespace std;

int vetA[100] = {0}, vetC[100] = {0};

int tor(int novoA, int novoC){
    int tor = 0;
    for (int i = max(novoA, novoC) - 1; i >= 0; --i){
        tor = tor * 3 + (vetC[i] + 3 - vetA[i]) % 3;
    }
    return tor;
}

int main(){

    int a, c;
    int  novoA = 0, novoC = 0, res = 0;
    
    cin >> a >> c;

    for(a; a!= 0; a/=3){
        vetA[novoA++] = a % 3;
    }

    for(c; c!=0; c/=3){
        vetC[novoC++] = c % 3;
    }

    res = tor(novoA, novoC);
    
    cout << res << endl;

    return 0;
}