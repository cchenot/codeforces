#include <iostream>
#include <string>

using namespace std;

int main() {
	int		nb, r = 0;
	cin >> nb;
	string instruction;
	for (int i = 0 ; i < nb; ++i){
		cin >> instruction;
		if (instruction.find("+") != instruction.npos)
			++r;
		else
			--r;
	}
	cout << r;
}