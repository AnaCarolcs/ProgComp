#include<bits/stdc++.h>

using namespace std;

int main(){

  int n,a,b;

  cin >> n;

  vector<int> vA;
  vector<int> vB;

  for (int i = 0; i < n; ++i){
    cin >> a >> b;
    vA.push_back(a);
    vB.push_back(b);
  }

  //int resA = 0;

  /*for (int i = 0; i < n; i++){
          if(vA.begin() != vA.end() && vB.begin() != vB.end()){
              resA = abs(vA.end() - vA.begin()) * abs(vB.end() - vB.begin());
          }
  }*/

  /*
  if(vA.size() != 2 && vB.size() != 2){
    cout << "-1" << endl;
    return 0;
  }*/

  //int resA = abs(*vA.rbegin() - *vA.begin());
  //int resB = abs(*vB.rbegin() - *vB.begin());

    sort(vA.begin(), vA.end());
    sort(vB.begin(), vB.end());

    int resA = abs(vA[n - 1] - vA[0]);
    int resB = abs(vB[n - 1] - vB[0]);

    if((resA * resB) == 0){
        cout << "-1" << endl;
    return 0;
    }

  cout << resA * resB << endl;

  return 0;
}