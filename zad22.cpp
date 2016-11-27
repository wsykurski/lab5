//
// Created by wojtek on 26.11.16.
//

#include "zad22.h"
using namespace std;

template <typename TYP>
bool mniejsze(TYP a, TYP b)
{
    return a < b;
}

template <typename TYP>
bool wieksze(TYP a, TYP b)
{
    return a > b;
}

template <typename TYP>
void min_max(TYP * arr, int size, bool (*fun)(TYP, TYP)) {
    TYP *_end = arr + size;
    TYP *temp = arr;
    while (arr < _end)
    {
        if (fun((TYP)*arr, (TYP)*temp))
            temp = arr;
        arr++;
    }
    cout << "Szukana wartość to: " << (TYP)*temp << endl;
}

void zad22() {
    int tab[] = {1, 2, 3, 4, -1, -6, 10};
    double tab_d[] = {0.1, 8.2, -3, 2.24, -1, -6.3, 9.1};

    cout << "\nZadanie 22:" << endl;
    bool (*p_i)(int, int) ;
    cout << "Sprawdzanie dla tablicy int:" << endl;
    cout << "Najmniejsza wartosc:" << endl;
    p_i = mniejsze;
    min_max(tab, 7, p_i);

    cout << "Najwieksza wartosc:" << endl;
    p_i = wieksze;
    min_max(tab, 7, p_i);

    cout << "Sprawdzanie dla tablicy double:" << endl;
    cout << "Najmniejsza wartosc:" << endl;
    bool (*p_d)(double, double) ;
    p_d = mniejsze;
    min_max(tab_d, 7, p_d);

    cout << "Najwieksza wartosc:" << endl;
    p_d = wieksze;
    min_max(tab_d, 7, p_d);
}
