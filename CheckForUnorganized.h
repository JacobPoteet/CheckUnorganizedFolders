#include <iostream>
#include <vector>
#include <string>
#include <fstream>
//#include <filesystem>


using namespace std;
//namespace fs = std::filesystem;

//------------------------------------
/*Global Variable*/
//-----------------------------------
string FileToSearch = "FoldersToCheck.jp";
ifstream folderFile;

//------------------------------------


//------------------------------------
/*Functions*/
//------------------------------------

//keep command prompt active
void PauseCommandPrompt() {system("pause");};


// Returns all file paths that need checked
vector<string> LoadInPaths();

//------------------------------------