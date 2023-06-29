#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

char* enter_pname() {
	char* filename = new char[100];
	cout << "Enter file name(if file doesn`t exist it will be created): ";
	cin.getline(filename, 100);
	return filename;
}