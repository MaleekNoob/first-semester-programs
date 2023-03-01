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
            int less;

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
        }
};