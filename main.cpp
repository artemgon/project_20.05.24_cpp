#include <iostream>
using namespace std;

int main()
{
	const int size_a = 5, size_b = 5, size_c = 10;
	int array_a[size_a], array_b[size_b], array_c[size_c], counter = 0, i;
	for (int i = 0; i < size_a; i++)
	{
		cout << "Array A " << i + 1 << "th element: ";
		cin >> array_a[i];
		cout << "Array B " << i + 1 << "th element: ";
		cin >> array_b[i];
	}
	for (i = counter; i < size_a; i++)
	{
		if (array_a[i] > 0)
		{
			array_c[counter] = array_a[i];
			counter++;
		}
		else continue;
	}
	for (i = 0; i < size_b; i++)
	{
		if (array_b[i] > 0)
		{
			array_c[counter] = array_b[i];
			counter++;
		}
		else continue;
	}
	for (i = 0; i < size_a; i++)
	{
		if (array_a[i] == 0) {
			array_c[counter] = array_a[i];
			counter++;
		}
		else continue;
	}
	for (i = 0; i < size_b; i++)
	{
		if (array_b[i] == 0) {
			array_c[counter] = array_b[i];
			counter++;
		}
		else continue;
	}
	for (i = 0; i < size_a; i++)
	{
		if (array_a[i] < 0) {
			array_c[counter] = array_a[i];
			counter++;
		}
		else continue;
	}
	for (i = 0; i < size_b; i++)
	{
		if (array_b[i] < 0) {
			array_c[counter] = array_b[i];
			counter++;
		}
		else continue;
	}
	cout << "Array C: \n";
	for (i = 0; i < size_c; i++)
	{
		cout << array_c[i] << " ";
	}
	return 0;
}