//Program to Calculate Sum Of Given Numbers Till User Enter  zero or -ve Numbers

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
 {
    int No =0, Sum = 0, cnt = 1;
    
    printf("\n Enter Numbers To Calculate Theis Sum \n(Will Stop Summation After 0/-ve Input)=>");
   
  while(1)
   {
      printf("\n\t Enter Number %d =", cnt);
      scanf("%d",&No);
      
      if( No <= 0)
      {
         goto out;
      }
     
      Sum = Sum + No;
      cnt++;
   }
   
     printf ("\n Press any Key to Get Summation of Given Number ");
     
    
     printf ("\n Summation of Given Numbers = %d",Sum);
     printf ("\n Thanks..");
    
   
   
     getch();
     return 0;
 }