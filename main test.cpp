#include <iostream>
#include "Repository.h"

using namespace std;

int main()
{
    Repository repo;

    repo.init();

    repo.createCommit(-1, "First commit", "Ali", "2026-11-26");
    repo.createCommit(1, "Second commit", "Ali", "2026-11-26");

    const Commit* result = repo.getCommitById(2);

    if (result != nullptr)
    {
        cout << "Commit found!" << endl;
        cout << "ID: " << result->getId() << endl;
        cout << "Message: " << result->getMessage() << endl;
    }
    else
    {
        cout << "Commit not found!" << endl;
    }

    return 0;
}