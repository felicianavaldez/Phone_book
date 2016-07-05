/*
 * List.cpp
 *
 *  Created on: May 22, 2016
 *      Author: raydelto
 */

#include "List.h"
#include <iostream>
#include <cstdlib>
using namespace std;

List::List(): _first(NULL), _last(NULL)
{


}

void List::add(Element* element)
{
	
	
    
     system ( "cls");
     string name, last name, phone, cel;

     cout << "Adding a new contact" << endl;
     cout << "____________________________________" << endl;
     cout << "NAME"; cin >> name;
     cout << "LAST NAME"; cin >> name;
     cout << "PHONE"; cin >> tel;
     cout << "CELL"; cin >> cel;
     * Output << name << "" << name << "" << tel << "" << endl << cel;
     cout << "You should write the code for adding " << element -> _name << endl;
}

void List::remove(int index)
{
	 system ( "cls");
    string _name;
    ifstream input;
    ofstream * temp = new ofstream ( "temporal.txt" ios_base :: app);
    entrada.open ( "log.txt", ios :: in);
    string name, last name, phone, cel;
    cout << "Delete contacts" << endl;
    cout << "____________________________________" << endl;
    cout << "Enter the contact's name:";
    cin >> _name;
    name entry >> >> >> name >> tel cel;
    while (! entrada.eof ()) {
        if (name == _name) {
            cout << << _name "and" << name << "match";
        } Else {
            * Temporary << name << "" << name << "" << tel << "" << endl << cel;
        }
        name entry >> >> >> name >> tel cel;
    }
    // Error permission denied to delete file
    entrada.close ();
    remove ( "log.txt");
    / * If (remove ( "log.txt") == -1) perror ( "Error deleting file");
    else puts ( "File successfully deleted"); * /
    rename ( "temporal.txt", "log.txt");
    system ( "pause");
	cout << "You should write the code for removing the index " << index << endl;
}

void List::modify(int index, std::string name)
{
	 int counter = 0;
    system ( "cls");
    string name, last name, phone, cel;
    ifstream input ( "log.txt");

    cout << "contact list" << endl;
    cout << "____________________________________" << endl;
    name entry >> >> >> name >> tel cel;
    while (! entrada.eof ()) {
        cout << "return" counter << << "";

        cout << name << "" << name << "(" << << tel ") (" << cel << ")" << endl;
        name entry >> >> >> name >> tel cel;
        counter ++;
    }
    entrada.close ();
    system ( "pause");
	cout << "You should write the code for modifying the content for index " << index << endl;

}
