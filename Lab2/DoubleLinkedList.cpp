#include "DoubleLinkedList.h"
#include "iostream"

void InitList(List *list)
{
    list->Head = nullptr;
    list->Tail = nullptr;
    list->Length = 0;
}

void Add(List* list, int value)
{
    Node* item = new Node();
    item->Value = value;
    item->Next = nullptr;
    item->Prev = list->Tail;

    if (list->Tail != nullptr)
    {
        list->Tail->Next = item;
    }

    if (list->Head == nullptr)
    {
        list->Head = item;
    }

    list->Length++;
    list->Tail = item;
}

void Remove(List* list, int index)
{
    if (index < 0 || index >= list->Length)
    {
        return;
    }

    Node* item = list->Head;
    for (int i = 0; i < index; i++)
    {
        item = item->Next;
    }

    if (item == list->Head)
    {
        list->Head = item->Next;
    }
    else
    {
        item->Prev->Next = item->Next;
    }

    if (item == list->Tail)
    {
        list->Tail = item->Prev;
    }
    else
    {
        item->Next->Prev = item->Prev;
    }

    list->Length--;
    delete item;
}

void InsertInBegin(List* list, int value)
{
    Node* item = new Node();

    item->Value = value;
    item->Prev = nullptr;
    item->Next = list->Head;

    if (list->Head != nullptr)
    {
        list->Head->Prev = item;
    }

    if (list->Tail == nullptr)
    {
        list->Tail = item;
    }

    list->Length++;
    list->Head = item;
}

void InsertInEnd(List* list, int value)
{
    Node* item = new Node();

    item->Value = value;
    item->Next = nullptr;
    item->Prev = list->Tail;

    if (list->Head == nullptr)
    {
        list->Head = item;
        list->Tail = item;
    }
    else
    {
        item->Prev = list->Tail;
        list->Tail->Next = item;
        list->Tail = item;
    }

    list->Length++;
}

void InsertAfter(List* list, int index, int value)
{
    if (index < 0 || index >= list->Length)
    {
        return;
    }

    Node* item = list->Head;
    for(int i = 0; i < index; ++i)
    {
        item = item->Next;
    }

    Node* newItem = new Node();
    newItem->Value = value;
    newItem->Next = item->Next;
    newItem->Prev = item;

    if (item->Next != nullptr)
    {
        item->Next->Prev = newItem;
    }
    else
    {
        list->Tail = newItem;
    }

    item->Next = newItem;
    list->Length++;
}

void InsertBefore(List* list, int index, int value)
{
    if (index < 0 || index >= list->Length)
    {
        return;
    }

    Node* item = list->Head;
    for(int i = 0; i < index; ++i)
    {
        item = item->Next;
    }

    Node* newItem = new Node();
    newItem->Value = value;
    newItem->Next = item;
    newItem->Prev = item->Prev;

    if (item->Prev != nullptr)
    {
        item->Prev->Next = newItem;
    }
    else
    {
        list->Head = newItem;
    }

    item->Prev = newItem;
    list->Length++;
}

void SortList(List* list)
{
    Node* item = list->Head;

    for(int i = 0; i < list->Length; ++i)
    {
        for(int j = 0; j < list->Length-1; ++j)
        {
            if (item->Value > item->Next->Value)
            {
                std::swap(item->Value, item->Next->Value);
            }

            item = item->Next;
        }

        item = list->Head;
    }
}

int LineSearch(List* list, int value)
{
    Node* item = list->Head;

    for(int i = 0; i < list->Length; ++i)
    {
        if (item->Value == value)
        {
            return i;
        }

        item = item->Next;
    }

    return -1;
}