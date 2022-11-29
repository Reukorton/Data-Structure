#include "iostream"
#include "DynamicArray.h"
#include "Service.h"
#include "Windows.h"
#include "string"

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    DynamicArray* array = new DynamicArray;
    CreateDynamicArray(array);

    Menu();

    while(true)
    {
        int number = InputElement("Введите номер действия: ");

        switch(number)
        {
            case 0:
                DeleteArray(array);
                return 0;
            case 1:
                Menu();
                break;
            case 2:
            {
                int element = InputElement("Добавить в массив элемент:");
                AddElement(array, element);
                break;
            }
            case 3:
            {
                int element = InputElement("Удаляемый элемент из массива:");
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
                int element = InputElement("Элемент для вставки в начало массива:");
                AddElementInStarting(array, element);
                break;
            }
            case 5:
            {
                int element = InputElement("Элемент для вставки в массив:");
                int certainElement = InputElement("Вставка элемента после:");
                int index = FindElement(array, certainElement);

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
                int element = InputElement("Элемент для поиска:");
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
                int element = InputElement("Элемент для поиска:");
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