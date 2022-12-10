#include <iostream>
#include <regex>
using namespace std;

bool validate(string input) {
	return regex_match(input, regex("[+-]?([0-9]*[.])?[0-9]+"));
}
