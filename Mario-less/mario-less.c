#include <cs50.h>
#include <stdio.h>

int main (void ){
    int n;
    do {
        n = get_int("Size: ");
    }
    while (n < 1 || n > 8);
// for each row
    for (int i=0; i < n; i++){

            //for space
        for (int s= 0; s < n -i-1; s++){
            printf(" ");
        }
// for each cloumn
        for (int j = 0; j <= i; j++){

            //print brick
            printf("#");
        }
        //move to next row
        printf("\n");
    }

}