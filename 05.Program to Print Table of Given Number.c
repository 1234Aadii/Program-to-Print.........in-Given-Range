//Program to Print Table of Given Number

#include <stdio.h>
#include <conio.h>

 int main()
 { 
    int No = 1, cnt = 0;
    
    printf("\n Enter a Number to print its Table ");
    scanf("%d",&No);
    
    printf("\n Table of %d is \n,No");
    
    while( cnt <= 10)
    {
       printf ("\n %3d * %3d = %3d",No,cnt,( No * cnt ));
      
      cnt++;
    }
    
    
     
    printf ("\n Thanks..");
    
    getch();
    return 0;
 }