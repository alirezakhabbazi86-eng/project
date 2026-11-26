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
        cout << "Current branch: "
             << repo.getCurrentBranch() << endl;
    }

    return 0;
}