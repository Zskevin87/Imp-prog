#include <stdio.h>

int pure_add(int lhs, int rhs)
{
    return lhs + rhs;
}

void add_to(int* lhs, int rhs)
{
    *lhs += rhs;
}

int main()
{
    printf("%i\n", pure_add(5, 6));

    int n = 10;
    add_to(&n, 10);
    printf("%i\n", n);

    int i = 42;

    int* i_p;  //* : a típus módosítva lesz, pointer lesz belőle (deklaráció)

    //Memóriacím-képző operátor : &

    
    // i                     i_p
    //07F9  <-----|         0xA24B
    //[42]        |----- [42] --> [0x07F9]
 
    // ++i;
    //++(*i_p);

    // [43]    -->         [0x07FA]



}