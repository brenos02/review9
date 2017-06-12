//
//  main.cpp
//  Review9
//
//  Created by Breno Sallouti on 09/06/17.
//  Copyright © 2017 Breno Sallouti. All rights reserved.

// Get input from user of 10 numbers and calculate its average

#include <iostream>


int main(int argc, const char * argv[]) {
    int numbers[10];
    int i;

    for(int i = 0; i < 10 ; i++){
        std::cout << "Give me a value:";
        std::cin >> numbers[i];
    }
    i= numbers[0]+numbers[1]+numbers[2]+numbers[3]+numbers[4]+numbers[5]+numbers[6]+numbers[7]+numbers[8]+numbers[9];
    
    std::cout << "The average of those values is:"<< i /10;
    return 0;
}
