#include <iostream>
using namespace std;

int main() 
{
	const int size_a = 5, size_b = 5, size_c = 5;
	int array_a[size_a], array_b[size_b], array_c[size_c], counter = 0, i;
	for (i = 0; i < size_a; i++)
	{
		cout << "Array A " << i + 1 << "th element: ";
		cin >> array_a[i];
		cout << "Array B " << i + 1 << "th element: ";
		cin >> array_b[i];
	}
	for (i = 0; i < size_c; i++)
	{
		array_c[i] = array_a[i] + array_b[i];
	}
	cout << "The result: \n";
	for (i = 0; i < size_c; i++)
	{
		cout << array_c[i] << " ";
	}
	return 0;
}