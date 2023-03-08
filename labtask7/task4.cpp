#include <iostream>
#include <cassert>
using namespace std;

class Circle {
    private:
    double radius;

    public:
    Circle() {
        this->radius = 1;
    }

    Circle(double radius) {

        assert(radius > 0);

        this->radius = radius;
    }

    Circle(Circle &circle) {
        this->radius = circle.radius;
    }

    double getRadius() const {
        return radius;
    }

    double getPerimeter() const {
        return 2 * 3.14 * radius;
    }

    void setRadius(double radius) {
        this->radius = radius;
    }

    double getArea() const {
        return 3.14 * radius * radius;
    }

    ~Circle () {}

};

int main() {



    return 0;
}