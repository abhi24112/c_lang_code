#include <stdio.h>
int main()
{
    FILE *p;
    char ch;
    p=fopen("/home/abhi/projects/text_file/united.txt","r");
    while(ch!=EOF)
    {
        ch=fgetc(p);
        printf("%c",ch);
    }
fclose(p);
return 0;
}