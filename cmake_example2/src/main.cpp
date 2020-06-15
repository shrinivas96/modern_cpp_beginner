#include "tools.h"
#include <iostream>
#include <vector>

using namespace std;
// to use the udfunc. use the .o file from compining the earlier .cpp file
// run: "c++ test.cpp vector_sum.o -o test" along with other options

int main()	
{
    int num = 0, n = 0, i = 0;
    cout << "Enter amount for vector size: ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter the values sparated by a space: ";
    for (i = 0; i < n; ++i)
    {
        cin >> num;
        vec[i] = num;
    }
    cout << "The sum of values = " << SumOfVectors(vec);
    cout << endl;
}