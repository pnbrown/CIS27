//
//  main.cpp
//  Bubble Sort
//
//  Created by P. Nigel Brown on 2/27/17.
//  Copyright (c) 2017 P. Nigel Brown. All rights reserved.
//

#include <iostream> //cin, cout, endl
#include <ctime> //time
#include <cstdlib> //srand, rand

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
    
    //bubblesort algorithm
    void bubbleSort(int randArray[1000], int i)
    {
        //ends recursive function
        if (i == 0)
        {
            return;
        }
        //if index is larger than index to the right, switch them
        for (int x = 0; x <= i; x++)
        {
            if (randArray[x] > randArray[x+1])
            {
                int temp = randArray[x+1];
                randArray[x+1] = randArray[x];
                randArray[x] = temp;
            }
        }
        bubbleSort(randArray, i-1);
    }
    
    void checkSort(int randArray[1000])
    {
        for (int x = 0; x <1000; x++)
        {
            std::cout << randArray[x] << std::endl;
        }
    }
    
    
    void binarySearch(int randArray[1000])
    {
        //create variables for number to be checked and whether number checked number appears in the array
        int checkNum;
        
        //allow user to input a number to be checked
        std::cout << "Which number would you like to check? ";
        std::cin >> checkNum;
        
        //std::cout << checkNum << " \n";
        
        
        //implementing binary search
        int position, high = 1000, low = 0;
        
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
    one.bubbleSort(one.randArray, 1000);
    //one.checkSort(one.randArray);
    one.binarySearch(one.randArray);
    
    return 0;
}
