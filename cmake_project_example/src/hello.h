#pragma once
#include<iostream>
#include<vector>
#include<string>

using namespace std;

/*
this time, instead of declaring just the dunction
the function definition is written here itself
as opposed to the previous case of declare, definition
*/
void PrintHello();

/* FUNC DEFINITION HAS MOVED TO HELLO.CPP
{
    cout << "The hello function!" << endl;
    vector<string> message = {"A", "modern", "take", "on", "Hello", "world"};
    for (auto& word : message)
        cout << word << " ";
    cout << endl;
}
*/

/*
because the declaration+definition is already in the *.h file
we did not have to change anything in the cmakelists.txt file.

this header file is included in main.cpp, which means all of 
this code will anyway be copied into while compiling.

thus, no need of linking. but, nfp: you pay for this with time
consumed in compilation
*/