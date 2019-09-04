#include <bits/stdc++.h>

using namespace std;

int main(){

  string zeroAdez[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
  string dezAdezenove[] = {"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
  string dezenasPQP[] = {"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};

  int num;

  cin >> num;

  if(num <= 9){
    cout << zeroAdez[num] << endl;
  } else if(num >= 10 && num <= 19){
    int aux2 = num%10;
    cout << dezAdezenove[aux2] << endl;
  } else if(num >= 20){
    int aux = num/10;
    cout << dezenasPQP[aux];
    int aux1 = num%10;
    if(aux1 == 0){
      cout << endl;
    } else{
     cout << "-" << zeroAdez[aux1] << endl;
    }
  }

  return 0;
}