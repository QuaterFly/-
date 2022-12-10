#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void example3(double x, double y, double z) {
	cout << "y=" << 5. * atan(x) - (1. / 4.) * acos(x) * ((x + 3 * abs(x - y) + pow(x, 2)) / (abs(x - y) * z + pow(x, 2))) << "\n";
}

