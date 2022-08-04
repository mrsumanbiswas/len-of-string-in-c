// C program to find the length of string
#include <stdio.h>
int main()
{
    char String[1000];
    int string_lenght;
    printf("Enter a string and check it's lenght\n");
    scanf("%s", String);
    for (; String[string_lenght] != '\0'; string_lenght++);
    printf("The lenght of the string is %d\n", string_lenght);
    return 0;
}
