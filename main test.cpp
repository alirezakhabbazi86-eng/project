#include <iostream>
#include "Repository.h"

using namespace std;

int main()
{
    Repository repo;

    repo.init();

    repo.createCommit(-1, "First commit", "Ali", "2026-11-26");

    repo.createBranch("main");
    repo.createBranch("dev");

    if (repo.setCurrentBranch("dev"))
    {
        cout << "Branch switched successfully!" << endl;
    }
    else
    {
        cout << "Branch not found!" << endl;
    }

    if (repo.setCurrentBranch("test"))
    {
        cout << "Branch switched successfully!" << endl;
    }
    else
    {
        cout << "Branch not found!" << endl;
    }

    return 0;
}