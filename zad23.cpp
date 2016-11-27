//
// Created by wojtek on 27.11.16.
//
#include "zad23.h"

template <typename TYP>
int binarySearch(TYP *arr, TYP value, int begin, int end) {
    int mid = 0;
    while (begin <= end) {
        mid = (begin + end)/2;
        if (arr[mid] == value)
            return mid;
        else
            if (arr[mid] < value)
                begin = mid + 1;
            else
                end = mid - 1;
    }
    return -1;
}

void zad23() {
    int test_int[] = { 1, 10, -1, 3, 5, 8, 9 };
    double test_double[] = { 1, 10, -1.3, 3, 5.1, 8.2, 9 };

    cout << "\nZadanie 23:" << endl;
    cout << "Szukam liczby 3 w tablicy int:" << endl;
    cout << "Pozycja to: " << binarySearch(test_int, 3, 0, 6) << endl;
    cout << "Szukam liczby 11 w tablicy int:" << endl;
    cout << "Pozycja to: " << binarySearch(test_int, 11, 0, 6) << endl;

    cout << "Szukam liczby 5.1 w tablicy double:" << endl;
    cout << "Pozycja to: " << binarySearch(test_double, 5.1, 0, 6) << endl;
    cout << "Szukam liczby 2.25 w tablicy double:" << endl;
    cout << "Pozycja to: " << binarySearch(test_double, 2.25, 0, 6) << endl;
}
