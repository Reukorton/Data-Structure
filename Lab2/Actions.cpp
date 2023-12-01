#include "Actions.h"
#include "DoubleLinkedList.h"
#include "iostream"

using namespace std;

void AddElement(List* list)
{
    cout << "Enter value: ";

    int value;
    cin >> value;

    Add(list, value);
    PrintList(list);
}

void RemoveElement(List* list)
{
    cout << "Enter index: ";

    int index;
    cin >> index;

    if (index < 0 || index >= list->Length)
    {
        cout << "Error!" << endl;
        return;
    }

    Remove(list, index);
    PrintList(list);
}

void InsertElementInBegin(List* list)
{
    cout << "Enter value: ";
    int value;
    cin >> value;
    InsertInBegin(list, value);
    PrintList(list);
}

void InsertElementInEnd(List* list)
{
    cout << "Enter value: ";
    int value;
    cin >> value;
    InsertInEnd(list, value);
    PrintList(list);
}

void InsertElementAfter(List* list)
{
    cout << "Enter index: ";
    int index;
    cin >> index;
    cout << "Enter value: ";
    int value;
    cin >> value;
    InsertAfter(list, index, value);
    PrintList(list);
}

void InsertElementBefore(List* list)
{
    cout << "Enter index: ";
    int index;
    cin >> index;
    cout << "Enter value: ";
    int value;
    cin >> value;
    InsertBefore(list, index, value);
    PrintList(list);
}

void LineSearchElement(List* list)
{
    cout << "Enter value: ";
    int value;
    cin >> value;
    cout << "Index element: " << LineSearch(list, value) << endl;
}