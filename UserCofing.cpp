#include "UserCofing.h"

UserConfig ::UserConfig ()
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
std::string UserConfig ::getUserEmail() const
{
    return userEmail;
}
