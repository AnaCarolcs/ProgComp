/*
#include <bits/stdc++.h>

using namespace std;

vector<int> digitize(long input){

    vector<int> output;

    do{
        output.push_back(input%10);
        input /= 10;
    } while(input);

    return output;
}

int main(){

    int digit;
    long n(0);

    scanf("%ld", &n);

    vector<int> digits = digitize(n);

    for(int k = 0; k < digits.size(); k++){
        if(digit < 5){
            printf("O-|");} else{printf("-O|"); digit -= 5;
        }
        for(int k = 0; k < digit; k++){
            printf("O");
        }
            printf("-");
        for(int k = 0; k < 4 - digit; k++){
            printf("O");
        }
        printf("\n");;
    }

    return 0;
}
*/



/*

#include <bits/stdc++.h>

std::vector<int> digitize(long input){
    std::vector<int> output;
    do{
        output.push_back(input%10);
        input /= 10;
    } while(input);

    return output;
}

void printDigit(int digit){
    if(digit < 5){
        printf("O-|");
    } else{
        printf("-O|");
        digit -= 5;
    }

    for(int k = 0; k < digit; k++){
        printf("O");
    }
    printf("-");
    for(int k = 0; k < 4 - digit; k++){
        printf("O");
    }
    printf("\n");
}

int main(){

    long n(0);
    scanf("%ld", &n);

    std::vector<int> digits = digitize(n);

    for(int k = 0; k < digits.size(); k++){
        printDigit(digits[k]);
    }

    return 0;
}

*/


///*
#include <bits/stdc++.h>

using namespace std;

int main() {

  int digito;

  while(cin>>digito) {

    int aux;

    if(digito == 0) {
      cout<<"O-|-OOOO"<<endl;
    } else {

        while(digito) {
        aux = digito % 10;

            if(aux / 5 != 0) {
            cout<<"-O|";
            }else{
                cout<<"O-|";
            }

            int tmp = aux % 5;

            for(int i = 0; i < tmp; i++) {
                cout<<"O";
            }

            cout<<"-";

            for(int i = tmp+1; i < 5; i++) {
                cout<<"O";
            }
            cout<<endl;

      digito /= 10;
    }
   }
  }

  return 0;
}

//*/