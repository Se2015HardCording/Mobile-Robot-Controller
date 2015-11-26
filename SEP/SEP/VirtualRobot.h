#include <Common.h>
class VirtualRobot
{
public:
	Position CurrentPosition;
	int CurrentDirection;
	void CheckSensingData();
	void VirtualMove();
	void ComputeOffset();
	void InitVirtualRobot();
private:
	int state;
};