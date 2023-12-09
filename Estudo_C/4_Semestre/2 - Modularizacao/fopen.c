#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = fopen("fputs.txt", "r");
    if (fp == NULL)
    {
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }
    char ch;
    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }
    fclose(fp);
}
