#include <bits/stdc++.h>

using namespace std;

int main(){

    int prateleira,somaCopo=0,somaMedalha=0;
    int a[3],b[3];

    for(int i=0;i<3;i++){
        cin>>a[i];
    }

    for(int i=0;i<3;i++){
        cin>>b[i];
    }

    cin>>prateleira;

    for(int i=0;i<3;i++){
        somaCopo+=a[i];
        somaMedalha+=b[i];
    }

    if(somaCopo%5==0){
        somaCopo=somaCopo/5;
    } else{
        somaCopo=somaCopo/5+1;
    }

    if(somaMedalha%10==0){
        somaMedalha=somaMedalha/10;
    }else{
        somaMedalha=somaMedalha/10+1;
    }

    if(somaCopo+somaMedalha<=prateleira){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}