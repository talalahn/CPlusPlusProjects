/*
    MadLibs project
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{

    cout<<boolalpha;

    string adjective1;
    string girlsName;
    string adjective2;
    string occupation1;
    string placeName;
    string clothing;
    string hobby;
    string adjective3;
    string occupation2;
    string boysName;
    string mansName;
    cout<<"Enter an adjective"<<endl;
    getline(cin, adjective1);
    cout<<"Enter a girl's name"<<endl;
    getline(cin, girlsName);
    cout<<"Enter an adjective"<<endl;
    getline(cin, adjective2);
    cout<<"Enter an occupation"<<endl;
    getline(cin, occupation1);
    cout<<"Enter a place"<<endl;
    getline(cin, placeName);
    cout<<"Enter a clothing"<<endl;
    getline(cin, clothing);
    cout<<"Enter a hobby (in present simple tense)"<<endl;
    getline(cin, hobby);
    cout<<"Enter an adjective"<<endl;
    getline(cin, adjective3);
    cout<<"Enter an occupation"<<endl;
    getline(cin, occupation2);
    cout<<"Enter a boy's name"<<endl;
    getline(cin, boysName);
    cout<<"Enter a man's name"<<endl;
    getline(cin, mansName);

    cout<<"There once was a(n) "<< adjective1<< " girl named "<< girlsName << " who was a(n) "<<adjective2<<" "<<occupation1<<" in the Kingdom of "<<placeName<<". She loved to wear "<<clothing<< " and to "<< hobby<< ". She wanted to marry the "<<adjective3<<" "<<occupation2<<" named "<<boysName<<" but her father, King "<<mansName<< " forbid her from seeing him."<<endl;


    return 0;
    }