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

bool Ride::HeightCheck() 
{
	if (GetHeight() >= Rheight)
		return true;
	else
		return false;

}
void Ride::WithParents() 
{
	if (WPCReturn() == 1)
		Rheight -= 10;
	else
		std::cout << "�θ�԰� �Բ� ���� ������ Ű�� ���� ž�� �Ұ���" << std::endl;

}