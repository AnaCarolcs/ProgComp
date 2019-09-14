#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, b = 0;

    cin >> n;

    for (int i = 0; i < n; i++){
        b += i*(n-i);
    }

    cout << b + n << endl;

    return 0;
}