#include <iostream>;
#include <string>
#include <regex>
#include <cmath>
#include <stdio.h>
using namespace std;

const char* CHECK_MESSEGE_EXAMPLE3 = "%s must be number, try again\n";
const char* VARIBLE_REQUEST_EXAMPLE3 = "What is %s ? \n";

bool validate(string input);
double minim(double a, double b);

void example3() {
	string x, y, z;
	printf(VARIBLE_REQUEST_EXAMPLE3, "x");
	cin >> x;
	while (!validate(x)) {
		printf(CHECK_MESSEGE_EXAMPLE3, "x");
		printf(VARIBLE_REQUEST_EXAMPLE3, "x");
		cin >> x;
	};
	printf(VARIBLE_REQUEST_EXAMPLE3, "y");
	cin >> y;
	while (!validate(y)) {
		printf(CHECK_MESSEGE_EXAMPLE3, "y");
		printf(VARIBLE_REQUEST_EXAMPLE3, "y");
		cin >> y;
	};
	printf(VARIBLE_REQUEST_EXAMPLE3, "z");
	cin >> z;
	while (!validate(z)) {
		printf(CHECK_MESSEGE_EXAMPLE3, "z");
		printf(VARIBLE_REQUEST_EXAMPLE3, "z");
		cin >> z;
	};
	cout << "m = "<< minim(stod(x) + stod(y) + stod(z),stod(z)*stod(y)*stod(x))/ minim(stod(x) - stod(y) + stod(z), stod(x) * stod(y) / stod(z)) << "\n";
}