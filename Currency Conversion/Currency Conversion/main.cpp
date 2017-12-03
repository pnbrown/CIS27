//
//  main.cpp
//  Currency Conversion
//
//  Created by P. Nigel Brown on 2/1/17.
//
//

#include <iostream> //cin, cout
#include <iomanip>  //setw, setfill


//Class for Currency to convert Dollar Amounts
class Currency
{
    public:
        //dollar amount
        double amount;
    
        //conversion rates
        const double yenRate = 113.50;
        const double euroRate = 0.93;
        const double pesoRate = 20.81;
    
        //method to set dollar amount
        void setAmount(double amount)
        {
            amount = amount;
        }
    
        //method to convert dollars to yen
        void toYen(double dollars)
        {
            std::cout << "You have " << dollars * yenRate << " yen.\n";
        }
    
        //method to convert dollars to euro
        void toEuro(double dollars)
        {
            std::cout << "You have " << dollars * euroRate << " Euro.\n";
        }
    
        //method to convert dollars to peso
        void toPeso(double dollars)
        {
            std::cout << "You have " << dollars * pesoRate << " Peso.\n";
        }
    
        //method to pause console output
        void pause()
        {
            std::cout << std::endl << "Press any enter to continue...";
            getchar();
        }
    
};

int main()
{
    //create currency object
    Currency one;
    
    //take in a dollar amount and verify validity
    double dollarAmount;
    bool validDollar = false;
    
    while (validDollar != true)
    {
        std::cout << "How many dollars do you want to convert? ";
        std::cin >> dollarAmount;
        
        if (dollarAmount <= 0)
        {
            std::cout << "You have entered an invalid entry. Please try again.\n";
        }
        else 
        {
            validDollar = true;
            one.setAmount(dollarAmount);
        }
    }
    
    //Menu
    bool menuRepeat = true;
    while (menuRepeat != false)
    {
        int choice;
        
        std::cout << std::setfill('*') << std::setw(40) << "*" << std::endl;
        std::cout << std::setfill(' ') << std::setw(39) << std::left << "* Main Menu:" << std::right << "*\n";
        std::cout << std::setfill(' ') << std::setw(39) << std::left << "* Enter # to run program or Quit" << std::right << "*\n";
        std::cout << std::setfill(' ') << std::setw(39) << std::left << "* 1) Convert Dollar to Yen" << std::right << "*\n";
        std::cout << std::setfill(' ') << std::setw(39) << std::left << "* 2) Convert Dollar to Euro" << std::right << "*\n";
        std::cout << std::setfill(' ') << std::setw(39) << std::left << "* 3) Convert Dollar to Peso" << std::right << "*\n";
        std::cout << std::setfill(' ') << std::setw(39) << std::left << "* 4) Convert Dollar to All Currencies" << std::right << "*\n";
        std::cout << std::setfill(' ') << std::setw(39) << std::left << "* 5) Quit" << std::right << "*\n";
        std::cout << std::setfill('*') << std::setw(40) << "*" << std::endl;
        
        std::cin >> choice;
        
        switch (choice) {
            case 1:
                std::cin.clear();
                std::cin.ignore();
                std::cout << "You have chosen to convert Dollars to Yen.\n";
                one.toYen(dollarAmount);
                one.pause();
                break;
            case 2:
                std::cin.clear();
                std::cin.ignore();
                std::cout << "You have chosen to convert Dollars to Euro.\n";
                one.toEuro(dollarAmount);
                one.pause();
                break;
            case 3:
                std::cin.clear();
                std::cin.ignore();
                std::cout << "You have chosen to convert Dollars to Peso.\n";
                one.toPeso(dollarAmount);
                one.pause();
                break;
            case 4:
                std::cin.clear();
                std::cin.ignore();
                std::cout << "You have chosen to convert Dollars to All Currencies.\n";
                one.toPeso(dollarAmount);
                one.toEuro(dollarAmount);
                one.toPeso(dollarAmount);
                one.pause();
                break;
            case 5:
                std::cout << "Thank you for playing! Goodbye. \n";
                menuRepeat = false;
                break;

        }
    }
    return 0;
}

