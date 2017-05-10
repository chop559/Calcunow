#include <iostream>
#include <sstream>
#include "calc.h"
using namespace std;

int main() {
	//Sample input: 
	//x = 10 
	//x + 43
	string input = "";

	while (true) {
		vector <string> calcInputs;
		auto c = cin.peek();
		if (c == EOF) break;
		getline(cin, input);

		istringstream iss(input);

		string word;

		while(iss >> word) {
			calcInputs.push_back(word);
		}

		if( calcInputs.at(0) == "LET") set_value(calcInputs.at(1)[0], stoi(calcInputs.at(3)));

		else{ 
			cout << "the answer is : "  << math(calcInputs)  << endl;;
		}

	}
}
