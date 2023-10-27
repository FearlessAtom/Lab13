#include <stdio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main(){
    srand(time(0));
    float timetaken;
    clock_t start, finish;
    const int NUMBER = 100;
    int array[NUMBER];
    for(int index = 0;index < NUMBER;index++){
        array[index] = rand() % 20 - 10 + 1;
        printf("%d ",array[index]);}
    start = clock();

    for(int j = 0;j < NUMBER;j++){
        for(int index = 0;index < NUMBER - j - 1;index++){
            if(array[index] > array[index + 1]){
                int temp = array[index];
                array[index] = array[index + 1];
                array[index + 1] = temp;}}}

    finish = clock();
    printf("\n");
    finish = clock();
    for(int index = 0;index < NUMBER;index++){printf("%d ",array[index]);}
    timetaken = (float)(finish - start)/CLOCKS_PER_SEC;
    printf("\nTime taken (seconds) : %f",timetaken);
    return 0;}