#include <iostream>
#include <string>

struct stack
{
    char *data;
    int top;
};

void push(char ch, stack* y)
{
    y->data[++(y->top)] = ch;
}

char pop(stack* y)
{
    return y->data[(y->top)--];
}

int empty(stack* y)
{
    return (y->top==-1)?1:0;
}




int main() {

    stack stack1;
    std::string input;

    stack1.data = new char[50];
    stack1.top = -1;

    std::cout << "Please input string: ";
    std::cin >> input;

    for (int x=0; x < input.length(); ++x)
    {
        push(input.at(x), &stack1);
    }

    while (empty(&stack1) == 0)
    {
        std::cout << pop(&stack1);
    }

    return 0;
}