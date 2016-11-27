//
// Created by wojtek on 26.11.16.
//
#include "zad21.h"

void readinput() {
    {
        char temp;
        temp = cin.get();
        if (temp != '.')
            readinput();
        cout << temp;
    }
}

void zad21() {
    cout << "\nZadanie 21 " <<endl;
    cout << "Zacznij wpiswac: " <<endl;
    readinput();

}
