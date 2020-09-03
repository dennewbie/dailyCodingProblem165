//
//  main.c
//  dailyCodingProblem165
//
//  Created by Denny Caruso on 03/09/2020.
//  Copyright © 2020 Denny Caruso. All rights reserved.
//

/*
    Daily Coding Problem 165 - Level: Medium
    This problem was asked by Google.

    Given an array of integers, return a new array where each element in the new array is the number of
    smaller elements to the right of that element in the original input array.

    For example, given the array [3, 4, 9, 6, 1], return [1, 1, 2, 1, 0], since:

    -> There is 1 smaller element to the right of 3
    -> There is 1 smaller element to the right of 4
    -> There are 2 smaller elements to the right of 9
    -> There is 1 smaller element to the right of 6
    -> There are no smaller elements to the right of 1
 
 */

#include "header.h"

int main(int argc, const char * argv[]) {
//    srand((unsigned int) time(NULL));
    
    int size = generateIntNumber();
    int *array = getArray(size);
    printArray(array, size);
    
    
    return 0;
}
