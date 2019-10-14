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

  if(vA.size() != 2 || vB.size() != 2){
    cout << "-1" << endl;
    return 0;
  }

  int resA = vA.end() - vA.begin();
  int resB = vB.end() - vB.begin();

  cout << resA * resB << endl;

  return 0;
}