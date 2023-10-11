//
//  Дата.cpp
//  Перегрузка
//
//  Created by Michalis on 11.10.2023.
//

#include "Дата.hpp"
#include <iostream>
using namespace std;


Date::Date(int d, int m, int y)
{
    int temp1=d;
    int temp2=m;
    year=y;
  if  ((temp1<=0)||(temp1>31)||(temp2<=0)||(temp2>12))
  {
      cout<<"Error!";
  }
    else
    {
        day=temp1;
        month=temp2;
    }
    
}
Date::~Date()
{
    
}
void Date::Input()
{
    do{
        cout<<"Input day: ";
        cin>>day;
        cout<<"Input month: ";
        cin>>month;
        cout<<"Input year: ";
        cin>>year;
        if((day<=0)||(day>31)||(month<=0)||(month>12))
        {
            cout<<"Wrong date input!";
        }
    }while((day<=0)||(day>31)||(month<=0)||(month>12));
    cout<<endl;
}
 void Date::Print()
{
     cout<<day<<endl;
     cout<<month<<endl;
     cout<<year<<endl;
 }
bool Date::operator>(Date& b)
{
    if (day>b.day && month>b.month && year>b.year)
    {
        return true;
    }
    return false;
}
bool Date::operator<(Date& b)
{
    if (day<b.day && month<b.month && year<b.year)
    {
        return true;
    }
    return false;
}
bool Date::operator<=(Date& b)
{
    if (day<=b.day && month<=b.month && year<=b.year)
    {
        return true;
    }
    return false;
}
bool Date::operator>=(Date& b)
{
    if (day>=b.day && month>=b.month && year>=b.year)
    {
        return true;
    }
    return false;
}
bool Date::operator==(Date& b)
{
    if (day==b.day && month==b.month && year==b.year)
    {
        return true;
    }
    return false;
}
bool Date::operator!=(Date& b)
{
    if (day!=b.day && month!=b.month && year!=b.year)
    {
        return true;
    }
    return false;
}
Date& Date::operator+=(int a)
{
    day+=a;
    do
    {
        if (day>31)
        {
            
            day-=31;
            month++;
        }
        if (month>12)
        {
            year++;
            month-=12;
        }
    }while((day>31)||(month>12));
    
    return *this;
}
Date& Date:: operator-=(int a)
{
    day-=a;
    do
    {
        if (day<1)
        {
            
            day+=31;
            month--;
        }
        if (month<1)
        {
            year--;
            month+=12;
        }
    }while((day<1)||(month<1));
    
    return *this;
}
Date& Date:: operator++()
{
    ++day;
    if (day>31)
    {
        month++;
        day-=31;
    }
    if (month>12)
    {
        month-=12;
        year++;
    }
    return *this;
}
Date& Date:: operator++(int a)
{
   
    day++;
    if (day>31)
    {
        month++;
        day-=31;
    }
    if (month>12)
    {
        month-=12;
        year++;
    }
    return *this;
}
Date& Date:: operator--(int a)
{
   
    day--;
    if (day<1)
    {
        month--;
        day+=31;
    }
    if (month<1)
    {
        month+=12;
        year--;
    }
    return *this;
}
Date& Date:: operator--()
{
    --day;
    if (day<1)
    {
        month--;
        day+=31;
    }
    if (month<1)
    {
        month+=12;
        year--;
    }
    return *this;
}
Date Date:: operator+(Date b)
{

    day=day+b.day;
    month=month+b.month;
    year=year+b.year;
    do
    {
        if (day>31)
        {
            
            day-=31;
            month++;
        }
        if (month>12)
        {
            year++;
            month-=12;
        }
    }while((day>31)||(month>12));
    
    return Date(day, month, year);
}
Date Date::  operator-(Date b)
{
    
    day=day-b.day;
    month=month-b.month;
    year=year-b.year;
    do
    {
        if (day<1)
        {
            
            day+=31;
            month--;
        }
        if (month<1)
        {
            year--;
            month+=12;
        }
    }while((day<1)||(month<1));
    return Date(day, month, year);
}
Date Date::  operator+(int d)
{
    day+=d;
    do
    {
        if (day>31)
        {
            
            day-=31;
            month++;
        }
        if (month>12)
        {
            year++;
            month-=12;
        }
    }while((day>31)||(month>12));
    
    return *this;
}
Date Date::  operator-(int d)
{
    day-=d;
    do
    {
        if (day<1)
        {
            
            day+=31;
            month--;
        }
        if (month<1)
        {
            year--;
            month+=12;
        }
    }while((day<1)||(month<1));
    
    return *this;
}
void Date::SetDay(int d) 
{
    if (d <= 0 || d > 31) {
        cout << "Вы ввели неверное число!" << endl << endl;
        return;
    }
        
    day = d;
}
void Date::SetMonth(int m)
{
    if (m <= 0 || m > 12) {
        cout << "Вы ввели неверный месяц!" << endl << endl;
        return;
    }

    month = m;
}
void Date::SetYear(int y) 
{
    year = y;
}
int Date::GetDay() const 
{
    return day;
}
int Date::GetMonth() const 
{
    return month;
}
int Date::GetYear() const 
{
    return year;
}
