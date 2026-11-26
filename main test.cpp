
#include <iostream>
#include "Commit.h"

using namespace std;

int main()
{
    Commit commit(1, -1, "First commit",
                  "melika",
                  "2026-11-25");

    cout << "Commit ID: " << commit.getId() << endl;
    cout << "Parent ID: " << commit.getParentId() << endl;
    cout << "Message: " << commit.getMessage() << endl;
    cout << "Author: " << commit.getAuthor() << endl;
    cout << "Timestamp: " << commit.getTimestamp() << endl;

    return 0;
}
