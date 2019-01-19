#include "NameAnalyzer.hpp"
#include <iostream>

using namespace std;

NameAnalyzer::NameAnalyzer() {
}

NameAnalyzer::~NameAnalyzer() {
}

bool NameAnalyzer::isRegexMatch(std::string stringA, std::regex regexB) {
	return std::regex_search(stringA, regexB);
}

bool NameAnalyzer::isPathMatch(std::string stringA, std::string stringB) {
	return (stringA == stringB);
}


bool NameAnalyzer::matchesRegexList(std::string filePath, std::list<std::string> regexList) {
	for (string rgx : regexList) {
		regex r{R"()"};
		r = rgx;
		if (isRegexMatch(filePath, r)) {
			cout << filePath <<" IS A MATCH ON REGEX RULE: " << rgx << endl; //Debug
			return true;
		}
	}
	return false;
}

bool NameAnalyzer::matchesPathList(std::string filePath, std::list<std::string> pathList) {
	for (string path : pathList) {
		if (isPathMatch(filePath, path)) {
			cout << filePath << " IS A MATCH ON PATH RULE: " << path << endl; //Debug
			return true;
		}
	}
	return false;
}
