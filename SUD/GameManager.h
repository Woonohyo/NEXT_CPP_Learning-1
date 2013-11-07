#pragma once
#include "PC.h"
#include "GameMap.h"

// ������ ��� ����Ѵ�
class CGameManager
{
public:
	CGameManager(void);
	~CGameManager(void);

	void Init();		// �ʱ�ȭ
	void Run();			// ����
	void Release();		// ����ó��

protected:
	bool InputProc();	// Ű���� �Է� ó��
	void CreateMobs();	// ���� ��ġ�Ѵ�

protected:
	CGameMap	m_Map;

	CPC*	m_PC;		// �÷��̾� ĳ����
};

