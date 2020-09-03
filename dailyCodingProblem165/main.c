//
//  main.c
//  dailyCodingProblem165
//
//  Created by Denny Caruso on 03/09/2020.
//  Copyright © 2020 Denny Caruso. All rights reserved.
//

#include "header.h"

int main(int argc, const char * argv[]) {
    srand((unsigned int) time(NULL));
    
    int size = generateIntNumber();
    int *array = getArray(size);
    printArray(array, size);
    
    
    return 0;
}
