//
//  main.cpp
//  Linear Search
//
//  Created by P. Nigel Brown on 2/8/17.
//  Copyright (c) 2017 P. Nigel Brown. All rights reserved.
//

#include <iostream> //cin, cout, endl
#include <ctime> //time
#include <cstdlib> //srand, rand
#include <string>


class RandArray
{
    
public:
    int randArray[1000];
    
    void fillArray()
    {
        //fill the array
        srand(time(NULL));
        for (int x=0; x < 1000; x++)
        {
            randArray[x] = rand() % 1000;
        }
    }
    
    void search()
    {
        //create variables for number to be checked, number of times checked number appears in the array, and an array to store locations
        int checkNum, frequency;
        std::string addresses;
        
        //allow user to input guess
        std::cout << "Which number would you like to check? ";
        std::cin >> checkNum;
    
        frequency = 0;
    
        //search for user's number in original array and store locations in a new array
        for (int y = 0; y < 1000; y++)
        {
            if (randArray[y] == checkNum)
            {
                frequency = frequency + 1;
                addresses = addresses + " " + std::to_string(y);
                //std::cout << "Found one " << std::endl;
            }
        }
            
        //iterate through the second array looking for a value greater than zero which would correspond to an index with the user's number
        if (frequency > 0)
        {
            std::cout << "Your number appears in the array " << frequency << " times." << std::endl;
            std::cout << "It appears at location(s):" << addresses << std::endl;
        }
        
        else
        {
            std::cout << "Your number does not appear in the array." << std::endl;
        }
    }
};

int main() {
    RandArray one;
    one.fillArray();
    one.search();
    return 0;
}
