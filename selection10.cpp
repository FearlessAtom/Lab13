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
    
    
    
    
    
    for(int index = 0;index < NUMBER;index++){
        int min = index;
        for(int j = index;j < NUMBER;j++){
            if(array[j] < array[min]){min = j;}}
    int temp = array[index];
    array[index] = array[min];
    array[min] = temp;}
    finish = clock();
    
    
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