#include <stdio.h>

int main()
{
    int status=checkFileExists("/home/danik/commands1.txt");
    if(status==0)
        printf("Файл не существует.");
    else
        printf("Файл существует.");
    getchar();
    return 0;
}
