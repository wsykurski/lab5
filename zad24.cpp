#include "zad24.h"
#include <functional>

int getSize(const char *str)
{
    int result = 0;
    do result++; while(*str++);
    return result;
}

void modyfikuj(char* (**pointer)(char *, int ), int count, char *string, int position) {
    char *temp;
    while (count-- > 0)
    {
        cout << "\nWywoluje funckje przez wskaźnik" << endl;
        // temp = (pointer[i++])(string, position);
        temp = (*pointer++)(string, position);
        cout << "Wynik:\n" << temp << endl;
    }
}


char* male(char *str, int n)
{
    int diff = (int)'a' - (int)'A';
    char *result = new char[getSize(str)];
    char *temp = result;
    while(*str){
        if((int)*str <= (int)'Z' && (int)*str >= (int)'A' && n-- !=0)
            *temp = *str + diff;
        else
            *temp = *str;
        temp++;
        str++;
    }
    return result;
}

char* odwroc(char *str, int n)
{
    char* end = str + getSize(str) -1;
    char *result = new char[getSize(str)];
    char *temp = result;
    while( end-- >= str)
    {
        if (temp - result == n){
            *temp++ = ' ';
        }
        if (end != str + n) {
            *temp++ = *end;
        }
    }
    *(result + n) = *(str + n);
    return result;
}


char* fun1(char *sring1, int i)
{
    cout << "fun1" << endl;
    return nullptr;
}

char* fun2(char *string1, int i)
{
    cout << "fun2";
    return nullptr;
}

void zad24() {
    cout << "\nZadanie 24:";
    char* (* arr [])(char*, int) =
        {
             odwroc,
             male,
             [] (char* str, int n) -> char*
             {
                 int diff = (int)'A' - (int)'a';
                 char *result = new char[getSize(str)];
                 char *temp = result;
                 while(*str){
                     if((int)*str <= (int)'z' && (int)*str >= (int)'a' && n-- !=0)
                         *temp = *str + diff;
                     else
                         *temp = *str;
                     temp++;
                     str++;
                 }
                 return result;
             }
        };
    modyfikuj(arr, 3, "testowy napis", 2);
    modyfikuj(arr, 3, "TESTOWY NAPIS", 2);
}
