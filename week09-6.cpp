#include<stdio.h>
#include<string.h>
char strA[] = "ABC";
char strB[] = "ABCD";
int main()
{
    int c = strcmp("B", "C");
    printf("B - C得到 %d\n", c);
    c = strcmp(strA, strB);
    printf("%s %s得到 %d\n", strA, strB, c);
}
