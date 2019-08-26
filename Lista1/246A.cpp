#include <iostream>

using namespace std;

int main(){

    int tamanho;

    cin>>tamanho;

    if (tamanho > 2){

        int i = 2;

        while(i <= tamanho){
            cout << i << " ";
            i++;
        }

        cout << 1 << endl;

    }else{
        cout << -1 << endl;
    }

    return 0;
}