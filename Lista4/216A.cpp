#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, b, c, res = 0;

    cin >> a >> b >> c;

    res = ((a*b)+(b*c)+(c*a))-(a+b+c)+1;

    cout << res << endl;

    return 0;
}