#include <bits/stdc++.h>

using namespace std;

int main(){

    int dois, tres, cinco, seis, quantdcs = 0, quanttd = 0, res;

    cin >> dois >> tres >> cinco >> seis;

    while(dois > 0 && cinco > 0 && seis > 0){
        //if(dois > 0 && cinco > 0 && seis > 0){
            quantdcs++;
            --dois;
            --cinco;
            --seis;
        //}
    }

    while(dois > 0 && tres > 0){
        quanttd++;
        --dois;
        --tres;
    }

    //cout << quantdcs << endl;

    //cout << quanttd << endl;

    res = (quantdcs * 256) + (quanttd * 32);

    cout << res << endl;

    return 0;
}