    #include <bits/stdc++.h>

    using namespace std;

    int main(){

        int a1, a2, aux;

        cin >> a1 >> a2;

        int minutos = 0;

        while(a1 > 0 && a2 > 0){

            if(a1 == 1 && a2 == 1){
                cout << minutos << endl;
                return 0;
            }

                minutos++;
                if(a1 > a2){
                    aux = a1;
                    a1 = a2;
                    a2 = aux;
                }
                a1++;
                a2 -= 2;
        }

        cout << minutos << endl;

        return 0;
    }