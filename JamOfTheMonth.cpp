#include <iostream>
#include <string>

using namespace std;

int main() {


// which package does the user want? A/B/C?

  char package;
  int jamsPurchased = 0;
  int monthlyFee = 0;
  int jamsIncluded = 0;
  int jamPrice = 0;
  int bill = 0;

  cout<<"What package do you own? A, B, or C?"<<endl;
  cin>>package;

  cout<<"How many jams, jellies, or preserves did you purchase this month?"<<endl;
  cin>>jamsPurchased;

  switch (package) {

    case 'A':
    case 'a':
      monthlyFee = 8;
      jamsIncluded = 2;
      jamPrice = 5;

    break;
    case 'B':
    case 'b':
      monthlyFee = 12;
      jamsIncluded = 4;
      jamPrice = 4;

    break;
    case 'C':
    case 'c':
      monthlyFee = 15;
      jamsIncluded = 6;
      jamPrice = 3;

    break;
    default:
    cout<<"You selected a non-existent package"<<endl;
    break;
  }

  // calculate bill based on package

  if (jamsPurchased <= jamsIncluded)
  {
    bill = monthlyFee;
  }
  else
  {
    bill = monthlyFee + ((jamsPurchased - jamsIncluded) * jamPrice);
  }

  cout<<"You owe "<<bill<<endl;

  return 0;
}