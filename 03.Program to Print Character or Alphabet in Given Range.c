//Program to Print Character or Alphabet in Given Range

#include <stdio.h>
#include <stdio.h>

 int main()
 {
   char Lch = '\0', Sch = 'a', Ech = '\z';
   
    printf("\n Enter Starting Character = ");
    
    
    printf("\n Enter Ending Character = ");
    
    
    if(Sch < Ech)
    {
        for ( Lch = Sch; Lch <= Ech; Lch++)
        {
           printf("\n %c", Lch);
        }
    }
    
    else
    {
      for ( Lch = Sch; Lch >= Ech; Lch--)
        {
           printf("\n %c", Lch);
        }
    }
    
    printf("\n Thanks..");
    
    return 0;
 }