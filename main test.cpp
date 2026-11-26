
#include <iostream>
#include "Repository.h"

using namespace std;

int main()
{
    Repository repo;

    repo.init();

    int id1 = repo.generateCommitId();
    int id2 = repo.generateCommitId();

    cout << "First Commit ID: " << id1 << endl;
    cout << "Second Commit ID: " << id2 << endl;

    return 0;
}
