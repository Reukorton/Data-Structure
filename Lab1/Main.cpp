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
                AddElement(array);
                break;
            case 3:
                RemoveElement(array);
                break;
            case 4:
                AddElementInStarting(array);
                break;
            case 5:
                AddAfterCertainElement(array);
                break;
            case 6:
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