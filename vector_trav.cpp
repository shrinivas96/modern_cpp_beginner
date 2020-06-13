#include <iostream>
#include <array>
#include <vector>
using namespace std;

int main()
{
	array<float, 4> state = {1.5, 2.3, 6, 7};
	vector<float> vec = {};
	int i = 0;
	cout << "Two traversing methods that produce the same result.\n";

	// Regular for loop: 
	for (i = 0; i < state.size(); ++i)
	{
		cout << "\nindex " << i << ", element " << state[i];
		vec.emplace_back(state[i] + 1);
	}

	// Other way not involving an increment operator (only from c++11?)
	for (float var : state)
	{
		cout << "\narray element: " << var;
	}

	// Other way not involving an increment operator
	for (float num : vec)
	{
		cout << "\nvector element: " << num;
	}
	cout << endl;
	return 0;
}