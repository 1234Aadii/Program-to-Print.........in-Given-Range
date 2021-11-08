//Program To Print Reverse Table of Given Numbers

#include <stdio.h>
#include <conio.h>

int main()
 {
   int No =1, cnt = 10;
   
    printf("\n Enter a Number to Print it's Table ");
    scanf("%d",&No);
    
    printf("\n Table of %d is \n,No");
    
    while( cnt >= 1)
    {
       printf ("\n %3d * %3d = %3d",No,cnt,( No * cnt ));
      
      cnt--;
    }
    
    
    printf ("\n Thanks..");
 
    getch();
    return 0;
 }