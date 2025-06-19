#include <cs50.h>
#include <stdio.h>
#include <limits.h>

int main(void) {
    // int x = get_int("x: ");
    // int y = get_int("y: ");

    // int z = x + y;

    // printf("%i\n", z);

    int dollars = 1;

    while (true){
        char c = get_char("Here's $%i. Double it and give it to the next person? ", dollars);
        if (c == 'y' || c == 'Y') {
            
            if (dollars > INT_MAX / 2) {
                break;
            }
            else {
                dollars *= 2;
            }
        }
        else {
            break;
        }
    }
    
    printf("Here's $%i.\n", dollars);

    return 0;
}