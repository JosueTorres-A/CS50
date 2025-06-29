#include <cs50.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        printf("Add your name as a command line argument after the program name.\n");
        return 1;
    }

    printf("Hello,");

    for (size_t i = 1; i < argc; i++)
    {
        printf(" %s", argv[i]);
    }

    printf("!\n");
}

// int main(int argc, char *argv[])
// {
//     string answer = argv[1];
//     if (answer == NULL)
//     {
//         printf("Add a string as a command line argument after the program name.\n");
//         return 1;
//     }
//     printf("Hello, %s!\n", answer);
// }

// int main(void)
// {
//     string answer = get_string("What is your name? ");
//     printf("Hello, %s!\n", answer);
// }