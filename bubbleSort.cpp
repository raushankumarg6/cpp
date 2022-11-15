#include <bits/stdc++.h>
using namespace std;

void print(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void bubbleSort(int a[], int size)
{
    cout << "Bubble Sort: ";
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

void insertionSort(int a[], int size)
{
    // Suppose first element is at the right pos
    cout << "Insertion Sort: ";
    for (int i = 1; i < size; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (a[j] > a[j + 1]) // If the last ele of sorted part is greater then swap else break
                swap(a[j], a[j + 1]);
            else
                break;
        }
    }
}

void selectionSort(int a[], int size)
{
    cout << "Selection Sort: ";
    for (int i = 0; i < size - 1; i++) // Yha pe chota element lana h
    {
        // Find min ele idx
        int min_idx = i;
        for (int j = i + 1; j < size; j++)
        {
            if (a[min_idx] > a[j]) // if min_idx element is > then change the min_idx
            {
               min_idx = j;
            }
        }
        swap(a[i], a[min_idx]); // Assigning the ith smallest element by min_idx 
    }
}

int main()
{
    int a[] = {5, 9, 8, 2, -6, 1};
    int size = sizeof(a) / sizeof(int);
    // bubbleSort(a, size);
    // insertionSort(a, size);
    selectionSort(a, size);
    print(a, size);
}