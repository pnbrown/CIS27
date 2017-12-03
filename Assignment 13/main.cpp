#include <iostream>
#include <vector>
#include <queue>

int main() {
    std::queue<char> queue;
    std::string string;

    std::cout << "What is your word? \n";
    std::cin >> string;

    for (int x = 0; x < string.length(); ++x)
    {
        queue.push(string[x]);
    }

    while (!queue.empty())
    {
        std::cout << queue.front();
        std::cout << queue.front();
        queue.pop();

    }


    return 0;
}