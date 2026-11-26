
#include "Repository.h"
#include <iostream>

Repository::Repository()
{
    initialized = false;
    nextCommitId = 1;
    currentBranch="";
}

void Repository::init()
{
    initialized = true;
}

bool Repository::isInitialized() const
{
    return initialized;
}

void Repository::addCommit(const Commit& commit)
{
    commits.push_back(commit);
}

int Repository::getCommitCount() const
{
    return commits.size();
}

int Repository::generateCommitId()
{
    return nextCommitId++;
}
Commit Repository::createCommit(int parentId, const string& message, const string& author, const string& timestamp)
{
    int id = generateCommitId();

    Commit commit(id, parentId, message, author, timestamp);

    commits.push_back(commit);

    Branch* branch = getBranchByName(currentBranch);

    if (branch != nullptr)
    {
        branch->setCommitId(id);
    }

    return commit;
}
const Commit* Repository::getCommitById(int id) const
{
    for (const Commit& commit : commits)
    {
        if (commit.getId() == id)
        {
            return &commit;
        }
    }

    return nullptr;
}
const Commit* Repository::getLastCommit() const
{
    if (commits.empty())
    {
        return nullptr;
    }

    return &commits.back();
}
void Repository::createBranch(const string& name)
{
    if (branchExists(name))
    {
        cout << "Branch already exists!" << endl;
        return;
    }

    const Commit* lastCommit = getLastCommit();

    int commitId = -1;

    if (lastCommit != nullptr)
    {
        commitId = lastCommit->getId();
    }

    Branch branch(name, commitId);

    branches.push_back(branch);

    cout << "Branch created successfully!" << endl;
}
bool Repository::branchExists(const string& name) const
{
    for (const Branch& branch : branches)
    {
        if (branch.getName() == name)
        {
            return true;
        }
    }

    return false;
}
Branch* Repository::getBranchByName(const string& name)
{
    for (Branch& branch : branches)
    {
        if (branch.getName() == name)
        {
            return &branch;
        }
    }

    return nullptr;
}
void Repository::listBranches() const
{
    cout << "Branches:" << endl;

    for (const Branch& branch : branches)
    {
        cout << branch.getName()<< "    Commit ID: "<< branch.getCommitId() << endl;
    }
}
bool Repository::setCurrentBranch(const string& name)
{
    if (!branchExists(name))
    {
        return false;
    }

    currentBranch = name;

    return true;



}
string Repository::getCurrentBranch() const
{
    return currentBranch;
}