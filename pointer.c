#include <stdio.h>

int main()
{
    int array_1[6][6];
    
    for(int i = 0;i<6;i++)
    {
        for(int j = 0;j<6;j++)
        {
            array_1[i][j] = (i+1)*10+(j+1);
        }
    }
    /*
    for(int i = 0;i<6;i++)
    {
        for(int j = 0;j<6;j++)
        {
            printf("%d ",array_1[i][j]);
        }
        printf("\n");
    }
    */
    int *pos = array_1;
    
    for(int i = 0;i<6;i++)
    {
        for(int j = 0;j<6;j++)
        {
            printf("%d ",*pos++);
        }
        printf("\n");
    }
}
