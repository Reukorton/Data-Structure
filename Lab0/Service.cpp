#include <iostream>
#include "cmath"
#include <cstdlib>
using namespace std;

void StartMessageProgram()
{
    cout << "Select a task:\n1 - 1.1.1.1\t2 - 1.1.1.2\n3 - 1.1.2.1\t4 - 1.1.2.2\n"
            "5 - 1.1.2.3\t6 - 1.1.3.2\n7 - 1.1.3.4\t8 - 1.1.4.1\n9 - 1.1.4.2\t"
            "10 - 1.1.4.3\n11 - 1.1.4.4\t12 - 1.1.4.5\n13 - 1.1.4.6\t14 - 1.1.4.8\n"
            "15 - 1.1.5.1\t16 - 1.1.5.2\n17 - 1.1.5.3\t18 - 1.1.5.4\n19 - 1.1.5.5\t"
            "20 - 1.1.5.6\n21 - 1.1.5.7\t22 - 1.1.5.8\n0 - exit" << endl;
}

void ArraySorting(int* array, int arrayCount)
{
    for (int i = 0; i < arrayCount; ++i)
    {
        for (int j = 0; j < i + 1; ++j)
        {
            if (array[j] > array[i])
            {
                swap(array[i], array[j]);
            }
        }
    }
}

void ArraySorting(double* array, int arrayCount)
{
    for (int i = 0; i < arrayCount; ++i)
    {
        for (int j = 0; j < i + 1; ++j)
        {
            if (array[j] > array[i])
            {
                swap(array[i], array[j]);
            }
        }
    }
}

double GetPower(double  base, int exponent)
{
    return pow(base, exponent);
}

void RoundToTens(int& value)
{
    int *x = &value;
    if (*x % 10 < 5)
    {
        *x = *x / 10 * 10;
    }
    else
    {
        *x = (*x / 10 + 1) * 10;
    }
}

void Foo(double a)
{
    cout << "Address of a in Foo(): " << &a << endl;
    cout << "Value of a in Foo(): " << a << endl;
    a = 15.0;
    cout << "New value of a in Foo(): " << a << endl;
}

void Foo2(double& a)
{
    cout << "Address of a in Foo(): " << &a << endl;
    cout << "Value of a in Foo(): " << a << endl;
    a = 15.0;
    cout << "New value of a in Foo(): " << a << endl;
}

void Foo3(double* a)
{
    cout << "Address in pointer: " << a << endl;
    cout << "Address of pointer: " << &a << endl;
    cout << "Value in pointer address: " << *a << endl;
    *a = 15.0;
    cout << "New value in pointer address: " << *a << endl;
}

int FindIndex(int* array, int findNum, int sizeArray)
{
    int index = 0;

    for (int i = 0; i < sizeArray; ++i)
    {
        if (findNum == array[i])
            break;

        index++;
    }

    return index;
}

int* MakeRandomArray(int arraySize)
{
    auto array = new int[arraySize];

    srand(time(NULL));
    for (int i = 0; i < arraySize; ++i)
    {
        array[i] = rand() % 101;
    }

    int *p = array;
    return p;
}

int* ReadArray(int count)
{
    int* values = new int[count];
    for (int i = 0; i < count; i++)
    {
        cin >> values[i];
    }
    return values;
}

int CountPositiveValues(int* values, int count)
{
    int result = 0;
    for (int i = 0; i < count; i++)
    {
        if (values[i] > 0)
        {
            result++;
        }
    }
    return result;
}