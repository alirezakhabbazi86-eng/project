
#ifndef REPOSITORY_H
#define REPOSITORY_H

#include <vector>
#include "Commit.h"
#include "Branch.h"
using namespace std;

class Repository
{
private:
    bool initialized;
    vector<Commit> commits;
    int nextCommitId;
    vector<Branch>branches;
    bool branchExists(const string& name) const;
    string currentBranch;

public:
    Repository();
    void init();
    bool isInitialized() const;
    void addCommit(const Commit& commit);
    int getCommitCount() const;
    int generateCommitId();
    Commit createCommit(int parentId, const string& message,const string& author,const string& timestamp);
    Commit createCommit(const string& message,const string& author,const string& timestamp);
    const Commit* getCommitById(int id) const;
    const Commit* getLastCommit() const;
   void createBranch(const string& name);
   void listBranches() const;
       Branch* getBranchByName(const string& name);
   bool setCurrentBranch(const string& name);
   string getCurrentBranch() const;
};

#endif
