#include <iostream>

using namespace std;

void swap(int* x, int* y) {
	int temp = *x; // temp라는 변수를 하나 더 만들어서 우선적으로 *x값을 temp에 대입
	* x = * y; // *x에 *y값을 대입한 후
	*y = temp; // 기존에 *x값을 대입해두었던 temp를 다시 *y에 대입하는 것
	// 결론적으로 *x와 *y의 값은 현재 바뀌게 된 상황이다.
}

int main() {
	// #1
	short A[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cout << A[4] << endl;

	// #2
	char str1[10] = { 'H', 'I' , 'E', 'A', 'Z', 'L', 'T', 'L', 'U', 'O' };
	cout << str1[0] << str1[2] << str1[5] << str1[5] << str1[9] << endl;

	// #3
	char str[6] = "Hello";
	char* p = str;

	// #3 - 1
	for (int i = 0; i < 6; i++)
	{
		cout << p[i];
	}
	cout << "\n";
	// #3 - 2	
	cout << p[0] << p[1] << p[2] << p[3] << p[4] << p[5] << endl;

	
	// #4
	int a = 10, b = 20;
	cout << a << ", " << b << endl;
	swap(a, b); //위에서 void swap으로 선언해두었던 곳에서 x와 y의 값이 바뀌도록 해두었기 때문에 단순히 그 곳에 a와 b를 대입하면 끝.
	cout << a << ", " << b << endl;




	return 0;
}