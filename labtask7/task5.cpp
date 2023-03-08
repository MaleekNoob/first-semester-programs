#include <iostream>
using namespace std;

class Fraction {
    private:
    int numer;
    int denom;
    
    
    int gcd() {
        int gcd = 1;

        for (int i = 1; (i <= numer) && (i <= denom); i++) {
            if ((numer % i == 0) && (denom % i == 0)) {
                gcd = i;
            }
        }

        return gcd;
    }

    void normalize() {

        if ((numer < 0) && (denom < 0)) {
            denom *= -1;
        } else if ((numer > 0) && (denom < 0)) {
            denom *= -1;
            numer *= -1;
        } else if ((numer > 0) && (denom > 0)) {
            /*do nothing*/
        } else if ((numer < 0) && (denom > 0)) {
            /*do nothing*/
        } else {
            /*do nothing*/
        }

        numer /= gcd();
        denom /= gcd();
    }

    public:
    Fraction() {
        this->numer = 0;
        this->denom = 1;

        normalize();
    }

    Fraction(int numer, int denom) {
        this->numer = numer;

        if (denom == 0) {
            cout << "Denominator cannot be zero" << endl;
            exit(0);
        }

        this->denom = denom;

        normalize();
    }

    Fraction (Fraction &fraction) {
        this->numer = fraction.numer;

        if (denom == 0) {
            cout << "Denominator cannot be zero" << endl;
            exit(0);
        }

        this->denom = fraction.denom;

        normalize();

    }

    ~Fraction() {};

    int getNumer() const {
        return numer;
    }

    int getDenom() const {
        return denom;
    }

    void setNumer(int numer) {
        this->numer = numer;
    }

    void setDenom(int denom) {
        this->denom = denom;
    }

    void print() const {
        cout << endl << numer << "/" << denom << endl;
    }

};

int main() {


    return 0;
}