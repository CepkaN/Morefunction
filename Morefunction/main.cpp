#include<iostream>

int _X;  //���������� ����������. ������ �� ���� ���������.
const double _Pi = 3.1416;
int _ARR[5];

void print_X() {
	std::cout << _X << '\n';
}

void use_static() {
	static int A=1;
	std::cout <<"A = " << A << '\n';
	A++;
	if (A > 5)
		A = 1;
}
int power(int num1,int num2=2) {
	int res = 1;
	for (int i = 1; i <= num2; i++)
		res *= num1;
	return res;
}

inline int absolute(int num) {
	return num < 0 ? -num : num;
}

inline int sum_ab(int A, int B) {
	int sum=0;
	for (int i = A; i <= B; i++)
		sum += i;
	return sum;
}
int max(int num1, int num2) {
	std::cout << "INT\n";
	return num1 > num2 ? num1 : num2;
}
double max(double num1, double num2) {
	std::cout << "DOUBLE\n";
	return num1 > num2 ? num1 : num2;
}

int max(int num1, int num2, int num3) {
	std::cout << "THREE INT\n";
	return num1 > (num2 > num3 ? num2 : num3) ? num1 : (num2 > num3 ? num2 : num3);
}

template<typename T>
T absol(T num) {
	return num < 0 ? -num : num;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n; // ��������� ���������� ����� main.

	/*//i = 10;// ������, i ��� ������� ���������.
	for (int i = 0; i < 5; i++) {
		int x;
		std::cout << " *";
		x = 5;
	}
	std::cout << '\n';
	// x = 5;// ������, � ��� ������� ���������.

	// ������ � ���������� ����������.

	_X = 7;
	print_X();*/

	// ����������� ����������.
	/*use_static();
	//std::cout << A;// ������.
	for (int i = 0; i < 10; i++)
		use_static();*/
	/*std::cout << "����� 4 � ������� 3 = " << power(4, 3) << "\n";
	std::cout << "5 � �������� ����� " << power(5) << "\n";*/

	// ������������ �������.
	/*::cout << "������� ����� : ";
	std::cin >> n;
	std::cout << "|" << n << "|" << " = " << absolute(n) << '\n';

	std::cout << "����� ����� �� 5 �� 10 = " << sum_ab(5, 10) << '\n';*/

	// ������������� �������.
	/*std::cout << "�������� �� 10 � 15 ����� " << max(10, 15) << '\n';
	std::cout << "�������� �� 5.7 � 5.1 ����� " << max(5.7, 5.1) << '\n';
	std::cout << "�������� �� ��� ����� ����� "<<max(6, 7,8) << '\n';*/

	// ��������� �������.
	std::cout << absol(-7) << '\n';
	std::cout << absol(-7.5) << '\n';

	return 0;
}