//: C03:Guess2.cpp
// ���������� ����� � �������������� ����� do-while
#include <iostream>
using namespace std;

int main() {
	int secret = 15;
	int guess;	// ������������� �� �����
	do {
		cout << "guess the number: ";
		cin >> guess;	// ����� ���������� �������������
	} while (guess != secret);
	cout << "You got it!" << endl;
} ///:~