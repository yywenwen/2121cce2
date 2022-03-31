#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char tree[1000000][40];
int compare(const void *p1, const void *p2)
{
	char * s1 = (char*)p1;
	char * s2 = (char*)p2;
	return strcmp(s1, s2);
}
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
		qsort(tree, count, 40, compare);
		for(int i=0; i<count; i++)
			printf("%s\n", tree[i]);
	}
	return 0;
}
