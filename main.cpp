#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

void swap_numbers() {
    int a = 1;
    int b = 2;

    int temp;

    temp = a;
    a = b;
    b = temp;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
}

double math_op(double x, int y) {
    return (x + 10) / (3 * y);
}

void calculate_tax() {
    double sales = 95000.0;
    const double state_tax_rate = 0.04;
    const double county_tax_rate = 0.02;

    const double states_tax = sales * state_tax_rate;
    const double county_tax = sales * county_tax_rate;

    cout << "Sales: $" << sales << endl
         << "State Tax: $" << states_tax << endl
         << "County Tax: $" << county_tax << endl;

}

void fahrenheit_to_celsius() {
    cout << "Enter the temperature in Fahrenheit degrees \n";

    double fahrenheit_degrees;
    cin >> fahrenheit_degrees;

    const double conversion_constant = 5.0 / 9;
    const double celsius_degrees = (fahrenheit_degrees - 32) * conversion_constant;

    // cout.precision(6);
    // cout << "Conversion constant is is " << conversion_constant << endl;
    cout << "Temperature in Celsius is " << celsius_degrees << " degrees" << endl;
}


void calculate_circle_area() {
    cout << "Enter the radius of a circle: \n";

    double radius;
    cin >> radius;

    double area = M_PI * pow(radius, 2);

    cout << "Area of the circle is: " << area << endl;
}

int main() {
    // swap_numbers();

    // cout << "math op is: " << math_op(10, 5) << endl;

    // calculate_tax();

    // fahrenheit_to_celsius();

    calculate_circle_area();

    return 0;
}