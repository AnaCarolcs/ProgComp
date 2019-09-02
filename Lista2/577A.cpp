#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, x, c = 0;

//    while(cin >> n >> x){
    cin >> n;
    cin >> x;

    if (n == 1) {
        if (x == 1){
          cout << 1 << endl;
        } else {
          cout << 0 << endl;
        }
    }

    for (int i = 1; i <= n; i++){
        if (x % i == 0 && x / i <= n){
          c++;
        }
    }

    cout << c << endl;

//}
    return 0;
}