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
    print("%\n", pure_add(5,6));

    int n = 10;
    add_to(&n, 9);
    printf("%\n, n");

    int i = 42;

    int* i_p = &i;  // * típusmódosító karakter --> nem int, hanem int pointer          Memóriacímképző operátor: &  - lekérdezhető a memória címe

    int** i_pp = &i_p;  // annyi csillagot kap, ahányszor dereferálunk


    ++i;
    ++(*i_p);   // * dereferáló operátor: megnézi a pointer értékét (egy elmentett memória cím), és az alapján megkeresi azt az adott memóriacímbe mentett értéket
}
// szegmentálási hiba: olyan memóriaterülethez érünk, ami nem az enyém

