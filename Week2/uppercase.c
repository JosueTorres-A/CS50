#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char **argv)
{
    //string s = get_string("Before: ");
    string s = argv[1];
    
    if (s == NULL)
    {
        printf("Add a string as a command line argument after the program name.\n");
        return 1;
    }    

    printf("Before: %s\n", s);
    printf("After: ");

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", toupper(s[i]));

        // if (s[i] >= 'a' && s[i] <= 'z')
        // {
        //     //s[i] = s[i] - 32;
        //     printf("%c", toupper(s[i]));
        // }
        // else 
        // {
        //     printf("%c", s[i]);
        // }
    }

    printf("\n");
}