
#include <iostream>;
#include <string>
#include <regex>
#include <cmath>
#include <stdio.h>
using namespace std;

double minim(double a, double b) {
	if (a > b) return b;
	if (a < b) return a;
	if (a == b) return a;
}