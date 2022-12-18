#pragma once
#define SpaceX 10
#define SpaceY 10

const int a = SpaceX + 2;
const int b = SpaceY + 2;
class lifr
{
	int space[a][b];
	int checkRule(int i, int j);
	void printSpace();
	void generateLife();
public:
	lifr();
	~lifr();
	void runLife();
};

