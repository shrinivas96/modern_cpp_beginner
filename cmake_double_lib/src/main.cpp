#include <iostream>
#include <vector>
#include <string>
#include <hello.h>
#include "blah.h"

using namespace std;

int main()
{
    PrintHello();
    cout << "After that hello, we add another library for fun" << endl;
    PrintSum();
    return 0;
}