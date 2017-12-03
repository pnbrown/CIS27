#include <iostream> //cin, cout, endl

class Averaging
{
public:
    double array[10];

    void setValues()
    {
        for (int x = 0; x < 10; x++)
        {
            std::cout << "Which value would you like to include in the averaging? " << std::endl;
            std::cin >> array[x];
        }
    }

    void outputValues(double array[])
    {
        std::cout << "You entered the following values: ";
        for (int x = 0; x < 10; x++)
        {
            std::cout << array[x] << " ";
        }
    }

    void averageValues(double array[], double sum, int counter)
    {
        if (counter == 10)
        {
            double average = sum / 10;
            std::cout << "\nThe average value of your numbers is " << average << "." << std::endl;
            return;
        }

        sum = sum + array[counter];
        counter++;

        averageValues(array, sum, counter);
    }
};

int main() {
    Averaging test;
    test.setValues();
    test.outputValues(test.array);
    test.averageValues(test.array, 0, 0);

    return 0;
}