#include <iostream>
using namespace std;

class Date {
    private: 
    int day;
    int month;
    int year;

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
        if (this->day += days < 31) {
            this->day += days;
        } else {
            this->day = (this->day += days) - 31;
            this->month++;
        }
    }

    void AddWeeks(int weeks) {
        if (this->day += (weeks * 7) < 31) {
            this->day += (weeks * 7);
        } else {
            this->day = (this->day += (weeks * 7)) - 31;
            this->month++;
        }
    }

    void SubtractDays(int days) {
        if (this->day -= days > 0) {
            this->day -= days;
        } else {
            this->day = (this->day -= days) + 31;
            this->month--;
        }
    }

    void Subtract(int month, int days) {
        if (this->day -= days > 0) {
            this->day -= days;
        } else {
            this->day = (this->day -= days) + 31;
            this->month--;
        }
    }

    void AddMonths(int months) {
        if (this->month += months < 12) {
            this->month += months;
        } else {
            this->month = (this->month += months) - 12;
            this->year++;
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