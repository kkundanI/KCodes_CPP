
#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Open the file in append mode
  ofstream outFile("filename.txt", ios::app);

  // Write to the file
  outFile << "This is a new line of text." << endl;

  // Close the file
  outFile.close();

  return 0;
}
