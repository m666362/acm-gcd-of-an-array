/*Bismillahir Rahmanir Rahim*/
#include <stdio.h>
#include <math.h>
int scanAndSumOfArray(int *array, int index);
int findMinOfArray(int array[], int index);
int findGcdOfArray(int array[], int index, int min);

int main(){
    int index;
    scanf("%d", &index);
    int array[index], sum, gcd, min;
    sum = scanAndSumOfArray(array, index);
    min = findMinOfArray(array, index);
    gcd = findGcdOfArray(array, index, min);
    printf("Sum = %d\n", sum);
    printf("Absolute minimum value = %d\n", min);
    printf("GCD = %d\n", gcd);
}

//todo: code for findGcdOfArray()
int findGcdOfArray(int array[], int index, int min){
    int j, gcd = min;
    for (int i = 0; i < index; ++i) {
        for ( j = gcd; j > 0; --j) {
            if(array[i]%j==0){
                gcd = j;
                break;
            }
        }if(gcd == 1)
            break;
    }
    return gcd;
}

//todo: code for findMinOfArray() for gcd by using abs()
int findMinOfArray(int array[], int index){
    int min = abs(array[0]);
    for (int i = 1; i < index; ++i) {
        if(min > abs(array[i]))
            min = abs(array[i]);
    }
    return min;
}

//todo: code for scanAndSumOfArray() which scan also
int scanAndSumOfArray(int *array, int index){
    int sum = 0;
    for (int i = 0; i < index; ++i) {
        scanf("%d", &array[i]);
        sum += array[i];
    }
    return sum;
}