#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N; // numero mes

    switch (N)
    {
    case 3:
    case 4:
    case 5:
        cout << "PRIMAVERA" << endl;
        break;
    case 6:
    case 7:
    case 8:
        cout << "VERANO" << endl;
        break;
    case 9:
    case 10:
    case 11:
        cout << "OTONIO" << endl;
        break;

    case 12:
    case 1:
    case 2:
        cout << "INVIERNO" << endl;
        break;

    default:
        cout << "ERROR" << endl;
    }

    return 0;
}