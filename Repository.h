
#ifndef REPOSITORY_H
#define REPOSITORY_H

#include <vector>
#include "Commit.h"

using namespace std;

class Repository
{
private:
    bool initialized;
    vector<Commit> commits;

public:
    Repository();

    void init();

    bool isInitialized() const;

    void addCommit(const Commit& commit);

    int getCommitCount() const;
};

#endif
