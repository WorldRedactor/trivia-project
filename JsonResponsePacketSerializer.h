#pragma once
#include "json.hpp"
#include <string>
#include <vector>
#include <bitset>
#include "Room.h"

struct LoginResponse
{
	unsigned int status;
};

struct SignupResponse
{
	unsigned int status;
};

struct ErrorResponse
{
	std::string message;
};

struct LogoutResponse
{
	unsigned int status;
};

struct GetRoomsResponse
{
	unsigned int status;
	std::vector<RoomData> rooms;
};

struct GetPlayersInRoomResponse
{
	std::vector<std::string> players;
};

struct GetHighScoreResponse
{
	unsigned int status;
	std::vector<std::string> statistics;
};

struct GetPersonalStatsResponse
{
	unsigned int status;
	std::vector<std::string> statistics;
};

struct JoinRoomResponse
{
	unsigned int status;
};

struct CreateRoomResponse
{
	unsigned int status;
};

class JsonResponsePacketSerializer
{
public:
	static std::vector<unsigned char> serializeResponse(LoginResponse LR);
	static std::vector<unsigned char> serializeResponse(SignupResponse SR);
	static std::vector<unsigned char> serializeResponse(ErrorResponse ER);
	static std::vector<unsigned char> serializeResponse(LogoutResponse LR);
	static std::vector<unsigned char> serializeResponse(GetRoomsResponse GRR);
	static std::vector<unsigned char> serializeResponse(GetPlayersInRoomResponse GPIRR);
	static std::vector<unsigned char> serializeResponse(GetHighScoreResponse GHSR);
	static std::vector<unsigned char> serializeResponse(GetPersonalStatsResponse GPSR);
	static std::vector<unsigned char> serializeResponse(JoinRoomResponse JRR);
	static std::vector<unsigned char> serializeResponse(CreateRoomResponse CRR);
};