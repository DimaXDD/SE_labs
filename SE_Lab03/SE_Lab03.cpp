﻿#include <iostream>
#include <Windows.h>

using namespace std;
int sum(int x, int y) { return x + y; };

int(*f) (int, int);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//4
	bool a41 = false; //00
	bool a42 = true; //01
	//5,6
	char a5 = 'r'; //0x72 строка/столбик
	char a6 = 'р'; //0xF0 1251
	//7,8
	wchar_t a7 = L't'; //0x0074
	wchar_t a8 = L'т'; //0x0442
	//9
	short a91 = 35; // 0000 0000 0010 0011 = 0x0023
	short a92 = -35; // 0000 0000 0010 0011(прямой код) = 1111 1111 1101 1101(доп.код) = 0xffdd
	//10
	short a101 = 0x8000; // −32768 - пк: 0111 1111 1111 1111 - ок: 1000 0000 0000 0000 - дк: 1000 0000 0000 0001
	short a102 = 0x7FFF; // 0111 1111 1111 1111 = 32767
	//11
	unsigned short a111 = 0; //0x0000
	unsigned short a112 = 0xFFFF; // 1111 1111 1111 1111 = 65535
	//12
	int a121 = 36; // 0000 0000 0000 0000 0000 0000 0010 0100 = 0x00000023
	int a122 = -36; //1111 1111 1111 1111 1111 1111 1101 1100 = 0xffffffdc
	//13
	int a131 = 0x80000000; //-2147483647 = 0111 1111 1111 1111 1111 1111 1111 1111(прямой код) = 1000 0000 0000 0000 0000 0000 0000 0000(обр.код) = 1000 0000 0000 0000 0000 0000 0000 0001(доп.код)
	int a132 = 0x7FFFFFFF; // 2147483647 = 0111 1111 1111 1111 1111 1111 1111 1111
	//14
	unsigned int a141 = 0x00000000;
	unsigned int a142 = 0xFFFFFFFF; //4294967295 = 1111 1111 1111 1111 1111 1111 1111 1111
	//15
	long a151 = 37; //0000 0000 0000 0000 0000 0000 0010 0101 = 0x00000025
	long a152 = -37; //1111 1111 1111 1111 1111 1111 1101 1011 = 0xFFFFFFDB
	//16
	long a161 = 0x80000000; // -2147483647 = 0111 1111 1111 1111 1111 1111 1111 1111(прямой код) = 1000 0000 0000 0000 0000 0000 0000 0000(обр.код) = 1000 0000 0000 0000 0000 0000 0000 0001(доп.код)
	long a162 = 0x7FFFFFFF; // 2147483647 = 0111 1111 1111 1111 1111 1111 1111 1111
	//17
	unsigned long a171 = 0x00000000;
	unsigned long a172 = 0xFFFFFFFF; //4294967295 = 1111 1111 1111 1111 1111 1111 1111 1111
	//18
	float a181 = 27.000; // 0x41D80000 = 0000 0000 0000 0000 0000 0000 0001 1011
	float a182 = -27.000; // 0xC1D80000 = 0000 0000 0000 0000 0000 0000 0001 1011 = 1111 1111 1111 1111 1111 1111 1110 0101(дк)
	//19
	float a191 = a181 / 0; // 0x7F800000
	float a192 = a182 / 0; // 0xFF800000
	float a193 = sqrt(-2.0f); // 0xFFC00000
	//20
//Переменные
	char a201 = 'А'; //0xC0
	wchar_t a202 = L'А'; //0x0410
	short a203 = 26; //0x001A
	int a204 = 260; //0x00000104
	float a205 = 26.5; //0x414D0000
	double a206 = 26.0005; //0x41D40000
	//Указатели
	char* p201 = &a201; //0x0037FCAF
	wchar_t* p202 = &a202; //0x0037FCA0
	short* p203 = &a203; //0x0037FC94
	int* p204 = &a204; //0x0037FC88
	float* p205 = &a205; //0x0037FC7C
	double* p206 = &a206; //0x0037FC6C
	//Увеличение на 3
	char* p2011 = p201 + 3; //0x0037FCB2 = 0x0037FCAF + sizeof(char)*3 // +3
	wchar_t* p2022 = p202 + 3; //0x0037FCA6 = 0x0037FCA0 + sizeof(wchar_t)*3 // +6
	short* p2033 = p203 + 3; //0x0037FC9A = 0x0037FC94 + sizeof(short)*3 // +6
	int* p2044 = p204 + 3; //0x0037FC94 = 0x0037FC88 + sizeof(int)*3 // +12
	float* p2055 = p205 + 3; //0x0037FC88 = 0x0037FC7C + sizeof(float)*3 // +12
	double* p2066 = p206 + 3; //0x0037FC84 = 0x0037FC6C + sizeof(long)*3 // +24
	//21
	f = sum;
	int a21 = f(1, 8); //0x00000009
	return 0;
}

