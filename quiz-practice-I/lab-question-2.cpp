#include <iostream>
using namespace std;

class Rational {
    private:
        int numerator;
        int denominator;
    public:
        Rational() {
            numerator = 0;
            denominator = 0;
        }

        Rational(int n = 0, int d = 0) {
            int less = 0;

            if (n > d) {
                less = d;
            } else {
                less = n;
            }

            for (int i = 0; i < less; i++) {
                if ((n % i == 0) && (d % i == 0)) {
                    d %= i;
                    n %= i;
                }
            }

            denominator = d;
            numerator = n;
        }

        void AddRationalNumbers(int n1, int n2, int d1, int d2) {
            int less = 0;
            int _numenator = 0, _denominator = 0;
            _numenator = ((n1 * d2) + (n2 * d1));
            _denominator = (d1 * d2);

            for (int i = 0; i < less; i++) {
                if ((_numenator % i == 0) && (_denominator % i == 0)) {
                    _denominator %= i;
                    _numenator %= i;
                }
            }

            denominator = _denominator;
            numerator = _numenator;

        }

        void MultiplyRationalNumber(int n1, int n2, int d1, int d2) {
            int less = 0;
            int _numenator = 0, _denominator = 0;
            _numenator = (n1 * n2);
            _denominator = (d1 * d2);

            for (int i = 0; i < less; i++) {
                if ((_numenator % i == 0) && (_denominator % i == 0)) {
                    _denominator %= i;
                    _numenator %= i;
                }
            }

            denominator = _denominator;
            numerator = _numenator;

        }

        void DivideRationalNumber(int n1, int n2, int d1, int d2) {
            int less = 0;
            int _numenator = 0, _denominator = 0;
            _numenator = (n1 * d2);
            _denominator = (d1 * n2);

            for (int i = 0; i < less; i++) {
                if ((_numenator % i == 0) && (_denominator % i == 0)) {
                    _denominator %= i;
                    _numenator %= i;
                }
            }
            denominator = _denominator;
            numerator = _numenator;

        }

        void PrintRationalNumber() {

            cout << endl << numerator << " / " << denominator << endl;
            
        }


};