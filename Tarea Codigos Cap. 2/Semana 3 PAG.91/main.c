#include <stdio.h>
#include <stdlib.h>
/*EJEMPLO PAGINA 91 LIbro*/
int main()
{
   int i;

   for(i =1 ;i; i++)
   {
       printf("\nVALOR DE i = %d",i);
       if(i == 100)
        i = -10;
   }
printf("\nFIN DEL PROGRAMA\n");
return 0;
}
