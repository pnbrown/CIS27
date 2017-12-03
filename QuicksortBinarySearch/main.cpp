#include <iostream>
class RandArray
{
public:

    int array[1000];

    void fillArray()
    {
        srand(time(NULL));
        for (int x = 0; x < 1000; x++)
        {
            array[x] = rand() % 1000;
        }
    }

    //recursive quicksort for 1000
    void quickSort(int array1[1000], int left, int right)
    {
        int i = left, j = right;
        int tmp;
        int pivot = array1[(left + right) / 2];

        //sort and split the array
        while (i <= j) {
            while (array1[i] < pivot)
                i++;
            while (array1[j] > pivot)
                j--;
            if (i <= j) {
                tmp = array1[i];
                array1[i] = array1[j];
                array1[j] = tmp;
                i++;
                j--;
            }
        };

        //recursive calls
        if (left < j)
            quickSort(array1, left, j);
        if (i < right)
            quickSort(array1, i, right);
    }


    //Binary Search for 1000
    void bSearchArray1(int randArray1[1000])
    {
        //create variables for number to be checked and whether number checked number appears in the array
        int checkNum;

        //allow user to input a number to be checked
        std::cout << "Which number would you like to check for the binary search for 1000? ";
        std::cin >> checkNum;

        //std::cout << checkNum << " \n";


        //implementing binary search
        int position, high = 999, low = 0;

        position = (high + low) / 2;
        //std::cout << position << " \n";

        while ((randArray1[position] != checkNum) && (low <= high))
        {
            if (randArray1[position] > checkNum)
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
    RandArray test;
    test.fillArray();
    test.quickSort(test.array, 0, 999);
    test.bSearchArray1(test.array);

    return 0;
}