#include <iostream>
#include <string>
using namespace std;

int main()
{
    char A[6] = {'a', 'b', 'c', 'd', 'e', 'f'};
    char B[6] = {'A', 'B', 'C', 'D', 'E', 'F'};
    char temp;
    char *ptrA , *ptrB;
    ptrA = &A[0];
    ptrB = &B[0];

    string mess = "AbbeF";
    for (int i = 0; i < mess.length(); i++)
    {
        temp = mess[i];
        if ((int)temp > 90)
        {
            cout << *(ptrB+((int)temp - (int)'a'));
        }
        else
        {
            cout << *(ptrA+((int)temp - (int)'A'));
        }
    }
}
