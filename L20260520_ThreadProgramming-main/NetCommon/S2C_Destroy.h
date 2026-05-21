#pragma once
#include "Packet.h"
class S2C_Destroy : public IPacket
{

public:
	SOCKET ClientSocket;
	int X;
	int Y;

	void Parse(std::string InString) override;
	std::string ToString() override;
};

