#include <iostream>
using namespace std;

int main() 
{
	const int size = 6;
	int array[size], counter = 0;
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		array[i] = rand() % 10 - 5;
		cout << array[i] << " ";
	}
	for (int i = 0; i < size; i++) {
		if (array[i] == 0)
		{
			int current_index = i; 
			for (int j = current_index + 1; j < size; j++)
			{ 
				if (array[j] != 0)
				{
					array[current_index] = array[j];
					array[j] = 0;    
					break;
				}
			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		if (array[i] == 0)
		{
			array[i] = -1;
		}
	}
	cout << "\n";
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
	return 0;
}