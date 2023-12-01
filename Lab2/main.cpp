#include <iostream>
#include "Actions.h"
#include "DoubleLinkedList.h"

using namespace std;

void PrintList(List *list)
{
    Node* item = list->Head;
    cout << "[ ";
    while (item != nullptr)
    {
        cout << item->Value << " ";
        item = item->Next;
    }
    cout << "]" << endl;
}

int main()
{
    List* list = new List();

    int number;

    while (true)
    {
        cout << "Enter: ";
        cin >> number;

        switch (number)
        {
            case 0:
               delete list;
               return -1;
            case 1:
                AddElement(list);
                break;
            case 2:
                RemoveElement(list);
                break;
            case 3:
                InsertElementInBegin(list);
                break;
            case 4:
                InsertElementInEnd(list);
                break;
            case 5:
                InsertElementAfter(list);
                break;
            case 6:
                InsertElementBefore(list);
                break;
            case 7:
                SortList(list);
                PrintList(list);
                break;
            case 8:
                LineSearchElement(list);
                break;
        }
    }
}