#include <stdio.h>

void print_row(int n);

int main(void){

    const int n = 3;

    //printf("????\n");
    // for(int i = 0; i < 4; i++){
    //     printf("?");
    // }

    // printf("\n");

    // for(int i = 0; i < 3; i++){
    //     printf("#\n");
    // }

    // printf("\n");

    for(int i = 0; i < n; i++){
        print_row(n);
    }

    return 0;
}

void print_row(int n) {
    for(int i = 0; i < n; i++){
        printf("#");
    }
    printf("\n");
}