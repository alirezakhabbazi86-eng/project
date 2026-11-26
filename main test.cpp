#include <iostream>
#include "Repository.h"

int main()
{
    Repository repo;

    std::cout << repo.isInitialized() << std::endl;

    repo.init();

    std::cout << repo.isInitialized() << std::endl;

    return 0;
}
