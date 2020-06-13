#include <iostream>
#include <array>
#include <vector>

using namespace std;

vector<int> CalculateSquares(int size)
{
	vector<int> result(size);
	for (int i = 1; i <= result.size(); ++i)
	{
		result[i-1] = i*i;
	}	
	return result;
}

int main()	
{
	int size = 5;
	// cout << "Enter size to calculate consecutive squares: ";
	// cin >> size;
	auto squares = CalculateSquares(size);
	cout << "List of squares: ";
	for (auto& num : squares)
	{
		cout << num << " ";
	}
	cout << endl;
}