#ifndef NAMEANALYZER_HPP_
#define NAMEANALYZER_HPP_

#include "Configuration.hpp"
#include <regex>
#include <string>
#include <iostream>
#include <list>

using namespace std;

//Class responsible for regex/filename validation
class NameAnalyzer {
public:
	NameAnalyzer();
	virtual ~NameAnalyzer();

	static bool isPathMatch(string stringA, string stringB);
	static bool isRegexMatch(string stringA, regex regexB);
	static bool matchesRegexList(std::string filePath, list<string> regexList);
	static bool matchesPathList(std::string filePath, list<string> pathList);
};

#endif /* NAMEANALYZER_HPP_ */
