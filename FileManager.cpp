#include "FileManager.hpp"

using namespace std;

FileManager::FileManager(){

}

FileManager::~FileManager(){

}

void FileManager::processFiles(){
	Configuration instance = Configuration::getInstance();
	list<string> filesList = instance.getFileList();
	for (string filePath : filesList) {
			if (isToBeTransferred(filePath)){
				transferFile(filePath);
		}
	}
}

bool FileManager::isToBeTransferred(std::string filePath){
	Configuration instance = Configuration::getInstance();

	if (NameAnalyzer::matchesRegexList(filePath, instance.getRegexRules()) ||
		NameAnalyzer::matchesPathList(filePath, instance.getFilenameRules())) {
		return true;
	} else {
		cout << filePath << " HAS NO MATCH" << endl;
		return false;
	}
}

void FileManager::transferFile(std::string filePath){
	// TODO trasfer file from source folder to target folder
}
