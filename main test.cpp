#include <iostream>
#include "Repository.h"

using namespace std;

int main()
{
    Repository repo;

    repo.init();

    Commit commit1 = repo.createCommit(
        -1, "First commit", "melika", "2026-11-26");

    Commit commit2 = repo.createCommit(
        commit1.getId(), "Second commit", "melika", "2026-11-26");

    cout << "First Commit ID: " << commit1.getId() << endl;
    cout << "Second Commit ID: " << commit2.getId() << endl;

    cout << "Commit count: " << repo.getCommitCount() << endl;

    return 0;
}