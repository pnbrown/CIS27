#include<iostream>
using namespace std;
const int TABLE_SIZE = 100;

//Class for each entry. Each Key Value Pair is an object
class HashEntry
{
public:
    int key;
    double value;
    HashEntry(int key, double value)
    {
        this->key = key;
        this->value = value;
    }
};

//Class for the Hash Map
class HashMap
{
private:
    HashEntry **table;
public:
    //Method for creating all the objects in the hash map
    HashMap()
    {
        table = new HashEntry * [TABLE_SIZE];
        for (int i = 0; i < TABLE_SIZE; i++)
        {
            table[i] = NULL;
        }
    }

    //Method for finding the value of a key
    double Search(int key)
    {
        int  hash = HashFunc(key);
        while (table[hash] != NULL && table[hash]->key != key)
        {
            hash = HashFunc(hash + 1);
        }
        if (table[hash] == NULL)
            return -1;
        else
            return table[hash]->value;
    }

    //method for hashing the key
    double HashFunc(int key)
    {
        return key % TABLE_SIZE;
    }

    //method for filling a hash entry
    void Insert(int key, double value)
    {
        int hash = HashFunc(key);

        //avoiding collisions
        while (table[hash] != NULL && table[hash]->key != key)
        {
            hash = HashFunc(hash + 1);
        }
        if (table[hash] != NULL)
            delete table[hash];
        table[hash] = new HashEntry(key, value);
    }
};


int main()
{
    srand(time(NULL));

    //constructor
    HashMap hash;

    int key;
    double value;

    //Filling the Hash Table
    for (int x = 0; x < 20; ++x)
    {
        key = x;
        value = rand()%100;
        hash.Insert(key, value);
    }

    //Retrieving values from the Hash Table
    double returnValue;
    for (int y = 0; y < 20; ++y)
    {
        returnValue = hash.Search(y);
        std::cout << "At key " << y << ", ";
        std::cout << "The value " << returnValue << " is stored.\n";
    }

    return 0;
}