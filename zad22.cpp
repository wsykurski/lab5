//
// Created by wojtek on 26.11.16.
//

#include "zad22.h"

bool mniejsze(int a, int b)
{
    return a < b;
}

bool wieksze(int a, int b)
{
    return a > b;
}

template <class TYP>
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
    double tab_d[] = {1, 2, 3, 4, -1, -6, 10};

    cout << "Zadanie 22:" << endl;
    bool (*p)(int, int) ;
    cout << "Najmniejsza wartosc:" << endl;
    p = mniejsze;
    min_max(tab, 7, p);

    cout << "Najwieksza wartosc:" << endl;
    p = wieksze;
    min_max(tab, 7, p);
}
