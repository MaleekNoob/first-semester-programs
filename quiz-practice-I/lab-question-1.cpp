#include <iostream>
using namespace std;

class Holiday {
    public:
        Holiday() {
            name = nullptr;
            month = nullptr;
            day = 0;
        }

        Holiday(string n, int d, string m) {
            this->name = n;
            this->day = d;
            this->month = m;
        }

        void setName(string s) {
            this->name = s;
        }

        string getName() {
            return this->name;
        }

        void setDay(int u) {
            this->day = u;
        }

        int getDay() {
            return this->day;
        }

        void setMonth(string p) {
            this->month = p;
        }

        string setMonth() {
            return this->month;
        }

        bool inSameMonth(Holiday &, Holiday &);
        double avgMonth(Holiday arr[], int size);
        
    private:
        string name;
        string month;
        int day;
};

bool Holiday::inSameMonth(Holiday &obj1, Holiday &obj2) {
    if (obj1.month == obj2.month) {
        return true;
    } else {
        return false;
    }
}

double Holiday::avgMonth(Holiday arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i].day;
    }

    return (sum / size);
}