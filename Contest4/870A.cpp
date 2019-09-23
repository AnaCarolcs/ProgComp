#include <bits/stdc++.h>

using namespace std;

int main(){

    int p, s, pe, se, auxr = 0, ajuda = 0, ajuda2 = 0;

    vector<int> primeiro;
    vector<int> segundo;

    cin >> p >> s;

    for (int i = 0; i < p; i++){
        cin >> pe;
        primeiro.push_back(pe);
    }

    for (int i = 0; i < s; i++){
       cin >> se;
       segundo.push_back(se);
    }

    sort(primeiro.begin(), primeiro.end());
    sort(segundo.begin(), segundo.end());

    for (int i = 0; i < p; ++i) {
        //int auxi = primeiro[i];
        for (int j = 0; j < s; ++j) {
            if (primeiro[i] == segundo[j]) {
                cout << primeiro[i] << '\n';
                return 0;
            }
            //if(auxr != 0){
            //break;
            //}
        }
    }

    if (primeiro[0] < segundo[0]) {
        cout << primeiro[0] << segundo[0] << endl;
    } else if (segundo[0] < primeiro[0]) {
        cout << segundo[0] << primeiro[0] << endl;
    }

    /*
    if(primeiro.size() == 1 && segundo.size() > 1){
        for (int i = 0; i < s; i++){
            if(primeiro[0] == segundo[i] && primeiro[0] < 10){
                cout << primeiro[0];
                return 0;
            }
        }
    } else if(segundo.size() == 1 && primeiro.size() > 1){
        for (int i = 0; i < p; i++){
            if(segundo[0] == primeiro[i] && segundo[0] < 10){
                cout << segundo[0];
                return 0;
            }
        }
    } if(primeiro[0] == segundo[0]){
        cout << primeiro[0] << endl;
    } else if(primeiro[0] != segundo[0]){
        ajuda = primeiro[0]*10;
        ajuda2 = ajuda + segundo[0];
        if(ajuda2 > auxr){
            cout << auxr << endl;
        } else if (primeiro[0] > segundo[0]) {
            cout << primeiro[0] << segundo[0] << endl;
        } else {
            cout << segundo[0] << primeiro[0] << endl;
        }
    } */

    return 0;
}