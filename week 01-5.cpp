#include<stdio.h>
#include<string.h>
char line[2000];
int main()
{
	int total=0;

	while(scanf("%s", line) != EOF)
	{
		//scanf("%s", line);
		int ans=0, N=strlen(line);

		for(int i=0; i<N; i++)
		{
			if(line[i] == '2')
				ans++;
		}
		total += ans;
		printf("%d\n", ans);
	}

	printf("Total: %d\n", total);
	return 0;
}
