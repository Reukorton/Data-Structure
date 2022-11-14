#include <iostream>
#include "Service.h"

using namespace std;

void Task1111()
{
    double add = 1.0;
    double sum = 0.0;
    for (int i = 0; i < 10; i++)
    {
        sum += add * i;
        cout << sum << " ";
        add *= 1.1;
    }
    cout << "\nTotal sum is " << sum << endl;
}

void Task1112()
{
    double add = 1.0;
    double sum = 0.0;

    for (int i = 0; i < 1000; i++)
    {
        // 3.2624579394327844
        sum += add * i;
        if (i % 3 == 0)
        {
            add *= 1.1;
        }
        else
        {
            add /= 3.0;
        }
    }
    cout << "Total sum is " << sum << "\n" << endl;
}

void Task1121()
{
    const int countArray = 10;
    int numbers[countArray] = { 3, 6, 45, -1, 99, 0, 12, 54, 165, 1777 };

    string stringNumbers;
    cout << "Source array is:\n";
    for (int num:numbers)
    {
        cout << num << " ";
    }

    cout << "" << endl;
    cout << "Sorted array is:" << endl;
    ArraySorting(numbers, countArray);

    for (int num:numbers)
    {
        cout << num << " ";
    }
    cout << "\n";
}

void Task1122()
{
    const int countArray = 12;
    double searchingValue;
    int countResult = 0;
    double numbers[countArray] = { 12.0, 21.5, 119.2, -80.7, 300.0, 75.5,
                                   81.2, 8.1,47.3, 31.2, 85.3, 100.1};

    cout << "Source array is:" << endl;
    for (double num:numbers)
    {
        cout << num << " ";
    }
    cout << endl;

    cout << "Enter searching value:";
    cin >> searchingValue;
    for (double num:numbers)
    {
        if (num > searchingValue)
        {
            countResult++;
        }
    }
    cout << "Elements of array more than " << searchingValue << " is: " << countResult << endl;
}

