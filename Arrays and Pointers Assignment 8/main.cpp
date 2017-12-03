#include <iostream> //cin, cout, endl
#include <ctime>    //time
#include <cstdlib>  //srand, rand



int main() {
    srand(time(NULL));
    int array[20], *pointer;

    for (int i = 0; i < 20; i++)
    {
        array[i] = rand() % 50;

        *pointer = array[i];

        std::cout << "This entry in the array is stored at " << &pointer << " in memory."
         << " Its value is " << *pointer << ".\n";
    }
}