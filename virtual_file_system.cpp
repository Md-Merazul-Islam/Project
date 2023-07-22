#include <bits/stdc++.h>
using namespace std;

class VirtualFileSystem
{
private:
    map<string, string> fileContents;

public:
    void createNewFile(const string &fileName)
    {

        // Create an output file stream (ofstream) and open the file
        ofstream outFile(fileName);

        // Check if the file was successfully opened
        if (outFile.is_open())
        {
            // Close the file stream
            outFile.close();

            cout << "File '" << fileName << "' created successfully." << endl;
        }
        else
        {
            cout << "Error: Unable to create the file." << endl;
        }
    }

    void writeFile(const string &fileName, const string &data)
    {
        // Create an output file stream (ofstream) and open the file
        ofstream outFile(fileName);

        // Check if the file was successfully opened
        if (outFile.is_open())
        {
            // Write some content to the file
            outFile << data << endl;
            // Close the file stream
            outFile.close();

            cout << "File '" << fileName << "' created and data written successfully." << endl;
        }
        else
        {
            cout << "Error: Unable to create the file." << endl;
        }
    }

    void readData(const string &fileName)
    {
        ifstream inFile(fileName);

        // Check if the file was successfully opened
        if (inFile.is_open())
        {
            string line;
            cout << "Content of file '" << fileName << "':" << endl;

            // Read and print each line from the file
            while (getline(inFile, line))
            {
                cout << line << endl;
            }

            // Close the file stream
            inFile.close();
        }
        else
        {
            cout << "Error: Unable to open the file." << endl;
        }
    }

    void deleteFile(const string &fileName)
    {
        if (remove(fileName.c_str()) == 0)
        {
            cout << "File '" << fileName << "' successfully deleted." << std::endl;
        }
        else
        {
            cout << "Error: Unable to delete the file." << endl;
        }
    }
};

int main()
{
    VirtualFileSystem file;

    cout << "Hello! I hope you are well." << endl;
    cout << "If you want to create a new file, please type this number (0)." << endl;
    cout << "If you want to write something to the file, please type this number (1)." << endl;
    cout << "If you want to read the data from the file, please type this number (2)." << endl;
    cout << "If you want to delete the file, please type this number (3)." << endl
         << endl
         << endl;

    int number;
    cout << "Enter your Number: ";
    cin >> number;
    cout << endl
         << endl;

    if (number == 0)
    {
        cout << "Write your file name like this type, don't forget to use start and end <Quotation mark> (myfile.txt): ";
        string fileName;
        cin.ignore();
        getline(cin, fileName);
        file.createNewFile(fileName);
    }
    else if (number == 1)
    {
        cout << "Write your file name like this type, don't forget to use start and end <Quotation mark> (myfile.txt): ";
        string fileName;
        cin.ignore();
        getline(cin, fileName);
        cout << "Please write your data: ";
        string data;
        getline(cin, data);
        file.writeFile(fileName, data);
    }
    else if (number == 2)
    {
        cout << "Write your file name like this type, don't forget to use start and end <Quotation mark> (myfile.txt): ";
        string fileName;
        cin.ignore();
        getline(cin, fileName);
        file.readData(fileName);
    }
    else if (number == 3)
    {
        cout << "Write your file name like this type, don't forget to use start and end <Quotation mark> (myfile.txt): ";
        string fileName;
        cin.ignore();
        getline(cin, fileName);
        file.deleteFile(fileName);
    }
    else
    {
        cout << "Invalid number! Please select a correct number from the options provided. Thank you for using the Virtual File System." << endl;
    }

    return 0;
}
