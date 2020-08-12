#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <filesystem>


using namespace std;
namespace fs = std::filesystem;

//------------------------------------
/*Global Variable*/
//-----------------------------------
string FileToSearch = "FoldersToCheck.txt";
ifstream folderFile;

//------------------------------------




//------------------------------------
/*Functions*/
//------------------------------------

//keep command prompt active
void PauseCommandPrompt() { system("pause"); };


// Returns all file paths that need checked
vector<fs::path> LoadInPaths();


//debug print
void PrintString(string message);

//------------------------------------