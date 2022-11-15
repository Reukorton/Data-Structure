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

void Menu()
{
    cout << "0. Завершить программу.\n1. Вывести меню.\n"
            "2. Добавить значение в массив.\n3. Удалить значение из массива.\n"
            "4. Вставить элемент в начало массива.\n5. Вставить элемент после определенного.\n"
            "6. Сортировать массив.\n7.Линейный поиск элемента.\n"
            "8. Бинарный поиск элемента.\n9. Вывести массив\n" << endl;
    cout << endl;
}
