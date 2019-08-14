#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<long long>vet;
vector<long long>cont;

bool func(long long a,long long b){
  return a > b;
}

int main(){

  int n;
  int b;
  scanf("%d",&n);
  b = n;
  long long a;
  while(b--){
    scanf("%lld",&a);
    vet.push_back(a);
    cont.push_back(a);
  }

  sort(cont.begin(),cont.end());
  sort(vet.begin(),vet.end(),func);

  long long soma = 0;
  for(int i = 0;i < n;++i){
    soma += ((vet[i]%10007) * (cont[i]%10007))%10007;
  }

  printf("%lld\n",soma%10007);

  return 0;
}