#pragma once
#include "PC.h"

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

protected:
	CPC*	m_PC;		// �÷��̾� ĳ����
};

