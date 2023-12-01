#pragma once

struct Node
{
    Node* Next = nullptr;
    Node* Prev = nullptr;
    int Value = 0;
};

struct List
{
    Node* Head = nullptr;
    Node* Tail = nullptr;
    int Length = 0;
};

void InitList(List *list);

void Add(List* list, int value);

void PrintList(List *list);

void Remove(List* list, int index);

void InsertInBegin(List* list, int value);

void InsertInEnd(List* list, int value);

void InsertAfter(List* list, int index, int value);

void InsertBefore(List* list, int index, int value);

void SortList(List* list);

int LineSearch(List* list, int value);