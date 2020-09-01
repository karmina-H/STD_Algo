#ifndef __RIDE_H
#define __RIDE_H
#include "Person.h"
#include<iostream>
using namespace std;

static int cnt;

class Ride :public Person
{
	int Rcost, Rnum, Rmin;
	int Rage;//정원 9, min 10분
	mutable int Rheight;
public:
	Ride() { Rnum = 10, Rmin = 10, Rage = 14, Rheight = 150; }
	Ride(int n, int m, int myAge) : Rnum(n), Rmin(m), Rage(myAge) {}
	Ride(int n, int m, int myAge, int h) : Rnum(n), Rmin(m), Rage(myAge), Rheight(h) {} //오버로딩

	void Check()
	{
		if (HeightCheck() == true)
		{
			if (Full(num) && WaitTime(min))
				cout << "탑승하세요" << endl;
			else if (WaitTime(min) == 0 or Full(num) == 0)
				if (WaitTime(min) == 0)
					cout << min % 10 << "분 뒤 탑승 가능" << endl;
				else if (Full(num) == 0)
					cout << "정원으로 인해 탑승 불가능" << endl;
		}
		else
			cout << "키로 인해 탑승 불가능합니다." << endl;
	}
	bool Full(int n);

	bool WaitTime(int m);

	bool HeightCheck();

	void WithParents();

	int WPCReturn()
	{
		int a = GetWPC();
		return a;
	}

};

#endif

