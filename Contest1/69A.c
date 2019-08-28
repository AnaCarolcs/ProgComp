#include <stdio.h>

    int main(){

      int x;

      scanf("%d", &x);

      int num1, num2, num3;
      int soma1 = 0, soma2 = 0, soma3 = 0;

      for (int i = 0; i < x; ++i){
        scanf("%d%d%d",&num1,&num2,&num3);
          soma1+=num1;
          soma2+=num2;
          soma3+=num3;
      }

      if(soma1==0&&soma2==0&&soma3==0){
        printf("YES\n");
      } else {
        printf("NO\n");
      }

  return 0;
}