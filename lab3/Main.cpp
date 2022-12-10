#include <iostream>;
#include <string>
#include <regex>
#include <cmath>
#include <math.h>
#include <stdio.h>
#define pi 3.14159265358979323846

using namespace std;

const char* CHECK_MESSEGE = "%s must be number, try again\n";
const char* VARIBLE_REQUEST = "What is %s ? \n";

bool validate(string input);

int main(){
	string a, b, h, n;
	double Y, S = 0, k, x;
	printf(VARIBLE_REQUEST, "a");
	cin >> a;
	while (!validate(a)) {
		printf(CHECK_MESSEGE, "a");
		printf(VARIBLE_REQUEST, "a");
		cin >> a;
	};
	printf(VARIBLE_REQUEST, "b");
	cin >> b;
	while (!validate(b) || a == b) {
		if (!validate(b)) {
			printf(CHECK_MESSEGE, "b");
			printf(VARIBLE_REQUEST, "b");
			cin >> b;
			continue;
		}
		if (a == b) {
			cout << "a connot equal b\n";
			printf(VARIBLE_REQUEST, "b");
			cin >> b;
			continue;
		}
	};
	printf(VARIBLE_REQUEST, "h");
	cin >> h;
	while (!validate(h) || stod(h) == 0) {
		if (!validate(h)) {
			printf(CHECK_MESSEGE, "h");
			printf(VARIBLE_REQUEST, "h");
			cin >> h;
			continue;
		}
		if (stod(h) == 0) {
			cout << "h cannot equal 0";
			printf(VARIBLE_REQUEST, "h");
			cin >> h;
			continue;
		}
	};
	printf(VARIBLE_REQUEST, "n");
	cin >> n;
	while (!regex_match(n, regex("[0-9]*"))) {
		cout << "n must be integer and more then 0\n";
		printf(VARIBLE_REQUEST, "n");
		cin >> n;
	};
	if (stod(a) < stod(b)) {
		for (x = stod(a); x <= stod(b); x += stod(h)) {
			if (x > stod(b)) x = stod(b);
			Y = -1. / 2 * log(1 - 2 * x * cos(pi / 3 + pow(x, 2)));
			for (k = 1; k <= stoi(n); k++) {
				S += pow(x, k) * cos(pi * k / 3) / k;
			}
			cout << "|Y(x) = " << Y << "  |  S(x) = " << S << "  |  Y(x) - S(x) = " << abs(S - Y) << "|\n";

		}
	}
	if (stod(a) > stod(b)) {
		for (x = stod(a); x >= stod(b); x -= stod(h)) {
			if (x < stod(b)) x = stod(b);
			Y = -1. / 2 * log(1 - 2 * x * cos(pi / 3 + pow(x, 2)));
			for (k = 1; k <= stoi(n); k++) {
				S += pow(x, k) * cos(pi * k / 3) / k;
			}
			cout << "|Y(x) = " << Y << "  |  S(x) = " << S << "  |  |Y(x) - S(x)| = " << abs(S - Y) <<"|\n";

		}
	}
}