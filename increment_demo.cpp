#include <iostream>

using namespace std;

int main()
{
	int i = 0, c;
	c = i++;							// number will be copied and then incremented
	cout << i++ << i << c << endl;		// prints i then increments
	c = ++i;							// number will be copied after incrementing
	cout << ++i << i << c << endl;		// increments then prints i
	return 0;
}