#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i,l=0;
    srand(time(NULL));
    int vector1[20];
    int vector2[20];
    int vector3[20];
    printf("Numero  Cuadrado  Cubo\n");
    for (int i = 0; i < 20; i++)
    {
        vector1[i]=rand()%50+1;
        vector2[i]=vector1[i]*vector1[i];
        vector3[i]=vector2[i]*vector1[i];
        
        printf(" %d\t %d\t %d\t \n",vector1[i],vector2[i],vector3[i]);
    }
    return 0;
}
