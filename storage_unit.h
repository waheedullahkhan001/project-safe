#include <fstream>


void processStorage(string filename, string text)
{
    ofstream FileVar(filename);
    FileVar << text << endl;
    FileVar.close();
}

string processStorage(string filename)
{
    string result;
    ifstream FileVar(filename);
    getline(FileVar, result);
    FileVar.close();
    return result;
}
