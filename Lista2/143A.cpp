#include <bits/stdc++.h>

using namespace std;

int main(){

    int r1, r2, c1, c2, d1, d2, a = 0, b = 0, c = 0, d = 0;

    cin >> r1 >> r2;
    cin >> c1 >> c2;
    cin >> d1 >> d2;

    //r1 = a + b;
    //r2 = c + d;
    //c1 = a + c;
    //c2 = b + d;
    //d1 = a + d;
    //d2 = b + c;

    a = (r1 + c1 - d2) / 2;

    b = r1 - a;
    c = c1 - a;
    d = d1 - a;

    //cout << a << " " << b <<" "<< c <<" "<< d << endl;

    if(a != b && a != c && a != d && b != c && b != d && c != d 
        && a >= 1 && b >= 1 && c >= 1 && d >= 1 
        && a <= 9 && b <= 9 && c <= 9 && d <= 9 
        && (c + d) == r2 && (b + d) == c2 && (b + c)){

        cout << a << " " << b << endl << c << " " << d << endl;

    } else {
        cout << -1 << endl;
    }

    return 0;
}