#include <iostream>;
#include <string>
#include <regex>
#include <cmath>
#include <stdio.h>

using namespace std;

const char* VARIBLE_REQUEST = "What is %s ? \n";

void example1();
void example2();
void example3();
bool validate(string input);
int main() {
	string numberOfExample;
	printf(VARIBLE_REQUEST, "number of example");
	cin >> numberOfExample;
	while (!regex_match(numberOfExample, regex("[1-3]"))) {
		cout << "Number of example must 1, 2 or 3, try again\n";
		printf(VARIBLE_REQUEST, "number of example");
		cin >> numberOfExample;
	};
	if (stoi(numberOfExample) == 1) example1();
	if (stoi(numberOfExample) == 2) example2();
	if (stoi(numberOfExample) == 3) example3();
}