// Exam.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "UtilProject.h"

class Boo
{
	SINGLETON(Boo);

public: 
	void Test()
	{
		printf_s("Hello~ \n");
	}
};


int _tmain(int argc, _TCHAR* argv[])
{
	Boo::GetInstance()->Test();

	getchar();
	return 0;
}

