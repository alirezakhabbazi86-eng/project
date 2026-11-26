
#include "Commit.h"

Commit::Commit(int id, int parentId,
               const string& message,
               const string& author,
               const string& timestamp)
{
    this->id = id;
    this->parentId = parentId;
    this->message = message;
    this->author = author;
    this->timestamp = timestamp;
}

int Commit::getId() const
{
    return id;
}

int Commit::getParentId() const
{
    return parentId;
}

string Commit::getMessage() const
{
    return message;
}

string Commit::getAuthor() const
{
    return author;
}

string Commit::getTimestamp() const
{
    return timestamp;
}
