//Maximum Increase codeforces
#include <bits/stdc++.h>

using namespace std;

int main(){

  int n,aux = 1;

  cin>>n;

  int incr = n+10;

  vector<int> a(incr);

  for(int i=0;i<n;i++){
      cin>>a[i];
  }

  int res=0, count = 1;
  while(aux<n){
      if(a[aux]<=a[aux-1]){
        if(count>=res){
          res = count;
        }
        count=1;
      }
      else{
        count++;
      }
      aux++;
  }

  if(count>=res){
    res = count;
  }

  cout << res << endl;

  return 0;
}