#include <iostream>
#include <array>
#include <vector>

using namespace std;

void CalculateSquares(vector<int>& vec)         // const vector<int>& vec to save from changing values
{
    vector<int> result(vec.size());
    // The addresses of vec will be same because they're passed by reference
    cout << "\n\nAddress of elements inside the function: " << endl;
    for (int i = 0; i < vec.size(); ++i)
    {
        cout << "\nAddress of element " << vec[i] << " is " << &vec[i];
        result[i] = vec[i] * vec[i];
    }
    cout << "\n\nNow we change the value of one element of vector to see that it affects the variable in main()";
    cout << "\nDeclare the argument as const if you're sure it is not going to be changed.";
    vec[2] = 1234;
    // In this implementation, there is no need of returning the calculated squares. But could be done later on.
}

int main()	
{
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << "Address and values of vector elements before: " << endl;
    for (auto& num : vec)
    {
        cout << "\nAddress of element " << num << " is " << &num;
    }
    CalculateSquares(vec);

    cout << "\n\nAddress and values of vector elements after: " << endl;
    for (auto& num : vec)
    {
        cout << "\nAddress of element " << num << " is " << &num;
    }
    cout << endl;
}