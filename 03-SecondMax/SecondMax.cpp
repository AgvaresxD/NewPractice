#include <iostream>

int main()
{
    int arr[8] = { 12, 45, 7, 89, 34, 56, 23, 67 };
    const int SIZE = (sizeof(arr) / sizeof(arr[0]));

    int max = arr[0];
    int Secondmax = arr[1];

    if (max < Secondmax)
    {
        max = arr[1];
        Secondmax = arr[0];
    }

    for (int i = 2; i < SIZE; i++)
    {
        if (max < arr[i])
        {
            Secondmax = max;
            max = arr[i];
        }

        if (max > arr[i])
        {
            if (Secondmax < arr[i])
                Secondmax = arr[i];
        }
    }

    std::cout << "max: " << max
        << " SecondMAX: " << Secondmax << "\n";

    return 0;
}