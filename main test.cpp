#include <iostream>
#include "Repository.h"

using namespace std;

int main()
{
    Repository repo;

    repo.init();

    repo.createCommit(-1, "First commit", "Ali", "2026-11-26");
    repo.createCommit(1, "Second commit", "Ali", "2026-11-26");

    repo.createBranch("main");

    cout << "Branch created successfully!" << endl;

    return 0;
}