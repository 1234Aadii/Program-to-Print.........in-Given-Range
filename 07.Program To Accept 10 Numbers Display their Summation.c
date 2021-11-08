//07.Program To Accept 10 Numbers Display their Summation

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
 {
   int No = 0, Sum = 0, cnt = 0;
   
    printf("\n Enter 10 Numbers => ");
    
    for(cnt = 1; cnt <= 10; cnt++)
    {
        printf ("\n\t Enter Number %d = ",cnt);
        scanf("%d",&No);
        
        Sum = Sum + No;
    }
    
    printf ("\n Press any Key to Get Summation of Given Number ");
    
    system("cls");
    
    
    printf ("\n Summation of Given Numbers = %d",Sum);
    printf ("\n Thanks..");
    
    
    getch();
    return 0;
 }