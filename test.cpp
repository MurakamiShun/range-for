#include <iostream>
#include "additional_for.hpp"



int main() {
	using namespace std;

	cout << "step" << endl;
	for (auto i : step(10)) {
		cout << "loop: "<< i << endl;
	}
	cout << "range" << endl;
	for (auto i : range(2, 10)) {
		cout << "loop: "<< i << endl;
	}

	return 0;
}