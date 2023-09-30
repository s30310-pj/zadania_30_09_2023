
#include <iostream>

using namespace std;

int liczba;

int main() {

    cout << "Podaj liczbę: ";
    cin >> liczba;
    if ( liczba > 0 )
    {
        cout << "liczba jest dodatnia" << endl;
    }
    else if ( liczba < 0 )
    {
        cout << "liczba jest ujemna" << endl;
    }
    else if ( liczba==0 )
    {
        cout << "liczba jest zerem" << endl;
    }
    
    return 0;

}