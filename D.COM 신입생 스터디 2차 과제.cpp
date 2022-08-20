#include <iostream>

using namespace std;

void swap(int* x, int* y) {
	int temp = *x; // temp��� ������ �ϳ� �� ���� �켱������ *x���� temp�� ����
	* x = * y; // *x�� *y���� ������ ��
	*y = temp; // ������ *x���� �����صξ��� temp�� �ٽ� *y�� �����ϴ� ��
	// ��������� *x�� *y�� ���� ���� �ٲ�� �� ��Ȳ�̴�.
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
	swap(a, b); //������ void swap���� �����صξ��� ������ x�� y�� ���� �ٲ�� �صξ��� ������ �ܼ��� �� ���� a�� b�� �����ϸ� ��.
	cout << a << ", " << b << endl;




	return 0;
}