#include "Class.h"
Class::Class(int x, int y, int z) {
	this->x = x;
	this->y = y;
	this->z = z;
}
void Class::num(int x, int y, int z) {
	try {
		if (x == 1 && y == 2 && z == 3) cout << "����, ���, ���" << endl;
		else if (x != 1 || y != 2 || z != 3) throw "������������ ��������";
	}
	catch (const char* msg) {
		cout << msg << "\n";
	}
}
/*void Class::born(int b) {
	try {
		if (b < 1850 && b> 0) cout << "���-�� �� �������..." << endl;
		else if (b > 2022) throw "�� ��� �� ��������";
		else if (b < 0) throw "�� ����� ������������� �����!";
		else cout << "�������!" << endl;
	}
	catch (const char* msg) {
		cout << msg << "\n";
	}
} */

void Class::born(int b) {
	try {
		if (b < 1900 && b> 0) cout << "��� ������ ��� ���? ������������..." << endl;
		else if (b > 2004 && b <= 2022) throw "��� ������ 18 ���!";
		else if (b < 0) throw "�� �������� �� ����� ���?)";
		else if (b > 2022) throw "�� �����!";
		else cout << "���: "<< 2022 - b << endl;
	}
	catch (const char* msg) {
		cout << msg << "\n";
	}
} 
