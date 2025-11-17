#include <string>
#include <vector>

#ifndef CPKGS_CLI_H
#define CPKGS_CLI_H

class CLI
{
public:
    static auto ArgvToVector(int argc, char *argv[]) -> std::vector<std::string>;
    static auto GetSubcommand(std::vector<std::string> v) -> std::string;
    static auto GetOptions(std::vector<std::string> v) -> std::vector<std::string>;
};

#endif // CPKGS_CLI_H