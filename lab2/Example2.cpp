#include <iostream>;
#include <string>
#include <regex>
#include <cmath>
#include <stdio.h>
using namespace std;

const char* CHECK_MESSEGE_EXAMPLE2 = "%s must be number, try again\n";
const char* VARIBLE_REQUEST_EXAMPLE2 = "What is %s ? \n";

bool validate(string input);

void example2() {
	string c, d, z, NumberOfFunction;
	double x, y, f, part1;
	printf(VARIBLE_REQUEST_EXAMPLE2, "c");
	cin >> c;
	while (!validate(c)) {
		printf(CHECK_MESSEGE_EXAMPLE2, "c");
		printf(VARIBLE_REQUEST_EXAMPLE2, "c");
		cin >> c;
	};
	printf(VARIBLE_REQUEST_EXAMPLE2, "d");
	cin >> d;
	while (!validate(d)) {
		printf(CHECK_MESSEGE_EXAMPLE2, "d");
		printf(VARIBLE_REQUEST_EXAMPLE2, "d");
		cin >> d;
	};
	printf(VARIBLE_REQUEST_EXAMPLE2, "z");
	cin >> z;
	while (!validate(z)) {
		printf(CHECK_MESSEGE_EXAMPLE2, "z");
		printf(VARIBLE_REQUEST_EXAMPLE2, "z");
		cin >> z;
	};
	if (stod(z) < 0) {
		cout << "z < 0 ==> x = z^2 - z \n";
		x = pow(stod(z), 2) - stod(z);
	}
	else {
		cout << "z >= 0 ==> x = z^3 \n";
		x = pow(stod(z), 3);
	}
	printf(VARIBLE_REQUEST_EXAMPLE2, "Number of function");
	cout << "1: 2x\n2: x^2\n3: x/3\n";
	cin >> NumberOfFunction;
	while (!regex_match(NumberOfFunction, regex("[1-3]"))) {
		cout << "Number of function must 1, 2 or 3, try again\n";
		printf(VARIBLE_REQUEST_EXAMPLE2, "Number of function");
		cout << "1: 2x\n2: x^2\n3: x/3\n";
		cin >> NumberOfFunction;
	};
	switch (stoi(NumberOfFunction)) {
	case 1:
		f = 2 * x;
		break;
	case 2:
		f = pow(x,2);
		break;
	default:
		f = x/3;
			break;
	}
	cout << "y = " << pow(sin(stod(c)*f + pow(stod(d),2) + pow(x,2)),3) << "\n";
}