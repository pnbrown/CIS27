//
//  main.cpp
//  Binary Search
//
//  Created by P. Nigel Brown on 2/8/17.
//  Copyright (c) 2017 P. Nigel Brown. All rights reserved.
//

#include <iostream> //cin, cout, endl
#include <ctime> //time
#include <cstdlib> //srand, rand
#include <algorithm> //sort


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
    
    void sortArray()
    {
        std::sort(randArray, randArray + 1000);
        
        /*
         //check if sort worked
         for (int y=0; y < 1000; y++)
         {
         std::cout << randArray[y] << " \n";
         }
        */
    }
    
    
    void bSearch(int randArray[1000])
    {
        //create variables for number to be checked and whether number checked number appears in the array
        int checkNum;
        
        //allow user to input a number to be checked
        std::cout << "Which number would you like to check? ";
        std::cin >> checkNum;
        
        //std::cout << checkNum << " \n";
        
        
        //implementing binary search
        int position, high = 999, low = 0;
        
        position = (high + low) / 2;
        //std::cout << position << " \n";
        
        while ((randArray[position] != checkNum) && (low <= high))
        {
            if (randArray[position] > checkNum)
            {
                high = position - 1;
            }
            else
            {
                low = position + 1;
            }
            
            position = (high + low) / 2;
            //std::cout << position << " \n";
        }
        
        if (low <= high)
        {
            std::cout << "Your number was found in the array at positon: " << position << ".\n";
        }
        else
        {
            std::cout << "Your number was not found in the array.\n";
        }
        
    }
};

int main() {
    RandArray one;
    one.fillArray();
    one.sortArray();
    one.bSearch(one.randArray);
    return 0;
}
