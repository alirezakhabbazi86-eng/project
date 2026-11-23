#include <iostreem>
#include "UserConfig_h"

int main()
{
    UserConfig user;

    user.setUserName("melika");
    User.setUserEmail("melika@gmail.com");

    std::cout << user.getUserName() << std::endl;
    std::cout << user.getUserEmail() << std::endl;

    return 0;
}