#include <iostream>
#include <cmath>
using namespace std;

void example2(float a, float b) {
	cout << "z1=" << ((a - 1) * sqrt(a) - (b - 1) * sqrt(b)) / (sqrt(pow(a, 2) * b) + a * b + pow(a, 2) - a) << "\n";
	cout << "z2=" << (sqrt(a) - sqrt(b)) / a << "\n";
}