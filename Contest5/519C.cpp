//A and B and Team Training codeforces
#include <bits/stdc++.h>

using namespace std;

int main(){

    int a,b;

    cin >> a;
    cin >> b;

    int aux = (a+b)/3;

    int resA = min(b, aux);

    int resB = min(a, resA);

    cout << resB;

return 0;
}