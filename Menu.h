#ifndef __MENU_H_
#define __MENU_H_
#include<iostream>
#include "Ticket.h"
#include "Person.h"
#include "Ride.h"
using namespace std;

class Menu
{
private:
	char* WhatMenu;	// �޴� �̸�
	int cost;		// �ش� �޴� ����
	int result;		// �� ����


public:
	Menu();			// ������	
	~Menu();		// �Ҹ���

	void ShowMenu(void);
	int Calculate(const char* MenuName, int num); // �޴� �̸��� �޾Ƽ� �ش� �޴��� �������� ��ȯ
	void ShowOfferResult(void);			// ���� ��� ���

};

#endif
