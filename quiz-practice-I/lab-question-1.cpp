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
            if (s.length() <= 50) {
                this->name = s;
            } else {
                cout << "Name should not be greater than 50 characters" << endl;
            }
        }

        string getName() {
            return this->name;
        }

        void setDay(int u) {
            if (u >= 0) {
                this->day = u;
            } else {
                cout << "Day should never be negitive" << endl;
            }
        }

        int getDay() {
            return this->day;
        }

        void setMonth(string p) {
            if (p.length() <= 10) {
                this->month = p;
            } else {
                cout << "Month should not be greater than 10 characters" << endl;
            }
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