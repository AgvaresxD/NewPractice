#include <iostream>
#include<utility>

int main()
{

	int arr[7] = { 10, 20, 30, 40, 50, 60, 70 };
	const int SIZE = (sizeof(arr) / sizeof(arr[0]));

	int iterations = SIZE / 2;

	for (int i = 0; i < iterations; i++)

	{
		std::swap(arr[i], (arr[(SIZE - 1) - i]));
	}

	for (int i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << " " << "\t";
	}


	return 0;



}

