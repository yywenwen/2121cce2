#include<stdio.h>
int a[10] = {4,5,6,7,9,8,0,3,1,2};
int main()
{
    for(int k=0; k<10-1; k++)
    {
        for(int i=0; i<10-1; i++)
        {
            if(a[i] > a[i+1])
            {
                int tmp = a[i];
                a[i] = a[i+1];
                a[i+1] = tmp;
            }
        }
        for(int i=0; i<10; i++)
            printf("%d ", a[i]);
        printf("\n");
    }



    return 0;
}
