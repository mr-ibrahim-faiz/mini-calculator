#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::streamsize;

#include<limits>
using std::numeric_limits;

#include<vector>
using std::vector;

#include<string>
using std::string;

int get_number() {
	vector<string> spelled_out_numbers = { "zero","one","two","three","four","five","six","seven","eight","nine" };
	int number{ -1 };
	string spelled_out_number{ "" };
	bool is_result{ false };

	while (1) {
		cin >> number;
		if (!cin) {
			cin.clear();
			cin >> spelled_out_number;
		}

		if ((number >= 0) && (number <= 9))
			return number;
		else if (!spelled_out_number.empty()) {
			for (int i = 0; i < 10; ++i)
				if (spelled_out_number == spelled_out_numbers[i])
					return i;
			if (!is_result)
				cout << "Wrong operand. Please try again." << endl;
		}
		else
			cout << "ERROR. Please try again." << endl;

		number = -1;
		spelled_out_number = "";
	}

	return 0;
}
