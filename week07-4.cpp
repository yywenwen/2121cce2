#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char line[2000][80];
int compare(const void *p1, const void *p2)
{
	return strcmp((char*)p1, (char*)p2);
}
int main()
{
	int N;
	scanf("%d\n", &N);

	for(int i=0; i<N; i++)
	{
		scanf("%s", line[i]);
		char other[80];
		gets(other);
	}

	qsort(line, N, 80, compare);

	int count=1;
	for(int i=0; i<N; i++)
	{
		if(strcmp(line[i], line[i+1]) == 0)
			count++;
		else
		{
			printf("%s %d\n", line[i], count);
			count = 1;
		}
	}
	return 0;

}
