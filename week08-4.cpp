#include<stdio.h>
int main()
{
    FILE * fout = fopen("檔名.txt", "w+");
    fprintf(fout, "我在檔案裡\n");

    printf("Hello World");
}
