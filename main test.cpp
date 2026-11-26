
#include <iostream>
#include "Repository.h"

using namespace std;

int main()
{
    Repository repo;

    repo.init();

    Commit commit1(1, -1, "First commit",
                   "melika", "2026-11-26");

    Commit commit2(2, 1, "Second commit",
                   "melika", "2026-11-26");

    repo.addCommit(commit1);
    repo.addCommit(commit2);

    cout << "Repository initialized: "
         << repo.isInitialized() << endl;

    cout << "Commit count: "
         << repo.getCommitCount() << endl;

    return 0;
}
