#include <stdio.h>
// #include <stdlib.h>
int main()
{
    FILE *ptr = NULL;
    char string[64] = "This content was produced by Akash";

    // ****** Reading a file ******

    ptr = fopen("myfile.txt", "r");
    fscanf(ptr, "%s", string);
    printf("The content of this file has %s\n",string );

    // ****** Writing a file ******

    ptr = fopen("myfile.txt", "w");
    fprintf(ptr, "%s", string);

    // ****** Appending a file ******

    ptr = fopen("myfile.txt", "a");
    fprintf(ptr, "%s", string);

//********************** More functions for File IO ********************************
ptr = fopen("myfile1.txt", "w+");

    char * c = fgetc(ptr);
    printf("The character I read was %c\n", c );
    c = fgetc(ptr);
    printf("The character I read was %c\n", c );


    char str[4];
    fgets(str, 5, ptr);
    printf("The string is %s\n", str);

    fputc('o',ptr);
    fputs("this is Akash",ptr);

    fclose(ptr);

    return 0;
}
