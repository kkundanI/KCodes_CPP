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

  // Go to the end of the file
  file.seekp(0, ios::end);

  // Get the position of the last line
  int pos = file.tellp();

  // Seek back to the beginning of the last line
  file.seekg(pos - 1, ios::beg);

  // Read the last line
  string line;
  getline(file, line);

  // Get the user's choice
  char choice;
  //cout << "Enter new text at the beginning of the line (b) or at the end (e): ";
  //cin >> choice;

  // Insert the new text at the beginning or at the end of the line
  string newText, newText0;
  cout << "Enter new text (Beginning): ";
  cin >> newText;

  cout << "Enter new text (End): ";
  cin >> newText0;
//   if (choice == 'b') {
    line.insert(0, newText);
     file << line << endl;
//   } else if (choice == 'e') {
    line.append(newText0);
//   } else {
    // cout << "Invalid choice." << endl;
//     return 1;
//   }

  // Write the updated line to the file
  file << line << endl;

  // Close the file
  file.close();

  return 0;
}
