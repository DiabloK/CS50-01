#include <stdio.h>
#include <stdbool.h>

int main (void){
    int Height = 0;
    while (Height < 1 || Height > 8) {
        printf("Height: ");
        scanf("%d", &Height);
    }
    for (int row  = 0; row  < Height; row ++){

        for (int column  = 0; column  < Height - row  - 1; column ++) {
            printf(" ");
        }
        for (int column  = 0; column  < row  + 1; column ++) {
            printf("#");
        }
        
        printf(" ");
        for (int column  = 0; column  < row  + 1; column ++) {
            printf("#");
        }
        printf("\n");

    }
}