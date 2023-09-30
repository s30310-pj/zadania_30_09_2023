
#include <iostream>

using namespace std;
int liczba1, liczba2, liczba3;
int main() {

    cout << "Podaj 1 liczbe: ";
    cin >> liczba1;
    cout << "Podaj 2 liczbe: ";
    cin >> liczba2;
    cout << "Podaj 3 liczbe: ";
    cin >> liczba3;

    if ( liczba1 > liczba2 && liczba1 > liczba3 )
    {
        cout << "Najwieksza liczba to " << liczba1 << endl;
    }
    else if ( liczba2 > liczba1 && liczba2 > liczba3 )
    {
        cout << "Najwieksza liczba to " << liczba2 << endl;
    }
    else if ( liczba3 > liczba1 && liczba3 > liczba2 )
    {
        cout << "Najwieksza liczba to " << liczba3 << endl;
    }

    return 0;

}