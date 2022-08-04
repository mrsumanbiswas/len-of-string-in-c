// C program to find the length of string
#include <stdio.h>
int main(void)
{
    char String[1000];
    int string_length;
    printf("Enter a string and check it's length\n");
    scanf("%s", String);
    for (; String[string_length] != '\0'; string_length++);
    printf("The length of the string is %d\n", string_length);
    return 0;
}
