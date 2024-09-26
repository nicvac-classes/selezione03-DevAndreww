#include <iostream>
using namespace std;

int main()
{
    int num1, num2, max;

    cout << "Inserisci 2 numeri e io ti dirò il maggiore." << endl;
    cin >> num1;
    cin >> num2;

    if(num1>num2)
    {
        max = num1;
    }
    else
    {
        max = num2;
    }

    cout << "Il numero maggiore è " << max << "." << endl;

}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
