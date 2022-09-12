#include <stdio.h>

int main()
{
    char name[100];
    int n;
    scanf("%s %i", name, &n);
    
    for (int i = 0; i<n; ++i)
    {
        printf("Heló, %s!\n", name);
    }
}   