void Task1123()
{
    const int countArray = 8;
    char array[countArray];

    cout << "Enter array of 8 chars:" << endl;
    for (int i = 0; i < countArray; ++i)
    {
        cout << "a[" << i << "]: ";
        cin >> array[i];
    }

    cout << "Your array is:" << endl;
    for (char element:array)
    {
        cout << element << " ";
    }
    cout << endl;

    cout << "All letters in your array:" << endl;
    for (char i : array)
    {
        if (i >= 'a' && i <= 'z')
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

void Task1132()
{
    cout << "2.0 ^ 5 = " << GetPower(2.0, 5) << endl;
    cout << "3.0 ^ 4 = " << GetPower(3.0, 4) << endl;
    cout << "-2.0 ^ 5 = " << GetPower(-2.0, 5) << endl;
}

void Task1134()
{
    int value1 = 14;
    RoundToTens(value1);
    cout << "For 14 rounded value is " << value1 << endl;

    int value2 = 191;
    RoundToTens(value2);
    cout << "For 191 rounded value is " << value2 << endl;

    int value3 = 27;
    RoundToTens(value3);
    cout << "For 27 rounded value is " << value3 << endl;
}

void Task1141()
{
    int a = 5;
    int b = 4;
    cout << "Address of a: " << &a << endl;
    cout << "Address of b: " << &b << endl;
    double c = 13.5;
    cout << "Address of c: " << &c << endl;
    bool d = true;
    cout << "Address of d: " << &d << endl;
}

void Task1142()
{
    int a[10] = {1, 2, 7, -1, 5,
                 3, -1, 7, 1, 6};

    cout << "Size of int type: "<< sizeof(int) << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Address of a["<< i << "]: " << &a[i] << endl;
    }
    cout << endl;
    cout << "Size of double type: " << sizeof(double) << endl;

    double b[10] = { 1.0, 2.0, 7.0, -1.0, 5.0,
                     3.5, -1.8, 7.2, 1.9, 6.2};

    for (int i = 0; i < 10; i++)
    {
        cout << "Address of b[" << i << "]: " << &b[i] << endl;
    }
}

void Task1143()
{
    int a = 5;
    int& b = a;
    cout << "Address of a: " << &a << endl;
    cout << "Address of b: " << &b << endl;
    cout << endl;
    b = 7;
    cout << "Value of a: " << a << endl;
}

void Task1144()
{
    double a = 5.0;
    cout << "Address of a in main(): " << &a << endl;
    cout << "Value of a in main(): " << a << endl;
    cout << endl;
    Foo(a);
    cout << endl;
    cout << "Value of a in main(): " << a << endl;
}

void Task1145()
{
    double a = 5.0;
    cout << "Address of a in main(): " << &a << endl;
    cout << "Value of a in main(): " << a << endl;
    cout << endl;
    Foo2(a);
    cout << endl;
    cout << "Value of a in main(): " << a << endl;
}

void Task1146()
{
    int a = 5;
    int* pointer = &a;
    cout << "Address of a: " << &a << endl;
    cout << "Address in pointer: " << pointer << endl;
    cout << "Address of pointer: " << &pointer << endl;
    cout << endl;
    *pointer = 7;
    cout << "Value in a: " << a << endl;
    cout << "Value by pointer address: " << *pointer << endl;
}

void Task1148()
{
    double value = 5.0;
    double* pointer = &value;
    cout << "Address of value in main(): " << &value << endl;
    cout << "Address in pointer in main(): " << pointer << endl;
    cout << "Address of pointer in main(): " << &pointer << endl;
    cout << "Value of a in main(): " << value << endl;
    cout << endl;
    Foo3(pointer);
    cout << endl;
    cout << "Value of a in main(): " << value << endl;
}

void Task1151()
{
    const int sizeArray = 8;
    auto array = new double[sizeArray]{1.0, 15.0, -8.2, -3.5,
                                       12.6, 38.4, -0.5, 4.5};

    cout << "Array of double:" << endl;
    for (int i = 0; i < sizeArray; ++i)
    {
        cout << array[i] << " ";
    }
    delete[] array;
    cout << endl;
}

void Task1152()
{
    const int sizeArray = 8;
    auto array = new bool[sizeArray]{true, true, false, false,
                                     false, true, false, true};

    cout << "Array of bool:" << endl;
    for (int i = 0; i < sizeArray; ++i)
    {
        cout << array[i] << " ";
    }
    delete[] array;
    cout << endl;
}

void Task1153()
{
    int sizeArray;

    cout << "Enter char array size:";
    cin >> sizeArray;
    auto array = new char[sizeArray];

    for (int i = 0; i < sizeArray; ++i)
    {
        cout << "Enter a[" << i << "]:";
        cin >> array[i];
    }

    cout << "Your char array is:" << endl;
    for (int i = 0; i < sizeArray; ++i)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    delete[] array;
}

void Task1154()
{
    const int sizeArray = 10;
    auto array = new double[sizeArray] {1.0, 15.0, -8.2, -3.5, 12.6,
                                        38.4, -0.5, 4.5, 16.7, 4.5};

    cout << "Array of double:" << endl;
    for (int i = 0; i < sizeArray; ++i)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    ArraySorting(array, sizeArray);

    cout << "Sorted array of double:" << endl;
    for (int i = 0; i < sizeArray; ++i)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    delete[] array;
}

void Task1155()
{
    const int sizeArray = 10;
    int searchingValue;
    auto array = new int[sizeArray]{1, 15, -8, -3, 12,
                                    38, 0, 4, 16, 4};

    cout << "Int array:" << endl;
    for (int i = 0; i < sizeArray; ++i)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    cout << "Enter searching value: ";
    cin >> searchingValue;
    cout << endl;

    cout << "Index of searching value " << searchingValue << " is: " << FindIndex(array, searchingValue, sizeArray);
    cout << endl << endl;

    delete[] array;
}

void Task1156()
{
    const int sizeArray = 15;
    auto array = new char[sizeArray] {'a', '5', 'm', 'i', '%',
                                      '!', 's', 'p', '*', '9',
                                      'f', '^', ';', 'q', 'k'};

    cout << "Char array is:" << endl;
    for (int i = 0; i < sizeArray; ++i)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < sizeArray; ++i)
    {
        if (array[i] >= 'a' && array[i] <= 'z')
        {
            cout << array[i] << " ";
        }
    }
    cout << endl << endl;

    delete[] array;
}

void Task1157()
{
    int arraySize;

    cin >> arraySize;
    int* array = MakeRandomArray(arraySize);

    for (int i = 0; i < arraySize; ++i)
    {
        cout << array[i] << " " ;
    }

    delete[] array;
    cout << endl << endl;
}

void Task1158()
{
    int count = 15;
    int* values = ReadArray(count);
    cout << "Count is: " << CountPositiveValues(values, count) << endl;
    delete[] values;

    count = 20;
    values = ReadArray(count);
    cout << "Count is: " << CountPositiveValues(values, count) << endl;

    delete[] values;
    cout << endl;
}