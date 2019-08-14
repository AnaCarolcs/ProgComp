#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n,c,i,cnt=1;

    scanf("%d%d",&n,&c);

    int a[n];

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=1;i<n;i++){
        if(a[i]-a[i-1]<=c){
            cnt++;
        }
        else
            cnt=1;
    }

    printf("%d\n",cnt);

    return 0;
}