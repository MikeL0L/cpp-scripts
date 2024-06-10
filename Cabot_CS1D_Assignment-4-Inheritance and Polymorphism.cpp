#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class GeometricObject {
private:
    string color;
    bool filled;

public:
    GeometricObject() {
        color = "white";
        filled = false;
    }

    void setColor(const string& newColor) {
        color = newColor;
    }

    void setFilled(bool isFilled) {
        filled = isFilled;
    }

    string getColor() const {
        return color;
    }

    bool isFilled() const {
        return filled;
    }
};

class Triangle : public GeometricObject {
private:
    double side1;
    double side2;
    double side3;

public:
    Triangle() : side1(1.0), side2(1.0), side3(1.0) {}

    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    double getSide1() const {
        return side1;
    }

    double getSide2() const {
        return side2;
    }

    double getSide3() const {
        return side3;
    }

    double getArea() const {
        double s = (side1 + side2 + side3) / 2.0;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    double getPerimeter() const {
        return side1 + side2 + side3;
    }
};

int main() {
    double s1, s2, s3;
    string color;
    bool filled;

    cout << "Enter three sides of the triangle: ";
    cin >> s1 >> s2 >> s3;

    cout << "Enter a color: ";
    cin >> color;

    cout << "Enter 1 (filled) or 0 (not filled): ";
    cin >> filled;

    Triangle myTriangle(s1, s2, s3);
    myTriangle.setColor(color);
    myTriangle.setFilled(filled);

    cout << "Area: " << myTriangle.getArea() << endl;
    cout << "Perimeter: " << myTriangle.getPerimeter() << endl;
    cout << "Color: " << myTriangle.getColor() << endl;
    cout << "Filled: " << (myTriangle.isFilled() ? "true" : "false") << endl;

    return 0;
}

