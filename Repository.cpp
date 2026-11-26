
#include "Repository.h"

Repository::Repository()
{
    initialized = false;
    nextCommitId = 1;
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
Commit Repository::createCommit(int parentId,const string& message,const string& author,const string& timestamp)
{
    int id = generateCommitId();

    Commit commit(id, parentId, message, author, timestamp);

    commits.push_back(commit);

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
    const Commit* lastCommit = getLastCommit();

    int commitId = -1;

    if (lastCommit != nullptr)
    {
        commitId = lastCommit->getId();
    }

    Branch branch(name, commitId);

    branches.push_back(branch);
}