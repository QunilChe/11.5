#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>
#include <iomanip>
#include <vector>
#include "var.h"
#include "in.h"
using namespace std;
using namespace nsIn;
using namespace nsVar;

void nsIn::Create()
{
	for (int i = 0; i < 3; i++)
	{
		cout << "No " << i + 1 << ":" << endl;
		cin.get(); // очищуЇмо буфер клав≥атури Ц бо залишаютьс€ символи
		cin.sync(); // "к≥нець р€дка", €к≥ не дають ввести наступний л≥терний р€док
		cout << " vikl: "; cin >> p[i].vikl;
		cout << " dist: "; cin >> p[i].dist;
		cout << " posada: "; cin >> p[i].posada;
		cout << " plata: "; cin >> p[i].plata;

		if (i == 0) {
			for (int i = 0; i < 3; i++) {
				cout << " stud: "; cin >> c[i].prizv;
				cout << " ser_bal: "; cin >> c[i].ser_bal;
				cout << " stipend: "; cin >> c[i].stipend;
			}
		}
		if (i == 1) {
			for (int i = 3; i < 6; i++) {
				cout << " stud: "; cin >> c[i].prizv;
				cout << " ser_bal: "; cin >> c[i].ser_bal;
				cout << " stipend: "; cin >> c[i].stipend;
			}
		}
		if (i == 2) {
			for (int i = 6; i < 9; i++) {
				cout << " stud: "; cin >> c[i].prizv;
				cout << " ser_bal: "; cin >> c[i].ser_bal;
				cout << " stipend: "; cin >> c[i].stipend;
			}
		}
		cout << endl;
	}
}
void nsIn::Redact()
{
		int i;
	cout << "yakiy nomer7" << endl;
	cin >> i;
	cout << "kogo minyaem7" << endl;

	cin.get(); // очищуЇмо буфер клав≥атури Ц бо залишаютьс€ символи
	cin.sync(); // "к≥нець р€дка", €к≥ не дають ввести наступний л≥терний р€док
	cout << "1 vikl: "; cin >> p[i].vikl;
	cout << "2 dist: "; cin >> p[i].dist;
	cout << "3 posada: "; cin >> p[i].posada;
	cout << "4 plata: "; cin >> p[i].plata;

	cout << "5 stud: "; cin >> c[i].prizv;
	cout << "6 ser_bal: "; cin >> c[i].ser_bal;
	cout << "7 stipend: "; cin >> c[i].stipend;
	cout << endl;
	int menuItem;
	cin >> menuItem;
	cout << endl << endl << endl;
	switch (menuItem)
	{
	case 1:
		cin >> p[i].vikl;
		break;
	case 2:
		cin >> p[i].dist;
		break;
	case 3:
		cin >> p[i].posada;
		break;
	case 4:
		cin >> p[i].plata;
		break;

	case 5:
		cin >> c[i].prizv;
		break;
	case 6:
		cin >> c[i].ser_bal;
		break;
	case 7:
		cin >> c[i].stipend;
		break;
	}

}
void nsIn::Remove()
{
	int i;
	cout << "yakiy nomer7" << endl;
	cin >> i;
	cout << "sho vidalyaem" << endl;
	string v;
	cin.get(); // очищуЇмо буфер клав≥атури Ц бо залишаютьс€ символи
	cin.sync(); // "к≥нець р€дка", €к≥ не дають ввести наступний л≥терний р€док
	cout << "1 vikl: "; cin >> p[i].vikl;
	cout << "2 dist: "; cin >> p[i].dist;
	cout << "3 posada: "; cin >> p[i].posada;
	cout << "4 plata: "; cin >> p[i].plata;

	cout << "5 stud: "; cin >> c[i].prizv;
	cout << "6 ser_bal: "; cin >> c[i].ser_bal;
	cout << "7 stipend: "; cin >> c[i].stipend;
	cout << endl;
	int menuItem;
	cin >> menuItem;
	cout << endl << endl << endl;
	switch (menuItem)
	{
	case 1:
		v = p[i].vikl;
		break;
	case 2:
		v = p[i].dist;
		break;
	case 3:
		v = p[i].posada;
		break;
	case 4:
		v = p[i].plata;
		break;

	case 5:
		v = c[i].prizv;
		break;
	case 6:
		v = c[i].ser_bal;
		break;
	case 7:
		v = c[i].stipend;
		break;
	}
	const char* filename = "unik.dat";
	ifstream f(filename, ios::binary);
	ofstream t("TMP.DAT", ios::binary);
	int x;
}