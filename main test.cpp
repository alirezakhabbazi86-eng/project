#include <iostream>
#include "Repository.h"

using namespace std;

int main()
{
    Repository repo;

    repo.init();

    repo.createCommit(-1, "First commit", "Ali", "2026-11-26");

    repo.createBranch("main");

    repo.setCurrentBranch("main");

    cout << "Before commit: "
         << repo.getBranchByName("main")->getCommitId()
         << endl;

    repo.createCommit(1, "Second commit", "Ali", "2026-11-26");

    cout << "After commit: "
         << repo.getBranchByName("main")->getCommitId()
         << endl;

    return 0;
}