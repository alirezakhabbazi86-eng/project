
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
    int nextCommitId;

public:
    Repository();
    void init();
    bool isInitialized() const;
    void addCommit(const Commit& commit);
    int getCommitCount() const;
    int generateCommitId();
    Commit createCommit(int parentId, const string& message,const string& author,const string& timestamp);
    const Commit* getCommitById(int id) const;
};

#endif
