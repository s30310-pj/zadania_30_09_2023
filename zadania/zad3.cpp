
#include <iostream>

using namespace std;

int liczba;

int main() {

    cout << "Podaj liczbę: ";
    cin >> liczba;

    if ( liczba != 0 && liczba%2 == 0 )
    {
        cout << "liczba jest parzysta" << endl;
    }
    else if ( liczba%2 == 1 )
    {
        cout << "liczba jest nieparzysta" << endl;
    }
    else if ( liczba == 0 )
    {
        cout << "liczba jest zerem" << endl;
    }
    
    return 0;

}