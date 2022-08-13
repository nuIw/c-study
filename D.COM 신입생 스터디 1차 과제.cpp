#define CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;


int main() {
	// #1
	cout << "My name is 조민우" << endl;

	// #2
	int a = 2147483648;
	long long b = 2147483648;
	cout << a << " " << b << endl;

	//#3
	const float PI = 3.14;
	char ch1 = 65; // 문자 A는 10진수 65
	char ch2 = 66; // 문자 B는 10진수 66
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
	// 5/9가 0이기 때문에 '5/9*(Fahrenheit -32)'는 뭘해도 0
	// '/'연산자를 사용할 때 숫자 중 적어도 하나에 소수점을 사용하면 몫도 소수점으로 나오기 때문에 9.0 사용
	// 9.0 대신에 그냥 9를 쓰면 13이 출력되지만 9.0을 쓰면서 13,3333이 출력됨
	cout << "Celsius Value is " << Celsius << endl;
	
	return 0;
}

