
#ifndef COMMIT_H
#define COMMIT_H

#include <string>

using namespace std;

class Commit
{
private:
    int id;
    int parentId;

    string message;
    string author;
    string timestamp;

public:
    Commit(int id, int parentId,
           const string& message,
           const string& author,
           const string& timestamp);

    int getId() const;
    int getParentId() const;

    string getMessage() const;
    string getAuthor() const;
    string getTimestamp() const;
};

#endif
