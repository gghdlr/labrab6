#include "Class.h"
Class::Class(int x, int y, int z) {
	this->x = x;
	this->y = y;
	this->z = z;
}
void Class::num(int x, int y, int z) {
	try {
		if (x == 1 && y == 2 && z == 3) cout << "Один, Два, Три" << endl;
		else if (x != 1 || y != 2 || z != 3) throw "Некорректное значение";
	}
	catch (const char* msg) {
		cout << msg << "\n";
	}
}
/*void Class::born(int b) {
	try {
		if (b < 1850 && b> 0) cout << "Что-то не верится..." << endl;
		else if (b > 2022) throw "Вы ещё не родились";
		else if (b < 0) throw "Вы ввели отрицательное число!";
		else cout << "Спасибо!" << endl;
	}
	catch (const char* msg) {
		cout << msg << "\n";
	}
} */

void Class::born(int b) {
	try {
		if (b < 1900 && b> 0) cout << "Вам боллее ста лет? Поразительно..." << endl;
		else if (b > 2004 && b <= 2022) throw "Вам меньше 18 лет!";
		else if (b < 0) throw "Вы родились до нашей эры?)";
		else if (b > 2022) throw "Не врите!";
		else cout << "Вам: "<< 2022 - b << endl;
	}
	catch (const char* msg) {
		cout << msg << "\n";
	}
} 
