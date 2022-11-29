#pragma once

/**
 *Динамический массив
 */
struct DynamicArray
{
    int* Array;
    int Size;
    int Capacity;
};

/**
 * Создание динамического массива
 * @param array Стандартный массив
 */
void CreateDynamicArray(DynamicArray* array);

/**
 * Удаление динамического массива
 * @param array Стандартный массив
 */
void DeleteArray(DynamicArray* array);

/**
 * Удаление элемента по индексу
 * @param array Стандартный массив
 * @param index Индекс, по которому удаляется элемент
 */
void RemoveElement(DynamicArray* array, int index);

void AddElement(DynamicArray* array, int element);
void AddElementInStarting(DynamicArray* array, int element);
void AddAfterCertainElement(DynamicArray* array, int element, int index);
void SortingArray(DynamicArray* array);
int LinearSearch(DynamicArray* array, int element);
int BinarySearch(DynamicArray* array, int element);
void ResizeDynamicArray(DynamicArray* array);
void ReductionDynamicArray(DynamicArray* array);
int FindElement(DynamicArray* array, int element);