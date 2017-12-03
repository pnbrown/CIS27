#include <iostream> //cin, cout, endl

class RandArray
{
    
public:
    int array1[1000], array2[100000];
    
    void fillArray1()
    {
        //fill the array
        std::cout << "I am now filling the first array. " << std::endl;
        srand(time(NULL));
        for (int x=0; x < 1000; x++)
        {
            array1[x] = rand() % 1000;
        }
    }
    
    void fillArray2()
    {
        //fill the array
        std::cout << "I am now filling the second array. " << std::endl;
        srand(time(NULL));
        for (int x=0; x < 100000; x++)
        {
            array2[x] = rand() % 1000;
        }
    }
    
    /*
     void printArray1()
     {
     for (int x = 0; x < 1000; x++)
     {
     std::cout << array1[x] << std::endl;
     }
     }
     
     void printArray2()
     {
     for (int x = 0; x < 100000; x++)
     {
     std::cout << array2[x] << std::endl;
     }
     }
     */
    //Linear Search for 1000
    void linearSearch1()
    {
        std::cout << "I am now running the Linear Search on the first array. " << std::endl;
        
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
            if (array1[y] == checkNum)
            {
                frequency = frequency + 1;
                
                //store locations for output
                addresses = addresses + " " + std::to_string(y);
                
                //Next line checks if it is working
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
    
    //Linear Search for 100000
    void linearSearch2()
    {
        std::cout << "I am now running the Linear Search on the second array. " << std::endl;
        
        //create variables for number to be checked, number of times checked number appears in the array, and an array to store locations
        int checkNum, frequency;
        std::string addresses;
        
        //allow user to input guess
        std::cout << "Which number would you like to check? ";
        std::cin >> checkNum;
        
        frequency = 0;
        
        //search for user's number in original array and store locations in a new array
        for (int y = 0; y < 100000; y++)
        {
            if (array2[y] == checkNum)
            {
                frequency = frequency + 1;
                addresses = addresses + " " + std::to_string(y);
                //Next line checks if it is working
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
    
    //bubblesort for 1000 algorithm
    void bubbleSort1(int randArray1[1000], int i)
    {
        //ends recursive function
        if (i == 0)
        {
            std::cout << "I have just finished the Bubble Sort on the first array. " << std::endl;
            return;
        }
        //if index is larger than index to the right, switch them
        for (int x = 0; x <= i; x++)
        {
            if (randArray1[x] > randArray1[x+1])
            {
                int temp = randArray1[x+1];
                randArray1[x+1] = randArray1[x];
                randArray1[x] = temp;
            }
        }
        bubbleSort1(randArray1, i-1);
    }
    
    //bubblesort for 100000 algorithm
    void bubbleSort2(int randArray2[100000], int z)
    {
        //ends recursive function
        if (z == 0)
        {
            std::cout << "I have just finished the Bubble Sort on the second array. " << std::endl;
            return;
        }
        //if index is larger than index to the right, switch them
        for (int x = 0; x <= z; x++)
        {
            if (randArray2[x] > randArray2[x+1])
            {
                int temp = randArray2[x+1];
                randArray2[x+1] = randArray2[x];
                randArray2[x] = temp;
            }
        }
        bubbleSort2(randArray2, z-1);
    }
    
    //insertion sort algorithm for 1000
    void insertionSort1(int randArray1[1000], int length)
    {
        int j, temp;
        std::cout << "I am now running an Insertion Sort on the first array. " << std::endl;
        for (int i = 0; i < length; i++){
            j = i;
            
            while (j > 0 && randArray1[j] < randArray1[j-1]){
                temp = randArray1[j];
                randArray1[j] = randArray1[j-1];
                randArray1[j-1] = temp;
                j--;
            }
        }
        
    }
    
    //insertion sort algorithm for 100000
    void insertionSort2(int randArray2[100000], int length)
    {
        int j, temp;
        std::cout << "I am now running an Insertion Sort on the second array. " << std::endl;
        
        for (int i = 0; i < length; i++){
            j = i;
            
            while (j > 0 && randArray2[j] < randArray2[j-1]){
                temp = randArray2[j];
                randArray2[j] = randArray2[j-1];
                randArray2[j-1] = temp;
                j--;
            }
        }
        
    }
    
    //recursive quicksort for 1000
    void quickSort(int array1[1000], int left, int right) {
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
    
    //recursive quicksort for 100000
    void quickSort2(int array2[100000], int left, int right) {
        int i = left, j = right;
        int tmp;
        int pivot = array2[(left + right) / 2];
        
        //sort and split the array
        while (i <= j) {
            while (array2[i] < pivot)
                i++;
            while (array2[j] > pivot)
                j--;
            if (i <= j) {
                tmp = array2[i];
                array2[i] = array2[j];
                array2[j] = tmp;
                i++;
                j--;
            }
        };
        
        //recursive calls
        if (left < j)
            quickSort(array2, left, j);
        if (i < right)
            quickSort(array2, i, right);
    }
    
    //Binary Search for 1000
    void bSearchArray1(int randArray1[1000])
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
    
    //Binary Search for 100000
    void bSearchArray2(int randArray2[100000])
    {
        //create variables for number to be checked and whether number checked number appears in the array
        int checkNum;
        
        //allow user to input a number to be checked
        std::cout << "Which number would you like to check? ";
        std::cin >> checkNum;
        
        //std::cout << checkNum << " \n";
        
        
        //implementing binary search
        int position, high = 99999, low = 0;
        
        position = (high + low) / 2;
        //std::cout << position << " \n";
        
        while ((randArray2[position] != checkNum) && (low <= high))
        {
            if (randArray2[position] > checkNum)
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
    one.fillArray1();
    one.fillArray2();
    //one.linearSearch1();
    //one.linearSearch2();
    one.bubbleSort1(one.array1, 1000);
    one.bubbleSort2(one.array2, 100000);
    std::cout << "I am now running the Quick Sort on the first array. " << std::endl;
    one.quickSort(one.array1, 0, 1000);
    std::cout << "I am now running the Quick Sort on the second array. " << std::endl;
    one.quickSort2(one.array2, 0, 100000);
    one.bSearchArray2(one.array2);
    
    
    return 0;
}