//: EX08:Ex21.cpp
// �������� ����� � ����������� ����������, �������� ������� �������� � ������ 
// ���������������� �������� ������������, � ���������� �������������, ������������
// ��� ����������� ������� �������.

class X {
	const int iVar;
	enum { buf  = 10 };
	char buffer[buf];
public:
	X();
	~X();
};

X::X() : iVar(0) {

}

X::~X() {}

int main() {
	X x;
} ///:~