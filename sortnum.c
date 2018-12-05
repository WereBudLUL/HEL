#include <stdio.h>

void erzeugeArray(int *, int);
void zeigeArrayInConsole(int *);
void dreiEcksTausch(int *, int);
int main()
{
    printf("Hello World");
    
    srand(time(0));
    
    int x = rand();
    printf("z1: %d\n",x);
    x = rand();
    printf("z2: %d\n", x);
    

    return 0;
}

void zeigeArrayInConsole(int * array, int anz) {
    
}
