#pragma once

// Ÿ�� ũ��
#define MAP_SIZE 10

// �� Ÿ�� ������ ���� ����ü
struct MapInfo
{

};

// ������ ���� �����Ѵ�.
class CGameMap
{
public:
	CGameMap(void);
	~CGameMap(void);

protected:
	MapInfo m_MapInfo[MAP_SIZE][MAP_SIZE];
};

