#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>
#include <iomanip>
#include <vector>
#include "var.h"
#include "out.h"
using namespace std;
using namespace nsOut;
using namespace nsVar;
int nsOut::Fond()
{
	vector<unik> s;
	vector<Stud> b;
	int fond = 0;
	int menuItem;
	cout << "yaka distsiplina7(1,2,3)";
	switch (menuItem)
case 1:
	for (int i = 0; i < 3; i++) {
		if (b[i].ser_bal >= 4)
			s.stipendiya[i] += fond;
	}
	break;
case 2:
	for (int i = 4; i < 6; i++) {
		if (b[i].ser_bal >= 4)
			b.stip[i] += fond;
	}
	break;
case 3:
	for (int i = 7; i < 9; i++) {
		if (b[i].ser_bal >= 4)
			b.stip[i] += fond;
	}
	break;
	rerurn fond
}
void nsOut::Print()
{
	for (int i = 0; i < N; i++)
	{
		cout << "No " << i + 1 << ":" << endl;
		cout << " vikl: " << p[i].vikl;
		cout << " dist: " << p[i].dist;
		cout << " posada: " << p[i].posada;
		cout << " plata: " << p[i].plata;
		if (i == 0) {
			for (int i = 0; i < 3; i++)
			{
				cout << " stud: " << c[i].prizv;
				cout << " ser_bal: " << c[i].ser_bal;
				cout << " stipend: " << c[i].stipend;
				cout << endl;
			}
		}
		if (i == 0) {

			for (int i = 3; i < 6; i++) {
				cout << " stud: " << c[i].prizv;
				cout << " ser_bal: " << c[i].ser_bal;
				cout << " stipend: " << c[i].stipend;
				cout << endl;
			}
		}
		if (i == 0) {
			for (int i = 6; i < 9; i++)
			{
				cout << " stud: " << c[i].prizv;
				cout << " ser_bal: " << c[i].ser_bal;
				cout << " stipend: " << c[i].stipend;
				cout << endl;
			}
		}

	}
}
void nsOut::File()
{
	ofstream file("unik.bin");
	vector<unik> s;
	vector<Stud> b;
	for (int i = 0; i < s.size(); ++i)
		file << s[i].vikl << " " << s[i].dist << " " << s[i].posada << " " << s[i].plata << b[i + 0].prizv << " " << b[i + 1].ser_bal << " " << b[i + 2].stipend << "\n";
	file.close();
}
void nsOut::Print()
{
	const char* fName = "unik.dat";
	cout << endl << "\nfile \"" << fName << "\":\n";
	ifstream f(fName, ios::binary);
	int x;
	while (f.read((char*)&x, sizeof(x)))
		cout << x << endl;
	cout << endl;
}
void nsOut::Balu(int N)
{
	int h[9];
	int k = 0;
	vector<Stud> b;
	for (int i = 0; i < 9; ++i) {
		if (b[i].ser_bal < N);
		++k;
		h[k] = i;
	}
	for (int i = 0; i < k; ++i)
		cout << h[i];
}