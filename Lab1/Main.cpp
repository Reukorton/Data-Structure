#include "iostream"
#include "DynamicArray.h"
#include "Service.h"
#include "Windows.h"

using namespace std;
void PrintText();

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    DynamicArray* array = new DynamicArray;
    CreateDynamicArray(array);

    while(true)
    {
        int number;
        cout << "Введите номер действия: ";
        cin >> number;

        switch(number)
        {
            case 0:
                DeleteArray(array);
                return 0;
            case 1:
                PrintText();
                break;
            case 2:
            {
                cout << "Добавить в массив элемент:";
                int element = InputElement();
                cout << endl;
                AddElement(array, element);
                break;
            }
            case 3:
            {
                cout << "Удаляемый элемент из массива:";
                int element = InputElement();
                cout << endl;
                int index = FindElement(array, element);

                if (index != -1)
                {
                    RemoveElement(array, index);
                }
                else
                {
                    cout << "Такого элемента нет в массиве";
                }

                break;
            }
            case 4:
            {
                cout << "Элемент для вставки в начало массива:";
                int element = InputElement();
                cout << endl;
                AddElementInStarting(array, element);
                break;
            }
            case 5:
            {
                cout << "Элемент для вставки в массив:";
                int element = InputElement();
                cout << "Вставка элемента после:";
                int certainElement = InputElement();
                int index = FindIndexCertainElement(array, certainElement);

                if (index != -1)
                {
                    cout << endl;
                    AddAfterCertainElement(array, element, index);
                }
                else
                {
                    cout << "В массиве нет элемента после которого необходимо выполнить вставку." << endl << endl;
                }

                break;
            }
            case 6:
            {
                SortingArray(array);
                cout << endl;
                break;
            }
            case 7:
            {
                cout << "Элемент для поиска:";
                int element = InputElement();
                cout << endl;
                int index = LinearSearch(array, element);

                if (index != -1)
                {
                    cout << "Первое вхождение элемента по индексу:" << index << endl << endl;
                }
                else
                {
                    cout << "Такого элемента в массиве нет" << endl << endl;
                }

                break;
            }
            case 8:
            {
                cout << "Элемент для поиска:";
                int element = InputElement();
                int index = BinarySearch(array, element);

                if (index != -1)
                {
                    cout << "Первое вхождение элемента по индексу:" << index << endl << endl;
                }
                else
                {
                    cout << "Такого элемента в массиве нет" << endl;
                }

                cout << endl;
                break;
            }
            case 9:
                PrintArray(array);
                break;
        }
    }
}

void PrintText()
{
    cout << "0. Завершить программу.\n1. Очистить консоль.\n"
            "2. Добавить значение в массив.\n3. Удалить значение из массива.\n"
            "4. Вставить элемент по индексу в массив.\n5. Сортировать массив.\n"
            "6. Линейный поиск элемента.\n7.Бинарный поиск элемента.\n"
            "8. Пересоздать массив.\n9. Вывести массив\n" << endl;
    cout << endl;
}