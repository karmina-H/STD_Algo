#include <iostream>
#include "Ride.h"

bool Ride::Full(int n)
{
	cnt += n;
	if (cnt <= Rnum)
		return true;
	else
		return false;
}

bool Ride::WaitTime(int m)
{
	if (m % Rmin == 0)
		return true;
	else
		return false;
}

bool Ride::HeightCheck(int h) const
{
	if (h >= Rheight)
		return true;
	else
		return false;

}

void Ride::WithParents() const
{
	if (RWPC == 1)
		Rheight -= 10;
	else
		std::cout << "부모님과 함께 하지 않으면 키로 인해 탑승 불가능" << std::endl;

}
