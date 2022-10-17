#include <stdio.h>
#include <stdlib.h>



int get_target(int min, int max)
{
    int rnd = rand() % (max - min + 1) + min ;
    return rnd;
}



int main()
{
    const int min = 0, max = 100;
    const int target = get_target(min,max); // const: a változót csak inicializálni lehet (módosítani nem)!


    for (int i = 0; i < 100; i++)
    {
        printf("%i", get_target(30, 40));
    }

    int guess;

    printf("Tippelj %i és %i kozott!\n", min, max);
    do
    {
        
        scanf("%i", &guess);

        if (target < guess)
        {
            printf("Ennel kisebb!");
        }

        else if  (target > guess)
        {
            printf("Ennel nagyobb!");
        }
    }
    while (target != guess);
    
    printf("Megtalaltad! (%i)", target);
}