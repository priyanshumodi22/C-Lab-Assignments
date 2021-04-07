#include <stdio.h>
int main()
{   int i;
    char str[]="Myself PRIYANSHU MODI";
    for (i = 0; str[i] != '\0'; ++i);
    printf("Length of the string: %d", i);
    return 0;
}