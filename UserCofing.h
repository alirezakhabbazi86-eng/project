#ifndef USERCONFIG_H
#define USERCONFIG_H

#include <string>

class UserConfig 
{
    private:
    std :: string userName;
    std :: string userEmail;

    public:
    UserConfig();

    void setUserName(const std :: string& name);
    void setUserEmail(const std :: string& email);
    
    std :: string getUserName() const;
    std :: string getUserEmail() const;
};
#endif 
