#include<stdio.h>
int grade[10] = {9,8,7,2,3,1,6,5,4,0};
int main()
{
    int N=10;

    for(int k=0; k<10; k++)
    {

        for(int i=0; i<N-1; i++)
        {
            if(grade[i] < grade[i+1])
            {
                int tmp = grade[i];
                grade[i] = grade[i+1];
                grade[i+1] = tmp;
            }
        }

        for(int i=0; i<N; i++)
            printf("%d", grade[i]);
        printf("\n");
    }
}
