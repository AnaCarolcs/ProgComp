#include <bits/stdc++.h>

using namespace std;

int main(){

  int minutos = 1;

  int a1, a2;
  cin >> a1 >> a2;

  if(a1 != 0 || a2 != 0){
    if(a1 > 1 && a2 > 1){
      a1++;
      a2 -= 2;
      minutos++;
    cout << a1 << " ";
    cout << a2 << endl;
      while(a1 > 1 && a2 > 1){
        a1++;
        a2 -= 2;
        minutos++;
        cout << a1 << " ";
        cout << a2 << endl;
      }
    }
    if(a1 == 1){
      a1++;
      a2 -= 2;
      minutos++;
      cout << a1 << " ";
      cout << a2 << endl;
      while(a1 >= 1 && a2 >= 1){
        a1++;
        a2 -= 2;
        minutos++;
        cout << a1 << " ";
        cout << a2 << endl;
      }
    } else if(a2 == 1){
      a2++;
      a1 -= 2;
      minutos++;
      cout << a1 << " ";
        cout << a2 << endl;
      while(a1 >= 1 && a2 >= 1){
        a2++;
        a1 -= 2;
        minutos++;
        cout << a1 << "aqui";
        cout << a2 << endl;
      }
    }
  }

  cout << minutos << endl;

  return 0;
}