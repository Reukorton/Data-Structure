#pragma once

struct DynamicArray
{
    int* Array;
    int Size;
    int Capacity;
};

void CreateDynamicArray(DynamicArray* array);
void DeleteArray(DynamicArray* array);
void AddElement(DynamicArray* array);
void AddElementInStarting(DynamicArray* array);
void AddAfterCertainElement(DynamicArray* array);