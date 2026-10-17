#include <iostream>

int main()
{
    int arr[7] = { 28,52,33,27,10,9,50 };
    int summarr = 0;
    const int SIZE = (sizeof(arr) / sizeof(arr[0]));

    for (int i = 0; i < SIZE; i++)
    {
        summarr = summarr + arr[i];
    }

    float avg = static_cast<float>(summarr) / SIZE;

    std::cout << "Your AVG of array is: " << avg << "\n";
    std::cout << "Your sum elements of array is: " << summarr << "\n";

    return 0;
}