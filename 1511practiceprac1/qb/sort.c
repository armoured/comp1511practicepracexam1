#include <stdio.h>
#include <stdlib.h>

//Created by Mitchell Shelton
//Modified by <you>

void sort(int len, int *arr);
void printarray(int len, int *arr);

int main(int argc, char* argv[]) {
    //DO not change the stuff in main
    if (argc < 3) {
        printf("usage: ./sort size num1 num2 num3 numN\n");
        exit(1);
    }
    int size = atoi(argv[1]);
    if (argc != size + 2) {
	printf("usage: ./sort size num1 num2 num3 numN\n");
        exit(1);
    }
    int *array = malloc(sizeof(int) * size);
    int i = 0;
    while (i < size) {
        array[i] = atoi(argv[i+2]);
        i++;
    }
    sort(size, array);
    printarray(size, array);
    free(array);
    return 0;
}

//given an array of length n, sort the array.

//e.g given len = 5 and arr = 5, 3, 2, 1, 4
//sorted array should be 1, 2, 3, 4, 5
void sort(int len, int *arr) {
    //TODO implement this function
 
}

void printarray(int len, int *arr) {
    int i = 0;
    while (i < len) {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
}
