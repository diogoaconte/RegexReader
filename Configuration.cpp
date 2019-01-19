#include "Configuration.hpp"

Configuration::Configuration() {
	fillFilenamesList();
	fillFilenameRulesList();
	fillRegexRulesList();
}

Configuration::~Configuration() {

}

list<string> Configuration::getFileList(){
	return m_Filenames;
}

list<string> Configuration::getRegexRules(){
	return m_RegexRules;
}

list<string> Configuration::getFilenameRules(){
	return m_FilenameRules;
}

void Configuration::setFilenames(list<string> newFilenames) {
	m_Filenames = newFilenames;
	int i = 0;
	for (string s : m_Filenames) {
		cout << "m_Filenames[" << i <<"] :" << s << endl;
		i++;
	}
}

void Configuration::setFilenameRules(list<string> newFilenameRules) {
	m_FilenameRules = newFilenameRules;
	int i = 0;
	for (string s : m_FilenameRules) {
		cout << "m_FilenameRules[" << i <<"] :" << s << endl;
		i++;
	}

}

void Configuration::setRegexRules(list<string> newRegexRules) {
	m_RegexRules = newRegexRules;

	int i = 0;
	for (string s : m_RegexRules) {
		cout << "m_RegexRules[" << i <<"] :" << s << endl;
		i++;
	}
}

// Populates config variables with random preset values
void Configuration::generateRandomConfig() {
	cout << "New set of randomic regex/filename rules being created..." << endl;
	setFilenames(getRandomElementsFromList(m_FilenamesRand));
	setFilenameRules(getRandomElementsFromList(m_FilenameRulesRand));
	setRegexRules(getRandomElementsFromList(m_RegexRulesRand));

}

string Configuration::getRandomElementFromList(vector <string> vector) {
	int nElements = vector.size();
	int randomInt = randomize(nElements);
	if (nElements != 0){
		return vector.at(randomInt);
	} else {
		return "";
	}
}

list<string> Configuration::getRandomElementsFromList(vector <string> vector) {
	int nElements = vector.size();
	int randomInt = randomize(nElements);
	list <string> randomStrings;
	for (int i = 0; i < randomInt; i++) {
		randomStrings.push_back(getRandomElementFromList(vector));
	}

	return randomStrings;
}

int Configuration::randomize(int n) {
	if (n != 0) {
		return std::rand()/((RAND_MAX + 1u)/n);
	} else {
		return 0;
	}
}

void Configuration::fillFilenamesList() {
	m_FilenamesRand.push_back("fn0");
	m_FilenamesRand.push_back("fn1.doc");
	m_FilenamesRand.push_back("FN2.txt");
	m_FilenamesRand.push_back("fN3.zip");
	m_FilenamesRand.push_back("Nf4.jpg");
	m_FilenamesRand.push_back("FILENAME3");
}

void Configuration::fillFilenameRulesList() {
	m_FilenameRulesRand.push_back("FILENAME0.zip");
	m_FilenameRulesRand.push_back("Filename1.doc");
	m_FilenameRulesRand.push_back("FN2");
	m_FilenameRulesRand.push_back("filename3.zip");
	m_FilenameRulesRand.push_back("filename2");
	m_FilenameRulesRand.push_back("FILENAME3");
}

void Configuration::fillRegexRulesList() {
	m_RegexRulesRand.push_back("([0-9])");
	m_RegexRulesRand.push_back("([A-Z])");
	m_RegexRulesRand.push_back("([a-z])");
}

