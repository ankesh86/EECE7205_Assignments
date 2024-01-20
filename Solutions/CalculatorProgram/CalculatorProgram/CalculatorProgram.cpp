#include <iostream>
using namespace std;

float Calculator(float num1, float num2, int opr);

int main()
{
	int counter = 1;
	while (counter == 1) {
		float a, b, d;
		int c;

		cout << "Calculator\n";
		cout << "Enter first number - ";
		cin >> a;
		cout << "Enter second number - ";
		cin >> b;
		cout << "Select the Operation to perform:\n1 - addition \n2 - subtraction \n3 - division \n4 - multiplication\n";
		cin >> c;

		d = Calculator(a, b, c);
		cout << "The calculated value is: " << d << endl;

		cout << "Do you want to continue? Enter 1 for yes, 0 for no: ";
		cin >> counter;

		if (counter != 1) {
			break;
		}
	}
	return 0;
}

float Calculator(float num1, float num2, int opr) {
	switch (opr) {
	case 1:
		return num1 + num2;
		break;
	case 2:
		return num1 - num2;
		break;
	case 3:
		return num1 / num2;
		break;
	case 4:
		return num1 * num2;
		break;
	default:
		cout << "Not entered proper operation\n";
		return 0;
		break;
	}
};
