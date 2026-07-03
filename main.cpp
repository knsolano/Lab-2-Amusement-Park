#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()


{
	cout << "Hello, and welcome to Karen's Amusement Park!" << endl;
	int age;
	cout << "Please enter your age: ";
	cin >> age;
	if (age <= 5) {
		cout << "Sorry, you are too young. Come again next year!" << endl;
	}
	else if (age >= 6) {
		cout << "Yay! You are old enough." << endl;
		int height;
		cout << "Now please enter your height in inches: ";
		cin >> height;
		if (height < 40)
			cout << "Sorry, you are too short! Come again when you are taller!" << endl;
		else if (height >= 40)
			cout << "Yay! You are tall enough to enter, enjoy!" << endl;
	}

	return 0;
}