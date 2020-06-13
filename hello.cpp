#include <iostream>
#include <array>
#include <vector>
using namespace std;

int main()
{
	array<float, 4> state = {1.5, 2.3, 6, 7};
	vector<float> vec = {};
	int i = 0;
	cout << "Hello dear!" << endl;
	cout << "\nSize of vector: " << vec.size() << " and array: " << state.size();
	cout << "\nelements of the float array: ";
	for (i = 0; i < state.size(); i++)
	{
		cout << "\nindex " << i << ", element " << state[i];
		vec.emplace_back(state[i]);
	}

	cout << "\nSize of vector: " << vec.size() << " and array: " << state.size();
	cout << "\nThe elements of the vector now: ";
	for (i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";
	cout << endl;
	return 0;
}