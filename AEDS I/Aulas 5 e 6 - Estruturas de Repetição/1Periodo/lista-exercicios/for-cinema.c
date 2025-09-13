#include <stdio.h>
int main ()
{
    //for de fora roda 3 vezes
    for(int i=1; i<=3; i++)
        
        //anuncia quantas vezes o for de fora roda
        printf(" i esta rodando pela %i vez\n",i);

        //for de dentro roda 2 vezes
           for(int j=1; j<=2; j++)

           //anuncia quantas vezes o for de dentro roda 
               printf(" j esta rodando pela %i vez\n",j);


    return 0;
}
