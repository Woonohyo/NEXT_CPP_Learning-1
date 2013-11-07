#include "stdafx.h"
#include "GameManager.h"



CGameManager::CGameManager(void)
{
	m_PC = new CPC();
}


CGameManager::~CGameManager(void)
{

	delete m_PC;
}

void CGameManager::Init()
{
	printf("[Game Start!!]\n");

	srand( (unsigned)time( NULL ) );
	CreateMobs();		
		
	// ��ġ ����
	m_PC->SetPosition(5, 5);
	m_PC->PrintPosition();
		
}

void CGameManager::Run()
{
	while(InputProc())
	{

	}
}

void CGameManager::Release()
{
	printf("[Game Over!!]\n");
}

bool CGameManager::InputProc()
{

	// ��Ʈ������ ����� �Է� �ޱ�
	std::string strInput;
	getline(std::cin, strInput);

	printf("Input : %s\n", strInput.c_str());	

	// ĳ���� �̵� ó�� ����
	if(strInput == "W" || strInput == "w")
	{
		m_PC->Move(DIR_UP);
	}
	else if(strInput == "A" || strInput == "a")
	{
		m_PC->Move(DIR_LEFT);
	}
	else if(strInput == "S" || strInput == "s")
	{
		m_PC->Move(DIR_DOWN);
	}
	else if(strInput == "D" || strInput == "d")
	{
		m_PC->Move(DIR_RIGHT);
	}

	m_PC->PrintPosition();

	// ���� ���� ó��
	if(strInput == "Q" || strInput == "q")
		return false;

	return true;
}

void CGameManager::CreateMobs()
{
	// ����) �������� �� �������� 1/4 ��ŭ�� ���� ���� ��ġ�϶�.
	
	int mobCount = (MAP_SIZE * MAP_SIZE) / 4;

	while (mobCount > 0)
	{
		int x = rand() % MAP_SIZE;
		int y = rand() % MAP_SIZE;

		MapInfo* pMapInfo = m_Map.GetMapInfo(x, y);
		if(pMapInfo->pMob == nullptr)
		{
			pMapInfo->pMob = new CMob();

			// �̸� ����
			char buf[32] = {0,};
			sprintf_s(buf, "Mob %d", mobCount);
			pMapInfo->pMob->SetName(buf);

			--mobCount;
		}
	}

	printf_s("<< Mob Create Complete! >>\n");
}
