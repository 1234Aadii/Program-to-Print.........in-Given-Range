//Program to Print Character or Alphabet in Given Range

#include <stdio.h>
#include <conio.h>

 int main()
 {
     char Sch = '\a',  Ech = '\z';
     
    printf("\n Enter Starting Character = ");
  
    
    printf("\n Enter Ending Character = ");
    
    
    
    for( ; Sch <= Ech; Sch++ )
    {
        printf("\n %c", Sch);
    }
     
    printf("\n Thanks...");
    
    getch();
    return 0;
 }