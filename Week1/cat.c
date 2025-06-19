#include <stdio.h>
#include <cs50.h>

// Prototype of the function
void meow(int times);
int get_positive_int(void);

int main(void) {
    // printf("meow\n");
    // printf("meow\n");
    // printf("meow\n");

    int timesSelectedByUser = get_positive_int();
    meow(timesSelectedByUser);

    // int i = 0;
    // // while(i < 3){
    //     printf("meow\n");
    // //     i++;
    // }
}

int get_positive_int(void) {
    int n;

    do {
        n = get_int("How many times do you want to meow? ");
    } while (n < 1);

    return n;
}

void meow(int times) {
    for(int i = 0; i < times; i++) {
        printf("meow\n");
    }
}
