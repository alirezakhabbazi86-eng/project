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