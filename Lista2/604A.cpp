#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int  i;
    double n,x,m[6],w[6],sh,uh;
    double aux,soma;
 
    for (int j = 1; j <= 5; j++){
        cin>>m[j];
    }
 
    for (int g = 1; g <= 5 ; g++){
        cin>>w[g];
    }
 
    while(cin>>sh>>uh){
 
         x=500;
         soma=0;
 
        for(i = 1; i <= 5; i++){
            aux=(1-(m[i]/250))*x*i-50*w[i];
            n=0.3*x*i;
            soma+=max(n,aux);
        }
 
        soma+=sh*100;
        soma-=uh*50;
 
        cout<<soma<<endl;
    }
    return 0;
}