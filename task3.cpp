#include <bits/stdc++.h>

// Required library ----> #include <fstream>

using namespace std;

int main()
{

  string s;
  cout << "Enter the file name : ";
  cin >> s;

  ifstream fin(s); // opening text file entered by the user...
  // ifstream is a utility that reads data from files

  int words = 1;
  // Since the first word will not be counted so we initialize the word count with 1

  char ch;
  // will traverse in the file

  fin.seekg(0, ios::beg); // bring position of file pointer to begining of file

  while (fin)
  {
    fin.get(ch);
    if (ch == ' ' || ch == '\n')
      words++;
  }

  cout << "\nThe Number of Words in the given file are =" << words << "\n";
  fin.close(); // closing file
}