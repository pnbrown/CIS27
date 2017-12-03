//
//  main.cpp
//  Vowels and Consonants
//
//  Created by P. Nigel Brown on 2/8/17.
//  Copyright (c) 2017 P. Nigel Brown. All rights reserved.
//

#include <iostream>

class word
{
    int vowelCount, consonantCount = 0;
    char x;
    char vowels[6] = { 'a', 'e', 'i', 'o', 'u', 'y'};
    
    void setChar(char y)
    {
        x = y;
    }
    
    void checkForVowel(char x)
    {
        bool vowelBool = false;
        for(int i = 0; i <=5;)
            if (x == vowels[i])
            {
                vowelCount++;
                vowelBool = true;
                break;
            }
            else
            {
                i++;
            }
        if (vowelBool == false)
        {
            consonantCount++;
        }
    }
    
    
};

int main() {
    return 0;
}
