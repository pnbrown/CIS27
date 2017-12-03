#include <iostream>
#include <vector>
#include <stack>

int main() {
    std::stack<char> stack;
    std::string string;

    std::cout << "What is your word? \n";
    std::cin >> string;

    for (int x = 0; x < string.length(); ++x)
    {
        stack.push(string[x]);
    }

    for (int x = 0; x < string.length(); ++x)
    {
        std::cout << stack.top();
        stack.pop();
    }


    return 0;
}