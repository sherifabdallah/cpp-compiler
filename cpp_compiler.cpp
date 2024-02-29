#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>

using namespace std;


string getFilenameWithoutExtension(const string& filePath) {
    // Find the position of the last directory separator '/'
    size_t lastSlashIndex = filePath.find_last_of('/');

    // Find the position of the last period '.' which indicates the start of the file extension
    size_t lastDotIndex = filePath.find_last_of('.');

    // If no period is found or if it appears before the last directory separator, return the original filename
    if (lastDotIndex == string::npos || (lastSlashIndex != string::npos && lastDotIndex < lastSlashIndex)) {
        return filePath;
    }

    // Otherwise, return a substring from the last directory separator to the last period
    return filePath.substr(lastSlashIndex + 1, lastDotIndex - lastSlashIndex - 1);
}

int main(int argc, char *argv[]) {

    // Check if there are enough command-line arguments
    if (argc != 2) {
        cerr << "Usage: " << argv[0] << " <cpp_file_to_run.cpp>" << endl;
        return 1; // Return error
    }

    // Get the filename of the C++ file to run
    string cppFile = argv[1];

    // Build the compilation and execution command
    string command = "g++ -o \"" + getFilenameWithoutExtension(cppFile) + ".exe\" \"" + cppFile + "\" && \"" + getFilenameWithoutExtension(cppFile) + ".exe\"";
    // Execute the command using system()
    int result = system(command.c_str());

    // Check if the command executed successfully
    if (result != 0) {
        cerr << "Error executing program." << endl;
    }

    return 0;
    
}
