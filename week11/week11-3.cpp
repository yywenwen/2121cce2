#include<stdio.h>
#include<bits/stdc++.h>
char line[100];
using namespace std;
int main()
{
    int T;
    FILE * fin = fopen("input.txt", "r");
    fscanf(fin, "%d", &T);

    map<string, int> table;

    while(fgets(line, 100, fin))
    {
        line[strlen(line)-1] = 0;
        printf("Åª¨ì¤F= %s =\n", line);
        table[line]++;
    }

}
