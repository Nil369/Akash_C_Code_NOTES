#include <stdio.h>

void printStr(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    // char str[] = {'a', 'a', 'k', 's', 'h', '\0'};
    // char str[6] = "aakash";
    char str[34];
    gets(str); // input string through gets func.
    printf("Using custom function printStr\n");
    printStr(str);
    printf("Using printf %s\n", str);//Print string through printf => "%s"
    printf("using puts: \n");
    puts(str); // print string through puts func.
    return 0;
}
