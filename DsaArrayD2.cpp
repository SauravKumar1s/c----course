// find tha largest no in the element
// Input: arr[] = {10, 20, 4}
// Output: 20
// Explanation: Among 10, 20 and 4, 20 is the largest.

// Input : arr[] = {20, 10, 20, 4, 100}
// Output : 100

#include <iostream>

using namespace std;

int largestNo(int arr[], int number)
{
    int i;

    int max = arr[0];

    for (int i = 0; i < number; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[] = {50, 324, 45, 90, 9808};
    int n = sizeof(arr) / sizeof(arr[0]);
    // Function call
    cout << "Largest in given array is " << largestNo(arr, n);
    return 0;
}