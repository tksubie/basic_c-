#include <iostream>
#include <unistd.h>
#include <list>
#include <vector>

/*
Thaine Koen
Week7
*/

using namespace std;


int main()
{


        list<string> Mylist; //create my object Mylist
        list<string>::iterator Mylist_iter;     //create iterator


        cout << "Welcome to List Creator 2000!!" << endl;       //describing program
        cout<< "Lets create a List."<<endl;

        string space = " ";     //create a space so the output has a space between inputs
        string Items;
        int answer;
        string itemRemove;
        int answer4;

        for( int i=0; i< 3 ; i++){     //loop to insert user inputed values into list
            cout << "Input list item: ";
                cin >> Items;
                Mylist.push_back(Items + space);
         }

        cout << endl << "The lists size has " << Mylist.size() << " values." << endl;       //recall how big the list is

        cout << "The list is as follows" << endl;



        for( Mylist_iter = Mylist.begin(); Mylist_iter != Mylist.end(); Mylist_iter++ ) {       //use iterator to print values in the list
        cout << *Mylist_iter << endl;
        }

        cout << "Now we will add an integer value to the front of the list" << endl;
        cout << "Value: ";
        cin >> answer;

        Mylist.push_front(to_string(answer));       //add value to front and convert int to string

        for( Mylist_iter = Mylist.begin(); Mylist_iter != Mylist.end(); Mylist_iter++ ) {       //use iterator to print values in the list
        cout << *Mylist_iter << endl;
        }

        cout << "Now removing the integer you input... "<< endl;

        Mylist.remove(to_string(answer)); //remove a value from the list


        cout << "New list:" << endl;


       for( Mylist_iter = Mylist.begin(); Mylist_iter != Mylist.end(); Mylist_iter++ ) {       //use iterator to print values in the list

        cout << *Mylist_iter << endl;
        }

        sleep(1);       //pause program 1 second

        cout << "Now we will delete the item at the end" << endl;

        Mylist.pop_back();      //delete the last list item

        for( Mylist_iter = Mylist.begin(); Mylist_iter != Mylist.end(); Mylist_iter++ ) {       //use iterator to print values in the list
        cout << *Mylist_iter << endl;
        }

        cout << endl << "The lists size has changed to " << Mylist.size() << " values." << endl;       //recall how big the list is


        cout << endl; "Hope you enjoyed the list software!";

sleep(1);       //pause for 1 second

    return 0;
}
