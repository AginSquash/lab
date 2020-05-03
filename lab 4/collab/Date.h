/*
 * by Karina Romanova
 * https://github.com/KarinaRomanova/1Lab
 */

#ifndef LABA8_DATE_H
#define LABA8_DATE_H

#include<string>
#include<iostream>


enum DATE_WeekDay {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

using namespace std;

class Date {
private:
    int day;
    int month;
    int year;
    int dayResult;
public:
    Date(int date_day, int date_month, int date_year); //установка даты
    std::string getDayResult();
    DATE_WeekDay getDayResultENUM();
    void getWeekend();										  //выходные
};



#endif //LABA8_DATE_H
