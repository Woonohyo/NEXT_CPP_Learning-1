#pragma once

// ĳ���� ��ġ ����ü
struct Position
{
	int x;
	int y;
};

// ���� ������
enum DIRECTION
{
	DIR_UP,
	DIR_DOWN,
	DIR_LEFT,
	DIR_RIGHT,
};

class CCharacter
{
public:
	CCharacter(void);
	virtual ~CCharacter(void);

	void	 SetPosition(Position pos) {m_position = pos;}
	void	 SetPosition(int x, int y);
	Position GetPosition() {return m_position;}
	void	 PrintPosition();

	void		SetName(std::string name) {m_Name = name;}
	std::string GetName() {return m_Name;}

	Position Move(DIRECTION dir);

protected:
	Position m_position;	
	std::string m_Name;
};

