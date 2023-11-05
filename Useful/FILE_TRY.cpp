#include <iostream>
#include <fstream>

using namespace std;

int main() {
  // Open the file in read and write mode
  fstream file("filename.txt", ios::in | ios::out);

  // Check if the file exists
  if (!file.is_open()) {
    cout << "File does not exist." << endl;
    return 1;
  }

  // Go to the end of the file to find the last line
  file.seekg(0, ios::end);

  // Get the position of the last line
  int pos = file.tellg();

  // Seek back to the beginning of the last line
  file.seekg(pos - 1, ios::beg);

  // Read the current content of the last line
  string line;
  getline(file, line);

  // Get the user's choice
  char choice;
  cout << "Enter new text at the beginning of the line (b) or at the end (e): ";
  cin >> choice;

  // Insert or append the new text based on the user's choice
  string newText;
  cout << "Enter new text: ";
  cin >> newText;

  if (choice == 'b') {
    line = newText + line;
  } else if (choice == 'e') {
    line += newText;
  } else {
    cout << "Invalid choice." << endl;
    return 1;
  }

  // Replace the existing content of the last line with the updated line
  file.seekp(pos - 1, ios::beg);
  file << line;

  // Close the file
  file.close();

  return 0;
}
