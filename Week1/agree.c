#include <cs50.h>
#include <stdio.h>

int main(void) {
    char answerChar = get_char("Do you agree? (y/n) ");
    if(answerChar == 'y' || answerChar == 'Y') {
        printf("Agreed!\n");
    }
    else if(answerChar == 'n' || answerChar == 'N') {
        printf("Not agreed!\n");
    }
    else {
        printf("Invalid input!\n");
    }
    return 0;
}