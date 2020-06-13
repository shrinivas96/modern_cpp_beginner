#include <iostream>
#include <array>
#include <vector>

using namespace std;

int main()	
{
    vector<int> vec = {1, 2, 3, 4, 5};

    cout << "Address of vector elements w/o using reference variable: " << endl;
    for (auto num : vec)
        cout << "\nAddress of element " << num << " is " << &num;
    cout << "\n\nAll values are same because all elements are copied into the same variable 'num'";

    cout << "\n\nAddress of vector elements using reference variable: " << endl;
    for (auto& num : vec)
        cout << "\nAddress of element " << num << " is " << &num;
    cout << "\n\nAll values different because 'num' points to each vec element";

    cout << "\n\nFor validating, the actual address of all the elements:";
    for (int i = 0; i < vec.size(); ++i)
    {
        cout << "\nAddress of element " << vec[i] << " is " << &vec[i] << endl;;
    }
}