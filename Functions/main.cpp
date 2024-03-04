#include <iostream>

using namespace std;

/*int myFirstFunction(){
return 5;
}

int main()
{
    cout << myFirstFunction() << myFirstFunction();


    return 0;
}
*/
/*
void multTable(int number){


for (int i=1; i<=10; i++){
    printf("%i x %i = %i\n", i, number, i*number);
}
}
int main(){

for (int i=1; i<11; i++){
   multTable(i);
}





    return 0;
}
*/
/*
void multTable(int number, int start, int myEnd, string k){


for (int i=start; i<=myEnd; i++){
    cout << k;
    printf("%i x %i = %i\n", i, number, i*number);

}
}
int main(){

int first = 2;
for (int i=1; i<4; i++){
   multTable(i,first,6,"Another one\n");
}

    return 0;
}
*/

//function that computes x^2+3x+5
/*
int myP(int x){
    int result = x^2+3*x+5;
    return result;
}

int main()
{
    int stop;

    do {
        cout << "Insert a positive integer to calculate x^2+3x+5: ";
        cin >> stop;

    if (stop<0){
            cout << "I asked for a positive number... \n";

                 }
    else {

        int output = myP(stop);

        cout << "Result is: " << output << "\n";

}


    } while (stop>=0);






    return 0;
}
*/
//function that computes x^2+3x+5
/*
double myP(double x){
    double result = (x*x)+3*x+5;
    return result;
}

int main()
{
    double stop;

    do {
        cout << "Insert a positive integer to calculate x^2+3x+5: ";
        cin >> stop;
        double output = myP(stop);

        cout << "Result is: " << output << "\n";

}


     while (stop>=0);






    return 0;
}
//*/
//function manipulating strings
/*
string addThreeStrings(string a, string b, string c){
    return a+b+c;
}

int main()
{
    string together = addThreeStrings("Good", "", "morning");
    cout << together;

    return 0;
}
*/
/*
string addThreeStrings(string a, string b, string c){
    return a+b+c;
}
int sizeThreeStrings(string a, string b, string c){
    int result = a.size() +b.size() +c.size();
    return result;
}

int main()
{
    string one = "Good";
    string together = addThreeStrings(one, " ", "morning");
    cout << together<< "\n";

    int sizeTogether = sizeThreeStrings(one, " ", "morning");
    cout << "The size of this string is: " << sizeTogether;

    return 0;
}
*/
/*
string myPrint(){
    cout << "printing";
}

int main()
{
   myPrint();

    return 0;
}

*/
string letter(string a){
    return a;
}
int sizeLetter(string a){
    int result = a.size();
    return result;
}

int main()
{
    string letterA = "a";
    string text = letter(letterA);
    cout << text<< "\n";

    int sizeLetter = sizeLetter(letterA);
    cout << "The size of this string is: " << sizeLetter;

    return 0;
}
