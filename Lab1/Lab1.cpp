#include <iostream>
#include <Windows.h>
#define chislo 9
using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a = 1, menu1(), menu2();

	do {
		//������� ����
		menu1();
		char n;
		cin >> n;
		cout << "\n";
		//�������� �� ���� ����������� ��������
		while ('2' < n || n < '1') {
			system("cls");
			cout << "�� ����� ������������ ������� ����������\n\n\n";
			menu2();
			cin >> n;
			cout << "\n";
		}
		system("cls");
		//�������� ���������� ���������----------------------------------------------------------------------------------------------

		switch (n) {

			//���������� � �������� ���� ����----------------------------------------------------------------------------------------

		case '1': {
			cout << "������� ���� � ������� ��������: ";
			static char data[chislo];
			cin >> data;
			//�������� ������������ ����
			for (int i = 0; i < 8; i++) {

				if (data[i] > '9' || data[i] < '0') {
					system("cls");
					cout << "�� ����������� ����� ����\n";
					cout << "������� ���� � ������� ��������: ";
					cin >> data;
				}
			}
			int dol;
			//���������� ������ �� ����
			int mes = (data[2] - '0') * 10 + data[3] - '0';
			//���������� ��� �� ����
			int den = (data[0] - '0') * 10 + data[1] - '0';
			//��� �������� ������������ ����
			int cel = 0;
			int god = (data[4] - '0') * 1000 + (data[5] - '0') * 100 + (data[6] - '0') * 10 + data[7] - '0';
			int Checking(int x, int y);
			while (Checking(god, cel) == 0 && mes == 2 && den >= 29) {
				system("cls");
				cout << "�� ����������� ����� ����\n";
				cout << "������� ���� � ������� ��������: ";
				cin >> data;
				//���������� ������ �� ����
				mes = (data[2] - '0') * 10 + data[3] - '0';
				//���������� ��� �� ����
				den = (data[0] - '0') * 10 + data[1] - '0';
				god = (data[4] - '0') * 1000 + (data[5] - '0') * 100 + (data[6] - '0') * 10 + data[7] - '0';
			}
			while (data[0] > '3' || data[0] < '0' || mes > 12 || mes < 1 || den < 1 || den > 31) {
				system("cls");
				cout << "�� ����������� ����� ����\n";
				cout << "������� ���� � ������� ��������: ";
				cin >> data;
				//���������� ������ �� ����
				mes = (data[2] - '0') * 10 + data[3] - '0';
				//���������� ��� �� ����
				den = (data[0] - '0') * 10 + data[1] - '0';
				god = (data[4] - '0') * 1000 + (data[5] - '0') * 100 + (data[6] - '0') * 10 + data[7] - '0';

			}
			//���������� ���� �� ����
			god = (data[4] - '0') * 1000 + (data[5] - '0') * 100 + (data[6] - '0') * 10 + data[7] - '0';
			system("cls");
			//���� ���� ��������----------------------------------------------------------------------------------------------------

			cout << "������� ���� �������� � ������� ��������: ";
			static char happy[chislo];
			cin >> happy;
			//�������� ������������ ����
			for (int i = 0; i < 8; i++) {

				if (happy[i] > '9' || happy[i] < '0') {
					system("cls");
					cout << "�� ����������� ����� ����\n";
					cout << "������� ���� �������� � ������� ��������: ";
					cin >> happy;

				}
			}
			//���������� ������ �� ����
			int meshappy = (happy[2] - '0') * 10 + happy[3] - '0';
			//���������� ��� �� ����
			int denhappy = (happy[0] - '0') * 10 + happy[1] - '0';
			//��� �������� ������������ ����
			int Checking(int x, int y);
			int godhappy = (happy[4] - '0') * 1000 + (happy[5] - '0') * 100 + (happy[6] - '0') * 10 + happy[7] - '0';
			while (Checking(godhappy, cel) == 0 && meshappy == 2 && denhappy == 29) {
				system("cls");
				cout << "�� ����������� ����� ����\n";
				cout << "������� ���� � ������� ��������: ";
				cin >> data;
				//���������� ������ �� ����
				mes = (data[2] - '0') * 10 + data[3] - '0';
				//���������� ��� �� ����
				den = (data[0] - '0') * 10 + data[1] - '0';
				godhappy = (happy[4] - '0') * 1000 + (happy[5] - '0') * 100 + (happy[6] - '0') * 10 + happy[7] - '0';
			}
			while (happy[0] > '3' || happy[1] < '0' || meshappy > 12 || meshappy < 1 || denhappy < 1 || denhappy > 31) {
				system("cls");
				cout << "�� ����������� ����� ����\n";
				cout << "������� ���� �������� � ������� ��������: ";
				cin >> happy;
				//���������� ������ �� ����
				meshappy = (happy[2] - '0') * 10 + happy[3] - '0';
				//���������� ��� �� ����
				denhappy = (happy[0] - '0') * 10 + happy[1] - '0';
				godhappy = (happy[4] - '0') * 1000 + (happy[5] - '0') * 100 + (happy[6] - '0') * 10 + happy[7] - '0';
			}
			//���������� ���� �� ����
			godhappy = (happy[4] - '0') * 1000 + (happy[5] - '0') * 100 + (happy[6] - '0') * 10 + happy[7] - '0';

			//----------------------------------------------------------------------------------------------------------------------

			//����� ���������� � ����
			system("cls");
			cout << "���� �������� ����: " << den << ":" << mes << ":" << god << "\n";
			cout << "��� ���� ��������: " << denhappy << ":" << meshappy << ":" << godhappy << "\n";
			cout << "�������������� �������� ���� ����\n";
			cel = 0;
			//�������� �� �������������
			int Checking(int x, int y);
			if (Checking(god, cel) == 1) {
				cout << "������ ��� �������� �����������\n";
			}
			else {
				cout << "������ ��� �� �������� �����������\n";
			}
			//���������� ����������� ������ ��� � ����
			int quantity(int x, int y, int z);
			cout << "�������� ���� ���� �������� " << quantity(mes, den, Checking(god, cel)) << " � ����\n";

			//���������� ���������� ���� �� ������ ���������� ��� ��������

			if (quantity(mes, den, Checking(god, cel)) < quantity(meshappy, denhappy, Checking(god, cel))) {

				int daycout = quantity(mes, den, Checking(god, cel));
				int dayhappys = quantity(meshappy, denhappy, Checking(god, cel));
				int colvoday = dayhappys - daycout;
				cout << "�� ���������� ������ ��� �������� " << colvoday << " ���(��)\n";
			}
			else if (quantity(mes, den, Checking(god, cel)) == quantity(meshappy, denhappy, Checking(god, cel))) {
				cout << "����������, � ��� ������� ���� ��������\n";
			}
			else {

				int daycout = quantity(mes, den, Checking(god, cel));
				int jatgod = god + 1;
				int dayhappys = quantity(meshappy, denhappy, Checking(jatgod, cel));
				int daygod = 365 + Checking(god, cel);
				int daystar = daygod - daycout;
				int colvoday = dayhappys + daystar;
				cout << "�� ���������� ������ ��� �������� " << colvoday << " ���(��)\n";
			}
			cout << "\n\n";
			system("pause");
			system("cls");
			break;
		}
				//����� �� ��������� :(---------------------------------------------------------------------------------------------

		case '2': {
			system("cls");
			cout << "��������� ���������\n";
			return 0;
		}
		}
	} while (a != 0);
	return 0;
}

//�������---------------------------------------------------------------------------------------------------------------------------

//������� ����
int menu1() {
	using namespace std;
	cout << "������, ������ ������� ���������� ���������:\n";
	cout << "1 - ���������� � �������� ���� ����\n";
	cout << "2 - ����� �� ���������\n";
	cout << "\n";
	cout << "��� ������� ���������� ���������: ";
	return 0;
};

//����������� � ����
int menu2() {
	int menu1();
	using namespace std;
	system("cls");
	cout << "�� ����� ������������ ������� ����������\n";
	menu1();
	return 0;
};

//������� �������� ���� �� �������������
int Checking(int x, int y) {
	using namespace std;
	if (x % 4 == 0 && x % 400 != 100 && x % 400 != 200 && x % 400 != 300) {
		y = 1;
	}
	else {
		y = 0;
	}
	return y;
}

//������� ����������� ���������� ����� ���������� ���
int quantity(int x, int y, int z) {
	using namespace std;
	int Mounthes[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int sumday = 0;
	if (z == 1) {
		Mounthes[1] = 29;
	}
	for (int i = 0; i < x - 1; i++) {
		sumday = sumday + Mounthes[i];
	}
	sumday = sumday + y;

	return sumday;
}
