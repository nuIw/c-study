#define CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;


int main() {
	// #1
	cout << "My name is ���ο�" << endl;

	// #2
	int a = 2147483648;
	long long b = 2147483648;
	cout << a << " " << b << endl;

	//#3
	const float PI = 3.14;
	char ch1 = 65; // ���� A�� 10���� 65
	char ch2 = 66; // ���� B�� 10���� 66
	cout << PI << endl;
	cout << ch1 << endl;
	cout << ch2 << endl;

	//#4
	char ch;
	int x;
	unsigned short siX;
	unsigned iX;
	long liX;
	long long lliX;
	cout << "sizeof(ch):" << sizeof(ch) << endl;
	cout << "sizeof(x):" << sizeof(x) << endl;
	cout << "sizeof(siX):" << sizeof(siX) << endl;
	cout << "sizeof(iX):" << sizeof(iX) << endl;
	cout << "sizeof(liX):" << sizeof(liX) << endl;
	cout << "sizeof(lliX):" << sizeof(lliX) << endl;

	//#5
	int Fahrenheit;
	cout << "Please enter Fahrenheit Value: ";
	scanf_s("%d", &Fahrenheit);
	float Celsius = (Fahrenheit - 32)*5/9.0; 
	// 5/9�� 0�̱� ������ '5/9*(Fahrenheit -32)'�� ���ص� 0
	// '/'�����ڸ� ����� �� ���� �� ��� �ϳ��� �Ҽ����� ����ϸ� �� �Ҽ������� ������ ������ 9.0 ���
	// 9.0 ��ſ� �׳� 9�� ���� 13�� ��µ����� 9.0�� ���鼭 13,3333�� ��µ�
	cout << "Celsius Value is " << Celsius << endl;
	
	return 0;
}

