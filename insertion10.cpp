#include <stdio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main(){
    srand(time(0));
    float timetaken;
    clock_t start, finish;
    const int NUMBER = 100000;
    int array[NUMBER];
    int times = 10;
    float alltime = 0;
    
    while(times != 0){
    for(int index = 0;index < NUMBER;index++){
        array[index] = rand() % 20 - 10 + 1;}
    start = clock();
    
    
    
    
    
    for(int index = 1;index < NUMBER;index++){
        int key = array[index];
        int j = index - 1;
        while(j >= 0 && array[j] > key){
            array[j + 1] = array[j];
            j = j - 1;}
        array[j + 1] = key;}
    
    
    finish = clock();
    printf("\n");
    finish = clock();
    timetaken = (float)(finish - start)/CLOCKS_PER_SEC;
    printf("\nTime taken (seconds) : %f",timetaken);
    alltime = alltime + timetaken;
    times = times - 1;
    }
    printf("\nAll time : %f",alltime / 10);
    return 0;}