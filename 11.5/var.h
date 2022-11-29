#pragma once
#include <string>
using namespace std;
namespace nsVar {
	extern struct unik p[3];
	extern int n = sizeof(p) / sizeof(p[0]);
	extern struct Stud c[9];
	extern int n1 = sizeof(c) / sizeof(c[0]);
	extern struct Stud
	{
		double ser_bal;
		int stipend;
		string prizv;
	};
	extern struct unik
	{
		string vikl;
		string dist;
		Stud stud;

		string posada;
		int plata;
	};
}