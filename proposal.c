#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i=0;
    char *arr="Being a programmer, I encountered few bugs in my day-to-day life. I found its so hard to compile it without tou as my Header file. So will you be My header file as I want to know you better?";
    while (i<strlen(arr))
    {
        getch();
        printf("%c",arr[i++]);
    }
   
    return 0;
    
}