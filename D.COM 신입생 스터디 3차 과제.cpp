#include <iostream>

using namespace std;
// #1

int x;
int y;
int a;
int b;



int Euclid(int a, int b) 
{
	int r = a % b;
	if (r == 0) {
		x = a;
		y = b;
		return b;
	}
	return Euclid(b, r);
}

int main() {
	cout << "int a: ";
	cin >> a;
	cout << "\n";
	cout << "int b: ";
	cin >> b;
	Euclid(a, b);
	cout << "�� ���� �ִ� ������� " << y << "�Դϴ�.";
}


//#2.

int m;
int n;
int a;
int b;



int main() {
	cout << "�� ���� �Է��ϼ���." << endl;
	cin >> a;
	cin >> b;
	cout << "1. ADD" << "\n" << "2. Subtract" << "\n" << "3. Multiply" << "\n" << "4.Divide" << "\n" << "5. Exit" << endl;

	int parameter;
	cout << "���� ������ ������. ";
	cin >> parameter;
	cout << "Select Operation : " << parameter << endl;
	do {
		switch (parameter)
		{
		case 1: cout << "���� ���: " << a + b; break;
		case 2: cout << "�� ���: " << a - b; break;
		case 3: cout << "���� ���: " << a * b; break;
		case 4: cout << "���� ���: " << a / b; break;
		}
	} while (parameter < 5);


	return 0;
}