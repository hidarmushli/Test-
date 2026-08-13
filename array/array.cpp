#include <iostream>
using namespace std;
int main()
{
	float x[4];
	cout << "Enter the first number: \n";
	cin >> x[0];
	cout << "Enter the second number: \n";
	cin >> x[1];
	cout << "Enter the third number: \n";
	cin >> x[2];
	cout << "*********************************\n";
	x[3] = (x[0] + x[1] + x[2]) / 3;
	cout << "The average of the three numbers is: " << x[3] << endl;
}
