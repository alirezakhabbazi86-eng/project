#include <iostream>
#include "Branch.h"

using namespace std;

int main()
{
    Branch branch("main", 1);

    cout << "Branch Name: " << branch.getName() << endl;
    cout << "Commit ID: " << branch.getCommitId() << endl;

    branch.setCommitId(2);

    cout << "\nAfter update:" << endl;
    cout << "Commit ID: " << branch.getCommitId() << endl;

    return 0;
}