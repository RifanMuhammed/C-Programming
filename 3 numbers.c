#include<stdio.h>
   int main(){
      int num1,num2,num3;
      printf("enter num1);
      printf("enter num2);
      printf("enter num3);
      scanf("%d","%d","%d",&num1,&num2,&num3);
      if (num1>num2){
         if(num1>num3){
         printf("%d is the largest",num1);
         }
      }
      else if (num2>num1){
             if(num2>num3){
             printf("%d is the largest",num2);
             }
     }
     else{
     printf("%d is the largest",num3);
     }
     return 0;
     }
             
          
             
     

