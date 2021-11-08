//Program to Calculate Sum Of Given Numbers Till User Enter  zero or -ve Numbers

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
 {
    int No =0, Sum = 0, cnt = 0;
    
    printf("\n Enter Numbers To Calculate Theis Sum \n(Will Stop Summation After 0/-ve Input)=>");
   
   for(cnt = 1; ; cnt++)
   {
      printf("\n\t Enter Number %d =", cnt);
      scanf("%d",&No);
      
      if( No <= 0)
      {
         break;
      }
     
      Sum = Sum + No;
   }
   
     printf ("\n Press any Key to Get Summation of Given Number ");
    
     system("cls");
    
    
     printf ("\n Summation of Given Numbers = %d",Sum);
     printf ("\n Thanks..");
    
   
   
     getch();
     return 0;
 }