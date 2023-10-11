//
//  main.cpp
//  Перегрузка
//
//  Created by Michalis on 11.10.2023.
//
#include "Дата.hpp"
#include <iostream>
using namespace std;
int main()
{
    Date date; //год может быть отрицательным
        
        date.Input();
        date.Print();

        ++date;
        date.Print();

        --date;
        date.Print();

        date++;
        date.Print();

        date--;
        date.Print();

        date+10;
        date.Print();

        date-10;
        date.Print();

        date + 100;
        date.Print();

        date - 100;
        date.Print();

        date + 10000;
        date.Print();

        date - 10000;
        date.Print();

        Date dateRez = date - date;
        dateRez.Print();
    
    Date dateRez2 = date + date;
    dateRez2.Print();

        date += 10000;
        date.Print();

        date -= 10000; 
        date.Print();
    
    if (date < date)
            cout << "True" << endl;
        else
            cout << "False" << endl;

        if (date > date)
            cout << "True" << endl;
        else
            cout << "False" << endl;

        if (date <= date)
            cout << "True" << endl;
        else
            cout << "False" << endl;

        if (date >= date)
            cout << "True" << endl;
        else
            cout << "False" << endl;

        if (date == date)
            cout << "True" << endl;
        else
            cout << "False" << endl;

        if (date != date)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    return 0;
}
