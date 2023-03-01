#include <iostream>
using namespace std;

class Date {
    private: 
    int day;
    int month;
    int year;
    string datefrmt;

    public:
    Date() {
        day = 0;
        month = 0;
        year = 0;
    }

    Date(int day, int month, int year) {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    void AddDays(int days) {
        day += days;
        if (day < 31) {
            day += days;
        } else {
            day = (this->day + days) - 31;
            month++;
        }
    }

    void add(int months, int days) {
        day += days;
        if (day < 31) {
            day += days;
        } else {
            day = (this->day + days) - 31;
            month++;
        }

        month += months;
        if (!(month < 12)) {
            month = (month + months) - 12;
            year++;
        }
    }

    void AddWeeks(int weeks) {
        day += (weeks * 7);
        if (day < 31) {
            day += (weeks * 7);
        } else {
            day = day - 31;
            month++;
        }
    }

    void SubtractDays(int days) {
        this->day -= days;
        if (day > 0) {
            this->day -= days;
        } else {
            day = (day) + 31;   
            month--;
        }
    }

    void Subtract(int month, int days) {
        day -= days;
        if (day > 0) {
            day -= days;
        } else {
            day = day + 31;
            month--;
        }

        month -= month;
        if (month > 0) {
            month -= month;
        } else {
            month = month + 12;
            year--;
        }
    }

    bool isLeapYear() {
        if (((this->year % 4 == 0) && (this->year % 100 != 0)) || (this->year % 400 == 0)) {
            return true;
        } else {
            return false;
        }
    }

    void setDay(int day) {
        this->day = day;
    }

    int getDay() {
        return day;
    }

    void setMonth(int month) {
        this->month = month;
    }

    int getMonth() {
        return month;
    }

    void setYear(int year) {
        this->year = year;
    }

    int getYear() {
        return year;
    }

    void display() {
        cout << "\nDay: " << getDay();
        cout << "\nMonth: " << getMonth();
        cout << "\nYear: " << getYear();
    }
};

int main() {

    return 0;
}