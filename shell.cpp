#include <stdio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main(){
    srand(time(0));
    float timetaken;
    clock_t finish, start;
    const int NUMBER = 100;
    int array[NUMBER];
    for(int index = 0;index < NUMBER;index++){
        array[index] = rand() % 20 - 10 + 1;
        printf("%d ",array[index]);}
    start = clock();

    for(int j = NUMBER / 2;j > 0;j = j / 2){
        for(int index = j;index < NUMBER;index++){
            int temp = array[index];
            int atom;
            for(atom = index;atom >= j && array[atom - j] > temp;atom = atom - j){
                array[atom] = array[atom - j];}
        array[atom] = temp;}}
    
    finish = clock();
    printf("\n");
    for(int index = 0;index < NUMBER;index++){printf("%d ",array[index]);}
    timetaken = (float)(finish - start)/CLOCKS_PER_SEC;
    printf("\nTime taken (seconds) : %f",timetaken);
    return 0;}