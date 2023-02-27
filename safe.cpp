#include <iostream>

using namespace std;

#include "cryptography_unit.h"
#include "storage_unit.h"
#include "safe_util.h"


int main()
{
    string choice;


    while (true)
    {
        choice = getChoice();

        if (choice == "1")
        {
            createNote();
        }
        else if (choice == "2")
        {
            readNote();
        }
        else if (choice == "3")
        {
            cout << "Exiting...";
            break;
        }
        else
        {
            cout << "Not implemented yet!" << endl;
        }
    }

    return 0;
}
