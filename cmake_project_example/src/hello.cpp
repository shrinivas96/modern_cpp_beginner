#include<iostream>
#include<vector>
#include<string>
#include<hello.h>

using namespace std;

void PrintHello()
{
    cout << "The hello function!" << endl;
    vector<string> message = {"A", "modern", "take", "on", "Hello", "world"};
    for (auto& word : message)
        cout << word << " ";
    cout << endl;
}