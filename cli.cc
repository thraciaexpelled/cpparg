#include <string>
#include <vector>

#include "cli.h"

auto CLI::ArgvToVector(int argc, char *argv[]) -> std::vector<std::string>
{
	std::vector<std::string> convertedVector;
	for (int i = 0; i < argc; ++i)
	{
		convertedVector.push_back(argv[i]);
	}
	return convertedVector;
}

auto CLI::GetSubcommand(std::vector<std::string> v) -> std::string
{
	return v[1];
}

auto CLI::GetOptions(std::vector<std::string> v) -> std::vector<std::string>
{
	std::vector<std::string> options;
	std::copy(v.begin() + 2, v.end(), std::back_inserter(options));;
	return options;
}