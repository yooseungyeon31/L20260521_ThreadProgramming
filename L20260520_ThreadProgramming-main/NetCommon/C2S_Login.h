#pragma once
#include "Packet.h"
class C2S_Login : public IPacket
{
public:

	//받아올거 ID랑 키
	std::string UserID;
	std::string HashKey;


	void Parse(std::string InString) override;
	std::string ToString() override;
};

