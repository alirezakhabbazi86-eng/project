#include <iostream>
#include "Branch.h"

Branch::Branch(const string& name, int commitId)
{
    this->name = name;
    this->commitId = commitId;
}
string Branch::getName() const
{
    return name;
}
int Branch::getCommitId() const
{
    return commitId;
}
void Branch::setCommitId(int commitId)
{
    this->commitId=commitId;
}