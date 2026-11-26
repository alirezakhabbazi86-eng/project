
#include "Repository.h"

Repository::Repository()
{
    initialized = false;
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
