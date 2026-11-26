#ifndef CONFIGCOMMAND_H
#define COFINGCOMMAND_H

#include <string> 
#include "UserCofing.h"

class CONFIGCOMMAND
{
    private:
    UserConfig& userConfig;

    public:
    int ConfigeCommand(UserConfig& config);
     
    void execute (const std::string& key,
    const std::string& value);
};

#endif