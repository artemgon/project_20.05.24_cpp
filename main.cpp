#include <iostream>
using namespace std;

int main() 
{
	const int size_a = 10, size_b = 5, size_c = 5;
	int array_a[size_a], array_b[size_b], array_c[size_c], counter = 0, i;
	cout << "Please, enter array A (10 elements): ";
	for (i = 0; i < size_a; i++)
	{
		cin >> array_a[i];
	}
	for (i = 0; i < size_b; i++)
	{
		array_b[i] = array_a[counter];
		counter++;
	}
	for (i = 0; i < size_c; i++)
	{
		array_c[i] = array_a[counter];
		counter++;
	}
	cout << "Array B: ";
	for (i = 0; i < size_b; i++)
	{
		cout << array_b[i] << " ";
	}
	cout << "\nArray C: ";
	for (i = 0; i < size_c; i++)
	{
		cout << array_c[i] << " ";
	}
	return 0;
}