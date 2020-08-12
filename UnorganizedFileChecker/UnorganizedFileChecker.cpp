// UnorganizedFileChecker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "CheckForUnorganized.h"


int main(){

    //Save all file locations as strings in a vector
    vector<fs::path> paths = LoadInPaths();
    int totalSize = 0;

    PrintString("Processing...");
    cout << endl;

    //------------------------------------------
    //print empty folders
    PrintString("Empty folders:");
    
    for (unsigned int i = 0; i < paths.size(); i++) {

        if (fs::is_empty(paths.at(i))){
            PrintString(paths.at(i).string());

        }
    }
    PrintString("");
    //------------------------------------------


    //------------------------------------------
    //print folders and contents information
    PrintString("Folder that need attention:");
    for (unsigned int i = 0; i < paths.size(); i++) {

        if (!(fs::is_empty(paths.at(i)))) {

            fs::directory_iterator tempDirectorIter(paths.at(i));

            totalSize = 0;
            for (auto& p : fs::directory_iterator(paths.at(i))) {
                totalSize += fs::file_size(p.path());
           }

            cout << paths.at(i).string() << " | ";
            cout << (totalSize) << " bytes " << endl;

        
        }
    }
    //------------------------------------------


    cout << endl;
    //let the user view all information before closing the console
    PauseCommandPrompt();

    return 0;
}

vector<fs::path> LoadInPaths() {

    string tempLine = "";
    vector<fs::path> returnVector;
    folderFile.open(FileToSearch);

    //populate vector with paths
    while (getline(folderFile, tempLine)) {
        returnVector.push_back(fs::path(tempLine));
    }

    folderFile.close();
    return returnVector;
}


void PrintString(string message) {

    cout << message << endl;

    return;
}