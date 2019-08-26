#include <bits/stdc++.h>

using namespace std;

int main(){

    int num, numRoma, count = 0;
    string s;

    cin >> num >> numRoma;

    while(num-- > 0){

        int sorte = 0;
        size_t size = 0;

        cin >> s;

        while(size < s.length()){
            if (s[size] == '4' || s[size] == '7'){
                sorte += 1;
            }
            size++;
        }

        if (sorte <= numRoma){
            count += 1;
        }
    }

    cout<<count<<endl;

    return 0;
}