#include <iostream>;
#include <string>
#include <regex>
#include <cmath>
#include <stdio.h>
using namespace std;

const char* CHECK_MESSEGE_EXAMPLE1 = "%s must be number, try again\n";
const char* VARIBLE_REQUEST_EXAMPLE1 = "What is %s ? \n";

bool validate(string input);

void example1() {
	string c,d,k,z;
	double x, y;
	printf(VARIBLE_REQUEST_EXAMPLE1, "c");
	cin >> c;
	while (!validate(c)) {
		printf(CHECK_MESSEGE_EXAMPLE1, "c");
		printf(VARIBLE_REQUEST_EXAMPLE1, "c");
		cin >> c;
	};
	printf(VARIBLE_REQUEST_EXAMPLE1, "d");
	cin >> d;
	while (!validate(d)) {
		printf(CHECK_MESSEGE_EXAMPLE1, "d");
		printf(VARIBLE_REQUEST_EXAMPLE1, "d");
		cin >> d;
	};
	printf(VARIBLE_REQUEST_EXAMPLE1, "k");
	cin >> k;
	while (!validate(k)) {
		printf(CHECK_MESSEGE_EXAMPLE1, "k");
		printf(VARIBLE_REQUEST_EXAMPLE1, "k");
		cin >> k;
	};
	printf(VARIBLE_REQUEST_EXAMPLE1, "z");
	cin >> z;
	while (!validate(z)) {
		printf(CHECK_MESSEGE_EXAMPLE1, "z");
		printf(VARIBLE_REQUEST_EXAMPLE1, "z");
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
	cout << "y = " << sin(stod(c) * x + pow(stod(d), 2) + stod(k) * pow(x, 2)) <<"\n";
}