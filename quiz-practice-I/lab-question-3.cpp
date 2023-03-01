#include <iostream>
using namespace std;

class Sphere {
    private: 
    const double PI = 3.14159;
    double radius;

    public:
    Sphere() {
        radius = 0;
    }

    Sphere(double radius) {
        this->radius = radius;
    }

    void SetRadius(double radius) {
        this->radius = radius;
    }

    double getRadius() {
        return radius;
    }

    double getDiameter() {
        return (radius * 2);
    }

    double getArea() {
        return (4 * PI * radius * radius);
    }

    double GetVolume() {
        return ((4.0 / 3.0) * PI * radius * radius * radius);
    }   

    double GetCircumference() {
        return (2 * PI * radius);
    }

};

int main() {

    double r;
    Sphere s;
    cout << "\nEnter radius: ";
    cin >> r;

}