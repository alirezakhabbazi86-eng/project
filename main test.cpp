#include <iostream>
#include "Repository.h"

using namespace std;

int main()
{
    Repository repo;

    repo.init();

    repo.createCommit(-1, "First commit", "Ali", "2026-11-26");
    repo.createCommit(1, "Second commit", "Ali", "2026-11-26");
    repo.createCommit(2, "Third commit", "Ali", "2026-11-26");

    const Commit* last = repo.getLastCommit();

    if (last != nullptr)
    {
        cout << "Last Commit ID: " << last->getId() << endl;
        cout << "Message: " << last->getMessage() << endl;
    }
    else
    {
        cout << "No commits found!" << endl;
    }

    return 0;
}
