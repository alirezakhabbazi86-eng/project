#ifndef CONFIGCOMMAND_H
#define COFINGCOMMAND_H

#include <string> 
#include "UserConfig.h"

class CONFIGCOMMAND
{
    private:
    UserConfug& userConfig;

    public:
    ConfigeCommand(UserConfig& config);
     
    void execute (const std::string& key,
    const std::string& value);
};

#endif