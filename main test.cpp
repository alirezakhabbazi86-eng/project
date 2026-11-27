#include <iostream>
#include "Repository.h"

using namespace std;

int main()
{
    Repository repo;

    repo.init();

    repo.createCommit("First commit", "Ali", "2026-11-27");

    cout << "Commit count: "
         << repo.getCommitCount() << endl;

    return 0;
}