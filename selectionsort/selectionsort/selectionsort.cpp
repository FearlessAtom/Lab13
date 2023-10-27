#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main() {
    srand(time(0));
    float timetaken;
    clock_t start, finish;
    const int NUMBER = 10;
    int array[NUMBER];
    for (int index = 0; index < NUMBER; index++) {
        array[index] = rand() % 20 - 10 + 1;
        printf("%d ", array[index]);}
    start = clock();
    for (int index = 0; index < NUMBER; index++) {
        int min = index;
        for (int j = index + 1; j < NUMBER; j++) {
            if (array[j] < array[min]) { min = j; }}
        int temp = array[index];
        array[index] = array[min];
        array[min] = temp;}
    finish = clock();
    printf("\n");
    for (int index = 0; index < NUMBER; index++) { printf("%d ", array[index]); }
    timetaken = (float)(finish - start) / CLOCKS_PER_SEC;
    printf("\nTime taken (seconds) : %f", timetaken);
    return 0;}