#include <stdio.h>

const int MAX = 10;

int main() {
    int numbers[] = {5, 2, 4, 3, 9, 7, 8, 6, 10, 1};
    printf("size: %d \n", MAX);
    int currentLength = MAX - 1;


    printf("before: [ ");
    for (int i = 0; i < MAX; i++) {
        printf("%d ", numbers[i]);
    }
    printf("] \n");


    for (int cycle = 0; cycle < MAX - 1; cycle++) {
        printf("started new cycle \n");
        for (int index = 0; index < currentLength; index++) {
            printf("current index: %d \n", index);
            int a = numbers[index];
            int b = numbers[index + 1];

            printf("a: %d \nb: %d \n", a, b);

            if (a > b) {
                int tempA = a;
                numbers[index] = b;
                numbers[index + 1] = tempA;


                printf("swapped numbers \n");
                printf("new numbers: [ ");
                for (int i = 0; i < MAX; i++) {
                    printf("%d ", numbers[i]);
                }
                printf("] \n");
            } // end of index loop
        } // end of index loop
        currentLength--;
        printf("changed currentLength: %d \n", currentLength);
        
    } // end of arrayLength loop


    printf("after: [ ");
    for (int i = 0; i < MAX; i++) {
        printf("%d ", numbers[i]);
    }
    printf("] \n");


    return 0;
} // end of main