#include <iostream>
using std::cout;
using std::endl;
using std::cin;


struct Node
{
    char letter;
    Node *next;
};


class stack
{

public:
    //method for adding values to the linked list
    void push(char n)
    {
        struct Node *newNode=new Node;
        //fill data part
        newNode->letter=n;
        //link part
        newNode->next=top;
        //make newnode as top/head
        top=newNode;
    }

    /*
    //method for pulling values off the end of the stack
    void pop()
    {
        if(top==NULL){
            cout<<"List is empty!"<<endl;
            return;
        }
        top=top->next;
    }
     */

    //method for viewing the word backward
    void peek()
    {
        if(top==NULL)
        {
            cout<<"List is empty!"<<endl;
            return;
        }
        struct Node *temp=top;
        while(temp!=NULL)
        {
            cout<<temp->letter;
            temp=temp->next;
        }
        cout<<endl;
    }
private:
    Node *top;
};


int main()
{
    //Constructors
    stack one;
    Node two;

    //Getting the word
    std::string input;
    cout << "Please enter your word:\n";
    cin >> input;

    //push word into the stack
    for (int x = 0; x < input.length(); ++x)
    {
        two.letter = input[x];
        one.push(two.letter);
    }

    //Viewing the word backward
    one.peek();
    return 0;
}