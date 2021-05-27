#include "RequestHandlerFactory.h"

LoginRequestHandler* RequestHandlerFactory::createLoginRequestHandler()
{
    LoginRequestHandler* loginHandler = new LoginRequestHandler(*this, getLoginManager());
    return loginHandler;
}

MenuRequestHandler* RequestHandlerFactory::createMenuRequestHandler()
{
    MenuRequestHandler* menuHandler = new MenuRequestHandler(this->getRoomManager(), this->getStatisticsManager(), *this);
    return menuHandler;
}

LoginManager& RequestHandlerFactory::getLoginManager()
{
    return this->m_loginManager;
}

StatisticsManager& RequestHandlerFactory::getStatisticsManager()
{
    return this->m_StatisticsManager;
}

RoomManager& RequestHandlerFactory::getRoomManager()
{
    return this->m_roomManager;
}

RoomAdminRequestHandler* RequestHandlerFactory::createRoomAdminRequestHandler(Room room, LoggedUser user)
{
    return new RoomAdminRequestHandler(this->m_roomManager, room, user, *this);
}

