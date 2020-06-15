// another declare+define added to show example of 
// linking multiple libraries to the binary file
#include<iostream>
#include<blah.h>

using namespace std;

void PrintSum()
{
    int in1 = 0, in2 = 0; 
    cout << "Enter any two values to add : ";
    cin >> in1 >> in2;
    cout << "Sum total : " << in1 + in2 << endl;
}