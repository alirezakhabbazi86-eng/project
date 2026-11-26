#ifndef REPOSITORY_H
#define REPOSITORY_H

class Repository
{
private:
    bool initialized;

public:
    Repository();
    void init();
    bool isInitialized() const;
};

#endif