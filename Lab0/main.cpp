#include <iostream>
#include "Tasks.h"
#include "Service.h"
using namespace std;

int main()
{

    StartMessageProgram();

    while (true)
    {
        int taskNumber;
        cout << "Task selection:";
        cin >> taskNumber;

        switch (taskNumber)
        {
            case 0:
                return 0;
            case 1:
                Task1111();
                break;
            case 2:
                Task1112();
                break;
            case 3:
                Task1121();
                break;
            case 4:
                Task1122();
                break;
            case 5:
                Task1123();
                break;
            case 6:
                //1132 and 1133
                Task1132();
                break;
            case 7:
                Task1134();
                break;
            case 8:
                Task1141();
                break;
            case 9:
                Task1142();
                break;
            case 10:
                Task1143();
                break;
            case 11:
                Task1144();
                break;
            case 12:
                Task1145();
                break;
            case 13:
                Task1146();
                break;
            case 14:
                Task1148();
                break;
            case 15:
                Task1151();
                break;
            case 16:
                Task1152();
                break;
            case 17:
                Task1153();
                break;
            case 18:
                Task1154();
                break;
            case 19:
                Task1155();
                break;
            case 20:
                Task1156();
                break;
            case 21:
                for (int i = 0; i < 3; ++i)
                {
                    Task1157();
                }
                break;
            case 22:
                Task1158();
                break;
            default:
                cout << "I do not know this." << endl;
                break;
        }
    }

    return 0;
}
