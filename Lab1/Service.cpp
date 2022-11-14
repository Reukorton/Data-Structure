#include <iostream>
#include "Service.h"
#include "DynamicArray.h"
using namespace std;

int InputElement()
{
    int element;

    cout << "Добавить в массив элемент: ";
    cin >> element;
    cout << endl;

    return element;
}

int InputCertainElement()
{
    int certainElement;

    cout << "После какого элемента добавить:";
    cin >> certainElement;
    cout << endl;

    return  certainElement;
}


int InputElementInStarting()
{
    int element;

    cout << "Добавить в начало массива элемент: ";
    cin >> element;
    cout << endl;

    return element;
}

void PrintArray(DynamicArray* array)
{
    for (int i = 0; i < array->Size; ++i)
    {
        cout << array->Array[i] << " ";
    }
    cout << endl;
}

int FindElement(DynamicArray* array)
{
    int element;

    cout << "Какой елемент массива, который нужно удалить: ";
    cin >> element;

    for (int i = 0; i < array->Size; ++i)
    {
        if (array->Array[i] == element)
        {
            return i;
        }
    }

    return -1;
}

int FindCertainElement(DynamicArray* array)
{
    int element;

    cout << "После какого элемента нужно добавить: ";
    cin >> element;

    for (int i = 0; i < array->Size; ++i)
    {
        if (array->Array[i] == element)
        {
            return i;
        }
    }

    return -1;
}