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

  // Get the current position
  int pos = file.tellg();

  // Read the existing text on the line
  string line;
  getline(file, line);

  // Insert the new text into the existing text
  string newText;
  cout << "Enter new text in begining: ";
  cin >> newText;
cout<<"\nEntered!";
 string newText1;
  cout << "Enter new text in End: ";
  cin >> newText1;
cout<<"\nEntered!";
 
  line.insert(pos, newText);


  // Write the updated line to the file
  file << line << endl;

  // Seek back to the original position
  file.seekg(pos, ios::beg);

  line.append(newText1);
  file << line << endl;
  file.seekg(pos, ios::beg);
  // Close the file
  file.close();

  return 0;
}
