#include <iostream>
#include <math.h>
using namespace std;

float areaAndPerimeter( int r, float *a, float *p) {
    *a = M_PI * r * r;
    *p = 2 *M_PI* r;
    return 0;
}


int main() {
    float radius, area, perimeter;
    cin >> radius;

    areaAndPerimeter(radius,&area,&perimeter);
  cout << "Area: " << area << endl;
  cout << "Perimeter: " << perimeter << endl;
    return 0;
}