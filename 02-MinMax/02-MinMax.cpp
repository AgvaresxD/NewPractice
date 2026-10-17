#include <iostream>

int main()
{
    int arr[7] = { 28,52,33,27,10,9,50 };
    const int SIZE = (sizeof(arr) / sizeof(arr[0]));

    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < SIZE; i++)
    {
        if (max < arr[i])
            max = arr[i];

        if (min > arr[i])
            min = arr[i];
    }

    std::cout << "min: " << min << " max: " << max << "\n";

    return 0;
}