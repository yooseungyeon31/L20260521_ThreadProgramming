#include "pch.h"
#include "SessionManager.h"
#include <algorithm>

//현재 접속해있는 유저 한명에 대한 모든 정보.(소켓번호,이름.좌표)
void SessionManager::Add(Session InSession)
{
	SessionList.push_back(InSession);
}

//[][][][][][]
void SessionManager::Delete(Session InSession)
{
	SessionList.erase(std::find(SessionList.begin(), SessionList.end(), InSession));

	//for (auto Iter = SessionList.begin(); Iter != SessionList.end(); ++Iter)
	//{
	//	if ((*Iter).ClientSocket == InSession.ClientSocket)
	//	{
	//		SessionList.erase(Iter);
	//		break;
	//	}
	//}
}

Session* SessionManager::GetSession(int Index)
{
	// TODO: insert return statement here
	return &SessionList[Index];
}

Session* SessionManager::GetSession(const SOCKET& InClentSocket)
{
	// TODO: insert return statement here
	for (auto Iter = SessionList.begin(); Iter != SessionList.end(); ++Iter)
	{
		if ((*Iter).ClientSocket == InClentSocket)
		{
			return &(*Iter);
		}
	}

	return nullptr;
}

Session* SessionManager::GetSession(const Session& InSession)
{
	return &(*std::find(SessionList.begin(), SessionList.end(), InSession));
}