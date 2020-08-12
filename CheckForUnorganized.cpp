#include "CheckForUnorganized.h"


int main()
{

    //Save all file locations as strings in a vector
    vector<string> paths = LoadInPaths();

   // space_info tempSpaceInfo; 



    cout << paths.size() << endl;

    //loop through all search locations
    for (const string& word : paths)
    {
        //tempSpaceInfo = space(word);
        //cout << tempSpaceInfo << endl; 
        cout << word << " ";
    }
    cout << endl;
    

    
    //let the user view all information before closing the console
    PauseCommandPrompt();
}

vector<string> LoadInPaths(){
    
    string tempLine = "";
    vector<string> returnVector;
    folderFile.open (FileToSearch);

    while ( getline (folderFile, tempLine) ){

        returnVector.push_back(tempLine);
    }


    folderFile.close();
    return returnVector;
}

