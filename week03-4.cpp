#include<stdio.h>
char line[2000];
int main()
{
	int t = 1;
    while(gets(line))
    {
    	if(t > 1)
    		printf("\n");
    	printf("��%d�����\n", t);
    	t++;
    }
    return 0;
}
