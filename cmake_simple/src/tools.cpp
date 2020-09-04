#include "tools.h"
#include <vector>

using namespace std;

// .cpp file contains the func definition of the 
// func in .h file. 
// to compile the main() file and use this function

// run: "c++ -c file_name.cpp -o file_name.o"
// -c option = only compile do not link. does not create executable
int SumOfVectors(vector<int>& to_sum)
{
    int sum = 0;
    for (auto& num : to_sum)
        sum += num;
    return sum;
}