// writing on a text file
//#include <fstream>
//#include <iostream>
//using namespace std;

/*
int main()
{
    ofstream myFile ("example 1.txt");

    if (myFile.is_open()){
        myFile << "This is one line of text\n";

        myFile << "This is another line of text";

        cout << "File was created.";
    } else cout << "Could not create the file.";
    return 0;
}


*/
// Reading from a file
/*
int main(){

    string oneLine;

    ifstream inObj ("example 1.txt");


    if (inObj){

        getline(inObj, oneLine);
        cout << oneLine << "\n";
        getline(inObj, oneLine);
        cout << oneLine;

    } else cout << "Could not open the file.";


    return 0;
}*/

// writing on a text file
#include <fstream>
#include <iostream>
using namespace std;



int main()
{
    ofstream myFile ("test.txt");          // creating the txt file that will be writing to.


int i= 1;
int j= 1;
int lines;
lines = 15;          // declaring how many rows you want to show up.
    for (i=1;i<=lines;++i) {
        for (j=1;j<=i;++j){
            myFile << "a";                  //typing "a" for the rows.
}
            myFile << "\n";                 // creating space for making all the rows up to 15.
}
cout <<"File Complete";
return 0;
}
