#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) // O(n^2)
{
    bool isSwap = false;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }

        if (!isSwap)
        {
            return;
        }
    }
}

void selectionSort(int arr[], int n) // O(n^2)
{
    for (int i = 0; i < n; i++)
    {
        int smallestIdx = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallestIdx])
            {
                smallestIdx = j;
            }
        }

        swap(arr[i], arr[smallestIdx]);
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    int n = 5;
    int arr[] = {4, 1, 5, 3, 2};

    cout << "Original array" << endl;
    printArray(arr, n);

    // bubbleSort(arr, n);

    // cout << "Sorted array using bubble sort" << endl;
    // printArray(arr, n);

    cout << "Sorted array using selection sort" << endl;
    selectionSort(arr, n);
    printArray(arr, n);

    cout << endl;

    return 0;
}