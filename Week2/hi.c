#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = "HI!";
    string t = "BYE!";
    //printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);
    printf("%s\n", s);
    printf("%s\n", t);
    // char c1 = 'H';
    // char c2 = 'I';
    // char c3 = '!';

    string words[2];
    words[0] = "HI!";;
    words[1] = "BYE!";
    // printf("%i %i %i\n", c1, c2, c3);

    printf("%c%c%c\n", words[0][0], words[0][1], words[0][2]);

    for (size_t i = 0; i < 2; i++)
    {
        printf("%s\n", words[i]);
    }
    
    
    return 0;
}