#include <iostream>
#include "Service.h"
#include "DynamicArray.h"
#include "string"
using namespace std;

int InputElement(string str)
{
    int element;
    while (true)
    {
        cout << str;
        cin >> element;

        if (!cin.fail()) return element;

        cin.clear();
        cin.ignore(32767, '\n');
    }
}

void PrintArray(DynamicArray* array)
{
    for (int i = 0; i < array->Size; ++i)
    {
        cout << array->Array[i] << " ";
    }
    cout << endl << endl;
}

void Menu()
{
    cout << "0. Завершить программу.\n1. Вывести меню.\n"
            "2. Добавить значение в массив.\n3. Удалить значение из массива.\n"
            "4. Вставить элемент в начало массива.\n5. Вставить элемент после определенного.\n"
            "6. Сортировать массив.\n7. Линейный поиск элемента.\n"
            "8. Бинарный поиск элемента.\n9. Вывести массив\n" << endl;
    cout << endl;
}
