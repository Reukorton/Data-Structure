#include "DynamicArray.h"
#include "Service.h"

//TODO: remove
int capacity = 8;
const int growfactory = 2; 

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

void AddElement(DynamicArray* array, int element)
{
    array->Size++;

    if (array->Size >= array->Capacity)
    {
        ResizeDynamicArray(array);
    }

    array->Array[array->Size - 1] = element;
}

void AddElementInStarting(DynamicArray* array, int element)
{
    AddAfterCertainElement(array, element, -1);
}

void AddAfterCertainElement(DynamicArray* array, int element, int index)
{
    ResizeDynamicArray(array);
    array->Size++;
    for (int i = array->Size; i > index+1; --i)
    {
        array->Array[i] = array->Array[i-1];
    }
    array->Array[index+1] = element;
}

void RemoveElement(DynamicArray* array, int index)
{
    for (int i = index; i < array->Size; ++i)
    {
        if (i+1 < array->Size)
        {
            array->Array[i] = array->Array[i+1];
        }
    }
    array->Size--;

    if (array->Capacity / growfactory > array->Size)
    {
        ResizeDynamicArray(array);
    }
}



void SortingArray(DynamicArray* array)
{
    for (int i = 0; i < array->Size; ++i)
    {
        for (int j = i+1; j < array->Size; ++j)
        {
            if (array->Array[i] > array->Array[j])
            {
                std::swap(array->Array[i], array->Array[j]);
            }
        }
    }
}

int LinearSearch(DynamicArray* array, int element)
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

int BinarySearch(DynamicArray* array, int element)
{
    SortingArray(array);
    int first = 0;
    int last = array->Size;

    while (first < last)
    {
        int mid = (first + last) / 2;
        if (element <= array->Array[mid])
        {
            last = mid;
        }
        else
        {
            first = mid + 1;
        }
    }

    if (first >= 0)
    {
        return first;
    }
    else
    {
        return -1;
    }
}

void ResizeDynamicArray(DynamicArray* array)
{
    int* tempArrayInfo;

    if (array->Size >= array->Capacity)
    {
        array->Capacity *= growfactory;
        //TODO: duplication
        tempArrayInfo = ReFillingArray(array);

        delete[] array->Array;
    }
    else
    {
        array->Capacity /= growfactory;
        //TODO: duplication
        tempArrayInfo = ReFillingArray(array);

        delete[] array->Array;
    }

    array->Array = new int[array->Capacity];
    for (int i = 0; i < array->Size; i++)
    {
        array->Array[i] = tempArrayInfo[i];
    }
    delete[] tempArrayInfo;
}

int* ReFillingArray(DynamicArray* array)
{
    //TODO: RSDN
    int* tempArrayInfo;

    tempArrayInfo = new int[array->Size];
    for (int i = 0; i < array->Size; i++)
    {
        tempArrayInfo[i] = array->Array[i];
    }

    return tempArrayInfo;
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