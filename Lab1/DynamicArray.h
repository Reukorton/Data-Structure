#pragma once

/**
 *Динамический массив
 */
struct DynamicArray
{
    //TODO: comments
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

/**
 * Добавление элемента в динамический массив.
 * @param array Стандартный массив.
 * @param element Элемент, который будет добавлен в массив.
 */
void AddElement(DynamicArray* array, int element);

/**
 * Добавление элемента в начало динамического массива.
 * @param array Стандартный массив.
 * @param element Элемент, который будет добавлен в массив.
 */
void AddElementInStarting(DynamicArray* array, int element);

/**
 * Добавление элемента после определенного элемента.
 * @param array Стандартный массив.
 * @param element Элемент, который будет добавлен в массив.
 * @param index Индекс, после которого будет добавлен элемент.
 */
void AddAfterCertainElement(DynamicArray* array, int element, int index);

/**
 * Сортировка динамического массива.
 * @param array Стандартный массив.
 */
void SortingArray(DynamicArray* array);

/**
 * Линейный поиск.
 * @param array Стандартный массив.
 * @param element Элемент, который ищем в массиве.
 * @return Индекс искомого элемента.
 */
int LinearSearch(DynamicArray* array, int element);

/**
 * Бинарный поиск.
 * @param array Стандартный массив.
 * @param element Элемент, который ищем в массиве.
 * @return Индекс искомого элемента.
 */
int BinarySearch(DynamicArray* array, int element);

/**
 * Увеличение или понижение вместимости массива.
 * @param array Стандартный массив.
 */
void ResizeDynamicArray(DynamicArray* array);

/**
 * Поиск элемента в динамическом массиве.
 * @param array Стандартный массив.
 * @param element Искомый элемент.
 * @return Индекс искомого элемента.
 */
int FindElement(DynamicArray* array, int element);

int* ReFillingArray(DynamicArray* array);