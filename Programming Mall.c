#include<stdio.h>

int main()
{
  
  int order, payment,c=0;
  int toy= 500;
  int shirt= 5000;
  int machine= 9000;

  printf("Welcome to SM MALL, what can I help you?\n");
  printf("[1] toy\n");
  printf("[2] shirt\n");
  printf("[3] machine\n");
  scanf("%d", &order);

   switch(order){
     case 1:
      printf("toy price= %d\n",toy);
      
       printf("Input your money:\n");
       scanf("%d",&payment);

      if(payment >= toy){
        printf("you have purchased the item, come again!!\n");
      }
      else{
        printf("you did not have enough funds\n");
        
      }
      c = payment - toy;
      printf("change:%d",c);
      
      break;

      case 2:
      printf("shirt's price = %d\n", shirt);
      
      printf("Inter your money\n");
      scanf("%d", &payment);

      if(payment >= shirt){
        printf("you have purchased the item, come again!!\n");
        
      }else
         printf("you did not have enough funds \n");
         
         c = payment - shirt;
         
         printf("change: %d",c);


         break;

        case 3:
        printf("machine's price = %d\n",machine);
        
        printf("Inter your money:\n");
        scanf("%d",&payment);

        if(payment >= machine){
          printf("you have purchased the item, come again!!\n");
        
        }else
        printf("you did not have enough funds\n");

        c = payment - machine;

        printf("change:%d",c);

        break;
        default:
        printf("invalid input\n");
        break;
   
   
   
   
   }
   
   
     return 0;
}