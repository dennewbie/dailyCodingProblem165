//
//  header.c
//  dailyCodingProblem165
//
//  Created by Denny Caruso on 03/09/2020.
//  Copyright © 2020 Denny Caruso. All rights reserved.
//

#include "header.h"

int generateIntNumber(void) {
    return 1 + rand() % MAX_SIZE;
}

int *getArray(int size) {
    int *array = (int *) calloc(size, sizeof(int));
    if (!array) {
        printf("\nError allocating memory for the array...\n");
        exit(EXIT_FAILURE);
    }
    
    return array;
}

void printArray(int *array, int size) {
    newLine();
    printf("Array -  Size: %d \n", size);
    for (int i = 0; i < size; i++) printf(" -> %5d\n", array[i]);
    newLine();
}

int *getArrayWithNumberOfSmallerElements(int *inputArray, int size) {
    int *outputArray = getArray(size);
    
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (inputArray[j] < inputArray[i]) outputArray[i] += 1;
        }
    }
    
    return outputArray;
}
