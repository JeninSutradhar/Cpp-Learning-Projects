#include <iostream>
#include <fstream>
using namespace std;

int main() {
   string fileName, fileContent;
   cout << "Enter file name: ";
   cin >> fileName;
   ifstream inputFile(fileName.c_str());
   if (inputFile.is_open()) {
      string line;
      while (getline(inputFile, line)) {
         fileContent += line + "\n";
      }
      inputFile.close();
   }
   else {
      cout << "Unable to open file." << endl;
      return 1;
   }
   cout << "File content: " << endl << fileContent << endl;
   return 0;
}
