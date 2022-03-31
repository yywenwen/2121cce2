#include<stdio.h>
char tree[1000000][40];
int main()
{
	int T;
	scanf("%d\n\n", &T);
	for(int t=1; t<=T; t++)
	{
		int count = 0;

		while( gets(tree[count]) )
		{
			if(tree[count][0] == 0)
				break;
			count++;
		}
		if(t > 1)
			printf("\n");
		printf("Test Case %d: %d lines\n", t, count);
	}
	return 0;
}
