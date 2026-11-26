#include <iostream>
#include "UserCofing.h"

int main()
{
    UserConfig user;

    user.setUserName("melika");
    user.setUserEmail("melika@gmail.com");

    std::cout << user.getUserName() << std::endl;
    std::cout << user.getUserEmail() << std::endl;

    return 0;
}