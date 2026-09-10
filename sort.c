#include <stdio.h>

int main() {
    int numbers[5] = {5, 4, 3, 2, 1};
    int arrayLength = sizeof(numbers) / 4; // ints are 4 bytes long and there are 5 of them in the array, so it would return 20 if not divided by 4
    printf("size: %d \n", arrayLength);
    int currentLength = arrayLength - 1;


    printf("before: [ ");
    for (int i = 0; i < arrayLength; i++) {
        printf("%d ", numbers[i]);
    }
    printf("] \n");


    for (int cycle = 0; cycle < arrayLength - 1; cycle++) {
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
                for (int i = 0; i < arrayLength; i++) {
                    printf("%d ", numbers[i]);
                }
                printf("] \n");
            } // end of index loop
        } // end of index loop
        currentLength--;
        printf("changed currentLength: %d \n", currentLength);
        
    } // end of arrayLength loop


    printf("after: [ ");
    for (int i = 0; i < arrayLength; i++) {
        printf("%d ", numbers[i]);
    }
    printf("] \n");


    return 0;
} // end of main