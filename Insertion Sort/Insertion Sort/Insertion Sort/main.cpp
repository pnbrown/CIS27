//
//  main.cpp
//  Insertion Sort
//
//  Created by P. Nigel Brown on 3/1/17.
//  Copyright (c) 2017 P. Nigel Brown. All rights reserved.
//

#include <iostream> //cin, cout, endl
#include <ctime>    //time
#include <cstdlib>   //srand, rand

class RandArray
{
public:
    int randArray[1000];
    
    void fillArray()
    {
        //fill the array
        srand(time(NULL));
        for (int x = 0; x < 1000; x++)
        {
            randArray[x] = rand() % 1000;
        }
    }
    
    //insertion sort algorithm
    void insertionSort(int randArray[1000], int length)
    {
        int j, temp;
        
        for (int i = 0; i < length; i++){
            j = i;
            
            while (j > 0 && randArray[j] < randArray[j-1]){
                temp = randArray[j];
                randArray[j] = randArray[j-1];
                randArray[j-1] = temp;
                j--;
            }
        }
        
    }
    
    //verify sorting was successful
    void checkSort(int randArray[1000])
    {
        for (int x = 0; x < 1000; x++)
        {
            std::cout << randArray[x] << " ";
        }
    }
    
    void binarySearch(int randArray[1000])
    {
        int checkNum;
        
        std::cout << "\nWhich number would you like to search? ";
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

int main()
{
    RandArray one;
    one.fillArray();
    one.insertionSort(one.randArray, 1000);
    one.checkSort(one.randArray);
    one.binarySearch(one.randArray);
    return 0;
}
