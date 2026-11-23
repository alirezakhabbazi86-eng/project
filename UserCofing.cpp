#include "UserConfig.h"

UserCofig::UserCofig()
{
    userName = "";
    userEmail = "";
}
void UserConfig::setUserName(const std::string& name)
{
    userName = name;
}
void UserConfig::setUserEmail(const std::string& email)
{
    userEmail = email;
}

std::string UserConfig::getUserName() const 
{
    return userName;
}
std::string UserCofing::getUserEmail() const
{
    return userEmail;
}
