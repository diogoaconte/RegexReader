#ifndef CONFIGURATION_HPP_
#define CONFIGURATION_HPP_

#include <list>
#include <vector>
#include <regex>
#include <string>
#include <iostream>

using namespace std;

// Class responsible for keeping stored configuration file data
// (regex-filepath rules, filenames, folders).
// Temporarily, also being responsible for generating its own data,
// for simulation/test purposes.
class Configuration {
public:
	// Singleton
	static Configuration& getInstance()
	{
	   static Configuration INSTANCE;
	   return INSTANCE;
	}

	virtual ~Configuration();
	list<string> getFileList();
	list<string> getRegexRules();
	list<string> getFilenameRules();
	void generateRandomConfig();

private:
	Configuration();
	string getRandomElementFromList(vector <string> vector);
	list<string> getRandomElementsFromList(vector <string> vector);
	int randomize(int n);
	void setFilenames(list<string> newFilenames);
	void setFilenameRules(list<string> newFilenameRules);
	void setRegexRules(list<string> newRegexRules);
	void fillSrcFolderList();
	void fillFilenamesList();
	void fillFilenameRulesList();
	void fillRegexRulesList();
	list<string> m_Filenames;
	list<string> m_FilenameRules;
	list<string> m_RegexRules;

	vector<string> m_FilenamesRand;
	vector<string> m_FilenameRulesRand;
	vector<string> m_RegexRulesRand;
};

#endif /* CONFIGURATION_HPP_ */
