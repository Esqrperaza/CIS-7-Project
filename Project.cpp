#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  cout << "Thank you for participating in Doctors Without Borders!" << endl;
  cout << "Your help is very appreciated and very much needed." << endl;
  cout << "This program will randomly select a country for each participant based on medical specialty and language fluecy.\n " << endl;
  int language;
  int practice;
  int country;

  string countryList[5][5] = {{"United States", "Papa New Guinea", "Zimbabwe", "South Africa", "Kenya"}, {"Malaysia", "Philippines", "Indonesia", "Taiwan", "Hong Kong"}, {"Ukraine", "Kyrgystan", "Uzbekistan", "Belarus", "Tajikistan"}, {"Bolivia", "Columbia", "El Salvador", "Mexico", "Venezuela"},  {"Egypt", "Iran", "Lebanon", "Syria", "Yemen"}};
  
  cout << "Here are the current language choices:"         <<endl;
  
  cout << "1. English" << endl;
  cout << "2. Mandarin" << endl;
  cout << "3. Russian" << endl;
  cout << "4. Spanish" << endl;
  cout << "5. Arabic" << endl;

  cout << "What language are you fluent in? ";
  cin >> language;
  
  cout << "You have selected ";
  switch (language-1){
    case 0: cout << "English.\n";
      break;
    case 1: cout << "Mandarin.\n";
      break;
    case 2: cout << "Russian.\n";
      break;
    case 3: cout << "Spanish.\n";
      break;
    case 4: cout << "Arabic.\n";
      break;
  } 

  cout << "\nHere are the medical specialties:" <<      endl;
  cout << "1. Pediatrics" << endl;
  cout << "2. General Surgery" << endl;
  cout << "3. Family Medicine" << endl;
  cout << "4. Pathology" << endl;
  cout << "5. Internal Medicine" << endl;

  cout << "What is your area of medical specialty? ";
  cin >> practice;

  cout << "You have selected ";
  switch (practice-1){
    case 0: cout << "Pediatrics.\n";
      break;
    case 1: cout << "General Surgery.\n";
      break;
    case 2: cout << "Family Medicine.\n";
      break;
    case 3: cout << "Pathology.\n";
      break;
    case 4: cout << "Internal Medicine.\n";
      break;
  } 

  srand(time(NULL));
  int index = rand() % 5;

  cout << "\nBased on your choice of language and area of specialty, the country selected is: ";
  cout << countryList[language-1][index] << endl;
}
