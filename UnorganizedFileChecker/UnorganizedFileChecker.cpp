// UnorganizedFileChecker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "CheckForUnorganized.h"


int main()
{

    //Save all file locations as strings in a vector
    vector<string> paths = LoadInPaths();

    fs::space_info tempSpaceInfo; 



    cout << paths.size() << endl;

    //loop through all search locations
    for (const string& word : paths)
    {
        tempSpaceInfo = fs::space(word);
        cout << endl; 
        cout << word << " ";
    }
    cout << endl;



    //let the user view all information before closing the console
    PauseCommandPrompt();

    return 0;
}

vector<string> LoadInPaths() {

    string tempLine = "";
    vector<string> returnVector;
    folderFile.open(FileToSearch);

    while (getline(folderFile, tempLine)) {

        returnVector.push_back(tempLine);
    }


    folderFile.close();
    return returnVector;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
