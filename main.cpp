#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

string imie, nazwisko;
int nr_tel;

int main()
{
    fstream plik;
    plik.open("wizytowka.txt",ios::in);

    if(plik.good()==false)
    {
        cout<<"Plik nie istnieje!";
        exit(0);
    }


    plik<<imie<<endl;
    plik<<nazwisko<<endl;
    plik<<nr_tel<<endl;

    plik.close();

    return 0;
}
