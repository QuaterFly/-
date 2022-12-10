#include <iostream>;
#include <string>
#include <regex>
#include <cmath>
#include <stdio.h>

using namespace std;

const char* CHECK_MESSEGE = "%s must be number and %s>0, try again\n";
const char* VARIBLE_REQUEST= "What is %s ? \n";

void example1(float a, float b);
void example2(float a, float b);
void example3(double a, double b, double z);
bool validate(string input);
int main() {
	string x,y,z,numberOfExample;
	printf(VARIBLE_REQUEST, "a");
	cin >> x;
	while (!validate(x)) {
		printf(CHECK_MESSEGE, "a" , "a");
		printf(VARIBLE_REQUEST, "a");
		cin >> x;
	};

	printf(VARIBLE_REQUEST, "b");
	cin >> y;
	while (!validate(y)) {
		printf(CHECK_MESSEGE, "b", "b");
		printf(VARIBLE_REQUEST, "b");
		cin >> y;
	};

	printf(VARIBLE_REQUEST, "number of example");
	cin >> numberOfExample;
	while (!regex_match(numberOfExample, regex("[1-3]"))) {
		cout << "Number of example must 1, 2 or 3, try again\n";
		printf(VARIBLE_REQUEST, "number of example");
		cin >> numberOfExample;
	};

	if (stoi(numberOfExample) == 1) example1(stof(x),stof(y));
	if (stoi(numberOfExample) == 2) example2(stof(x), stof(y));
	if (stoi(numberOfExample) == 3) {
		printf(VARIBLE_REQUEST, "z");
		cin >> z;
		while (!validate(z) && abs(stof(x) - stof(y)) * stof(z) + pow(stof(x), 2) != 0) {
			printf(CHECK_MESSEGE, "z", "z");
			printf(VARIBLE_REQUEST, "z");
			cin >> z;
		};
		example3(stod(x), stod(y), stod(z));
	}
}