#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, b, c, res = 0, count;

    cin >> a >> b >> c;

    if(c > b){
        swap(c,b);
    }

    count = a-1;

    for(int i = 0; i < (b + c-1); i++){
        if(i >= c){
            count--;
        }else if(i < b){
            count++;
        }
        res += count;
    }

    cout << res << endl;

    return 0;
}