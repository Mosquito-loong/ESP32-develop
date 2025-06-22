#include <stdio.h>
#define SPACE ' '
int main(void)
{
    char ch;
    printf("input:");
    ch=getchar();
    while (ch!='\n')
    {
        if (ch==SPACE)
        {
        putchar(ch);
        }
        else{
            putchar(ch);
        }
        ch=getchar();
    }
    putchar(ch);
    return 0;
}