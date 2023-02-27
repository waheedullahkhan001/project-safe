
string getChoice()
{
    string choice;

    cout << "1) Create note." << endl;
    cout << "2) Read note." << endl;
    cout << "3) Exit." << endl;

    cout << "^) Enter your choice: ";
    getline(cin, choice);
    
    return choice;
}

void createNote()
{
    string encryptionKey, noteTitle, text, result;

    cout << "Enter contents of note: ";
    getline(cin, text);

    cout << "Enter title of note: ";
    getline(cin, noteTitle);

    cout << "Enter a key for encryption: ";
    getline(cin, encryptionKey);
    

    result = processText(text, encryptionKey);
    processStorage(noteTitle + ".txt", result);
}

void readNote()
{
    string encryptionKey, noteTitle, text, result;
    
    cout << "Enter only title of note: ";
    getline(cin, noteTitle);

    cout << "Enter the key for this note: ";
    getline(cin, encryptionKey);

    text = processStorage(noteTitle + ".txt");
    result = processText(text, encryptionKey);

    cout << "Title: " << noteTitle << endl;
    cout << "Content: " << result << endl;
}
