#include <iostream>
#include <vector>

int main() {
    std::vector<int> array1 = {12, 4, 5, 19, 25, 100};
    std::vector<int> array2 = {908, 12, 19, 205, 4, 100, 6};
    std::vector<int> unique = {};

    bool common;

    //check array 1 against array 2
    for (int i = 0; i < array1.size(); ++i)
    {
        common = false;

        for (int j = 0; j < array2.size(); ++j)
        {
            if (array1[i] == array2[j])
            {
                common = true;
            }
        }

        if (!common)
        {
            unique.push_back(array1[i]);
        }
    }

    //Check Array 2 against array 1
    for (int i = 0; i < array2.size(); ++i)
    {
        common = false;

        for (int j = 0; j < array1.size(); ++j)
        {
            if (array2[i] == array1[j])
            {
                common = true;
            }
        }

        if (!common)
        {
            unique.push_back(array2[i]);
        }
    }

    //output unique array
    for(int n : unique)
    {
        std::cout << n << '\n';
    }



    return 0;
}