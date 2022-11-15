#pragma once

struct DynamicArray
{
    int* Array;
    int Size;
    int Capacity;
};

void CreateDynamicArray(DynamicArray* array);
void DeleteArray(DynamicArray* array);
void RemoveElement(DynamicArray* array, int index);
void AddElement(DynamicArray* array, int element);
void AddElementInStarting(DynamicArray* array, int element);
void AddAfterCertainElement(DynamicArray* array, int element, int index);
void SortingArray(DynamicArray* array);
int LinearSearch(DynamicArray* array, int element);
int BinarySearch(DynamicArray* array, int element);
void ResizeDynamicArray(DynamicArray* array);
void ReductionDynamicArray(DynamicArray* array);