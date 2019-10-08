#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, s = 0, t;
    bool auxr = false, auxl = false;

    cin >> n;

    vector<char> cs(n);

    for (int i = 0; i < n; i++){
        cin >> cs[i];
        if(cs[i] == 'R'){
            auxr = true;
            if(s == 0)
                s = i;
        } else if (cs[i] == 'L'){
            auxl = true;
            if(s == 0)
                s = i;
        }
    }

    if(auxr && auxl == false){
        //apenas R
        for (int i = 0; i <= n; i++){
            if(cs[i] == 'R' and cs[i+1] == '.'){
                t = i + 1;
            }
        }
    } else if (auxl && auxr == false){
        //apenas L
        for (int i = n; i >= 0; i--){
            if(cs[i] == 'L' and cs[i-1] == '.'){
                t = i - 1;
            }
        }

    } else {
        //Os dois
        for (int i = n; i > 0; i--){
            if(cs[i] == 'R' and cs[i+1] == 'L'){
                t = i + 1;
            }
        }
    }

    cout << s + 1 << " " << t + 1 << endl;

    return 0;
}