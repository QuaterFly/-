#include <iostream>
#include <cmath>
using namespace std;

void example1(float a, float b) {
	cout << "z1=" << pow(cos(a), 4) + pow(sin(b), 2) + pow(sin(2 * a), 2) / 4 - 1 << "\n";
	cout << "z2=" << sin(a + b) * sin(b - a) << "\n";
}