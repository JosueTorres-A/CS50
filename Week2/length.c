#include <cs50.h>
#include <stdio.h>
#include <string.h>

int string_length(string s);

int main(void)
{
    string name = get_string("Name: ");

    int len = strlen(name);
    int length = string_length(name);

    printf("Length of string %s is %i\n", name, len);
    printf("Length of string %s is %i\n", name, length);

    return 0;
}

int string_length(string s) 
{
    int n = 0;

    // get length of string
    while (s[n] != '\0')
    {
        n++;
    }

    return n; 
}