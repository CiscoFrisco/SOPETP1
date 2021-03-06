#ifndef _FINDPATTERN_H_
#define _FINDPATTERN_H_

#include <string>

int findPatternInFile(std::string pattern, std::string filename, std::string options, bool dir);

bool hasOption(std::string options, const char option);

#endif /* _FINDPATTERN_H_*/