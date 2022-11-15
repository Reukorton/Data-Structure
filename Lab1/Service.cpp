#include <iostream>
#include "Service.h"
#include "DynamicArray.h"
using namespace std;

int InputElement()
{
    int element;
    cin >> element;

    return element;
}

void PrintArray(DynamicArray* array)
{
    for (int i = 0; i < array->Size; ++i)
    {
        cout << array->Array[i] << " ";
    }
    cout << endl << endl;
}

int FindElement(DynamicArray* array, int element)
{
    for (int i = 0; i < array->Size; ++i)
    {
        if (array->Array[i] == element)
        {
            return i;
        }
    }

    return -1;
}

int FindIndexCertainElement(DynamicArray* array, int element)
{
    for (int i = 0; i < array->Size; ++i)
    {
        if (array->Array[i] == element)
        {
            return i;
        }
    }

    return -1;
}