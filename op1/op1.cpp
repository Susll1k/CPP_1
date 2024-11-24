

#include <iostream>
using namespace std;

class Fraction {
    int numerator;
    int denominator;
public:
    void input() {
        cout << "numerator: ";
        cin >> numerator;
        cout << "denominator: ";
        cin >> denominator;
        if (denominator == 0) {
            cout << "error" << endl;
            denominator = 1;
        }
    }

    void display() {
        cout << numerator << "/" << denominator << endl;
    }

    Fraction add(Fraction other) {
        Fraction result;
        result.numerator = numerator * other.denominator + other.numerator * denominator;
        result.denominator = denominator * other.denominator;
        return result;
    }

    Fraction subtract(Fraction other) {
        Fraction result;
        result.numerator = numerator * other.denominator - other.numerator * denominator;
        result.denominator = denominator * other.denominator;
        return result;
    }

    Fraction multiply(Fraction other) {
        Fraction result;
        result.numerator = numerator * other.numerator;
        result.denominator = denominator * other.denominator;
        return result;
    }

    Fraction divide(Fraction other) {
        Fraction result;
        result.numerator = numerator * other.denominator;
        result.denominator = denominator * other.numerator;
        if (result.denominator == 0) {
            cout << "error" << endl;
            result.numerator = 0;
            result.denominator = 1;
        }
        return result;
    }
};

int main() {
    Fraction a, b;

    cout << "Fraction 1:" << endl;
    a.input();

    cout << "Fraction 2:" << endl;
    b.input();

    a.add(b).display();

    a.subtract(b).display();

    a.multiply(b).display();

    a.divide(b).display();

    return 0;
}
