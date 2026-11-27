#include <iostream>
#include "Repository.h"

using namespace std;

int main()
{
    Repository repo;

    repo.init();

    repo.createCommit("First commit", "Ali", "2026-11-27");

    repo.createBranch("main");
    repo.setCurrentBranch("main");

    repo.createCommit("Second commit", "Ali", "2026-11-27");

    const Commit* commit = repo.getLastCommit();

    if (commit != nullptr)
    {
        cout << "Commit ID: " << commit->getId() << endl;
        cout << "Parent ID: " << commit->getParentId() << endl;
    }

    return 0;
}