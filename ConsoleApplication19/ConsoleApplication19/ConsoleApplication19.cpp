
#include <iostream>
using namespace std;
void FillArray(int *const arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10 + 2;
    }
}
void ShowArray(int* const arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }
}
void push_back(int*& arr, int& size, const int value, const int element)
{
    int* newArray = new int[size+1];
    size++;
    for (int i = 0; i < element; i++) {
        newArray[i] = arr[i];
    }
    newArray[element] = value;
    for (int i = element+1; i < size+1; i++) {
        newArray[i] = arr[i-1];
    }
    delete[]arr;
    arr = newArray;
}
int main()
{
    int size = 5;
    int element = 2;
    int* arr = new int[size];
    FillArray(arr,size);
    ShowArray(arr, size);
    push_back(arr, size, 2, element);
    cout << endl;
    ShowArray(arr, size);
    delete[]arr;
}


