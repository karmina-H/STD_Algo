#ifndef __RIDE_H
#define __RIDE_H
#include<iostream>
using namespace std;
#include "Menu.h"
#include "Person.h"

static int cnt;
class Ride
{
private:
	int Rcost, Rnum, Rmin;
	int Rage;//정원 9, min 10분
	mutable int Rheight;
	int RWPC;
public:
	Ride() { Rnum = 10, Rmin = 10, Rage = 14, RWPC = 1, Rheight = 150; }
	Ride(int n, int m, int myAge, int wpc) : Rnum(n), Rmin(m), Rage(myAge), RWPC(wpc) {}
	Ride(int n, int m, int myAge, int wpc, int h) : Rnum(n), Rmin(m), Rage(myAge), RWPC(wpc), Rheight(h) {} //오버로딩

	enum AGE { CHILED = 1, STUDENT, ADULT, GRAND, EMPTY };

	inline int SaleRide(int myAge, int n) //티켓팔기
	{
		int CheckAge = 0;
		int cost;
		if (myAge > 0)
		{
			if (myAge <= 13) //어린이
				CheckAge = AGE::CHILED;
			else if (myAge <= 18)
				CheckAge = AGE::STUDENT;
			else if (myAge <= 55)
				CheckAge = AGE::ADULT;
			else
				CheckAge = AGE::GRAND;
		}
		else
			CheckAge = AGE::EMPTY;

		if (CheckAge == 1)
			cost = 1000;
		else if (CheckAge == 2)
			cost = 2000;
		else if (CheckAge == 3)
			cost = 3000;
		else if (CheckAge == 4)
			cost = 1500;
		else
			cost = 3000;

		return cost*n;
	}

	Ride& SetSeat(int num)
	{
		Rnum -= num;
		return *this; //this
	}

	void Showdata()
	{
		cout << "탑승하신 놀이기구 총 개수는" << cnt << "개 입니다" << endl;
	}

	bool Full(int n); //정원 찼는지
	bool WaitTime(int m); //시간
	bool HeightCheck(int h) const; //키 체크
	void WithParents() const; //부모님과 함께왔는지
};

#endif
