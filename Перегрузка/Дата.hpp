//
//  Дата.hpp
//  Перегрузка
//
//  Created by Michalis on 11.10.2023.
//

#pragma once

#include <iostream>
using namespace std;
class Date
{
    int day;
    int month;
    int year;
public:
    Date()=default;
    Date(int d, int m, int y);
    ~Date();
   void Input();
    void Print();
    bool operator>(Date& b);
    bool operator<(Date& b);
    bool operator<=(Date& b);
    bool operator>=(Date& b);
    bool operator==(Date& b);
    bool operator!=(Date& b);
    Date& operator+=(int a);
    Date& operator-=(int a);
    Date& operator++();
    Date& operator++(int a);
    Date& operator--(int a);
    Date& operator--();
    Date operator+(Date b);
    Date operator-(Date b);
    Date operator+(int d);
    Date operator-(int d);
    
    void SetDay(int);
    void SetMonth(int);
    void SetYear(int);


    int GetDay() const;
    int GetMonth() const;
    int GetYear() const;
};

