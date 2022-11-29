#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>
#include <vector>
#include <stdio.h>

using namespace std;
using namespace nsVar;
using namespace nsIn;
using namespace nsOut;

struct Stud 
{
	double ser_bal;
	int stipend;
	string prizv;
};
struct unik
{
	string vikl;
	string dist;
	Stud stud;	
	
	string posada;
	int plata;
};

void Create(unik * p, Stud* c, const int N)
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

void Redact(unik* p, Stud* c)
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
void Remove(unik* p, Stud* c)
{
	int i;
	cout << "yakiy nomer7" << endl;
	cin >> i;
	cout << "sho vidalyaem" << endl;
	string v = "дан≥ видалено";
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
		 p[i].vikl = v;
		break;
	case 2:
		p[i].dist = v;
		break;
	case 3:
		p[i].posada = v;
		break;
	case 4:
		p[i].plata = v;
		break;
	case 5:
		c[i].prizv = v;
		break;
	case 6:
		c[i].ser_bal = v;
		break;
	case 7:
		c[i].stipend = v;
		break;
	}
}
void Print(unik* p, Stud* c, const int N) 
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
				
				for (int i = 3; i < 6; i++){
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
void File(unik* p, Stud* c)
{
	ofstream file("unik.bin");
	vector<unik> s;
	vector<Stud> b;
	for (int i = 0; i < s.size(); ++i)
		file << s[i].vikl << " " << s[i].dist << " " << s[i].posada << " " << s[i].plata << b[i+0].prizv << " " << b[i+1].ser_bal << " " << b[i+2].stipend << "\n";
	file.close();
}
void Print()
{
	const char* fName = "unik.dat";
	cout << endl << "\nfile \"" << fName << "\":\n";
	ifstream f(fName, ios::binary);
	int x;
	while (f.read((char*)&x, sizeof(x)))
		cout << x << endl;
	cout << endl;
}
void Balu(unik* p, Stud* c, int N)
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
int Fond(unik* p, Stud* c)
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
	for (int i = 7; i < 9; i++){
		if (b[i].ser_bal >= 4)
			b.stip[i] += fond;
}
	break;
	rerurn fond
}

int main()
{
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	struct unik p[3];
	int n = sizeof(p) / sizeof(p[0]);
	struct Stud c[9];
	int n1 = sizeof(c) / sizeof(c[0]);
	int menuItem;
	do {
		
		cout << endl << endl << endl;
		cout << "¬ибер≥ть д≥ю:" << endl << endl;
		cout << " [1] - введенн€ даних з клав≥атури" << endl;
		cout << " [2] - вив≥д даних на екран" << endl;
		cout << " [3] - викладач≥ з дисципл≥нами середн≥й бал  менше N:" << endl;
		cout << " [4] - вилучити студент≥в, середн≥й бал €ких нижче за тр≥йку; " << endl;
		cout << " [5] - визначити стипенд≥альний фонд студент≥в €к≥ вивчають задану дисципл≥ну" << endl;
		cout << " [6] - зм≥нити щось" << endl;
		cout << "¬вед≥ть значенн€: "; cin >> menuItem;
		cout << endl << endl << endl;
		switch (menuItem)
		{
		case 1:
			Create(p, c, 3);
			File(p, c);
			break;
		case 2:
			Print(p, c, 3);
			break;
		case 3:
			int j;
			cin >> j;
			Balu(p, c, j);
			break;
		case 4: 
			Remove(p, c);
			break;
		case 5:
			cout << Fond(p, c);
			break;
		case 6:
			Redact(p, c);
		}
	} while (menuItem != 0);
return 0;
}