#ifndef BRANCH_H
#define BRANCH_H

#include <string>
using namespace std;

class Branch
{private:
    string name;
    int commitId;
public:
   Branch(const string& name, int commitId);
   string getName() const;
   int getCommitId() const;
   void setCommitId(int commitId);

};
#endif