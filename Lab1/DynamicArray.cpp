#include <iostream>
#include "DynamicArray.h"
#include "Service.h"

int capacity = 8;

void CreateDynamicArray(DynamicArray* array)
{
    array->Capacity = capacity;
    array->Array = new int[array->Capacity];
    array->Size = 0;
}

void DeleteArray(DynamicArray* array)
{
    delete[] array->Array;
    delete array;
}

void AddElement(DynamicArray* array)
{
    array->Array[array->Size] = InputElement();
    array->Size++;
}

void AddElementInStarting(DynamicArray* array)
{
    array->Size++;
    for (int i = array->Size-1; i >= 1; --i)
    {
        array->Array[i] = array->Array[i-1];
    }
    array->Array[0] = InputElementInStarting();
}

void RemoveElement(DynamicArray* array)
{
    int index;

    index = FindElement(array);
    for (int i = index; i < array->Size; ++i)
    {
        if (i+1 < array->Size)
        {
            array->Array[i] = array->Array[i+1];
        }
    }
    array->Size--;
}

void AddAfterCertainElement(DynamicArray* array)
{
    int index;
    int element;

    index = FindCertainElement(array);
    element = InputElement();

    array->Size++;
    for (int i = array->Size-1; i > index+1; --i)
    {
        array->Array[i] = array->Array[i-1];
    }
    array->Array[index+1] = element;
}