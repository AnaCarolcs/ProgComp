#include <bits/stdc++.h>

using namespace std;

int main(){

    int size1, size2;
    int k, m;

    cin >> size1 >> size2;
    //cout << endl;
    cin >> k >> m;

    int arr1[size1], arr2[size2];

    for(int i = 0; i < size1; i++){
        cin >> arr1[i]; 
    }

    for(int j = 0; j < size2; j++){
        cin >> arr2[j]; 
    }    

    if(arr1[k-1]<arr2[size2-m]){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}