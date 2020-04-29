#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double radius, height, volume;
    cout << "This program calculates the volume of your cylinder.\n\n";
    cout << "Type the radius of your cylinder: ";
    cin >> radius;
    cout << "Type the height of your cylinder: ";
    cin >> height;
    volume = M_PI * pow(radius, 2) * height;
    cout << "The volume of your cylinder is: " << volume << "\n";
}
