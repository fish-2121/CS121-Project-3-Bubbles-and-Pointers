#include <stdio.h>

const int MAX = 10;

void sort(int*);
void printNumbers(int*);

int main() {
    int numbers[] = {5, 2, 4, 3, 9, 7, 8, 6, 10, 1};
    
    sort(numbers);

    return 0;
} // end of main



void sort(int* arr) {
    int currentLength = MAX - 1;


    printf("before: ");
    printNumbers(arr);


    for (int cycle = 0; cycle < MAX - 1; cycle++) {
        printf("started new cycle \n");
        for (int index = 0; index < currentLength; index++) {
            printf("current index: %d \n", index);
            int a = arr[index];
            int b = arr[index + 1];

            printf("a: %d \nb: %d \n", a, b);

            if (a > b) {
                int tempA = a;
                arr[index] = b;
                arr[index + 1] = tempA;


                printf("swapped numbers \nnew numbers: ");
                printNumbers(arr);
            } // end of index loop
        } // end of index loop
        currentLength--;
        printf("changed currentLength: %d \n", currentLength);
        
    } // end of arrayLength loop


    printf("after: ");
    printNumbers(arr);
}



void printNumbers(int* arr) {
    printf("[ ");
    for (int i = 0; i < MAX; i++) {
            printf("%d ", arr[i]);
    }
    printf("] \n");
}