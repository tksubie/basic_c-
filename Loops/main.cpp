#include <iostream>

using namespace std;


int main()

//Video 1
/*
{
    printf("This loop will run five times.\n");

for (int j=2; j<10; j=j+2){
        printf("The value of j is %i \n", j);
}


return 0;
}
*/

//Video 2

/*
int main()
{
    for (int i=0; i<=0; i--){
        printf("This is an infinite loop");
    }

    return 0;
}
*/

//Video 3
/*
{
int i = -2;

    while (i<3){

        printf("Nothing happens \n");

        i = i+2;
    }

    return 0;
}
*/

//Video 4
/*
{
    int i = 0;
    int var;

do {

    printf("Please insert an integer number greater than 10: ");
    cin >> var;

} while (var<=10);



    return 0;
}

*/

/* do {
    printf("Input me an integer to receive a multiplacation table X10: ")
    cin >> var;
  */


//Problem for lecture
/*
{
    int i= 1;
    int var;

    printf("Input me an integer to receive a multiplacation table X10: ");
    cin >> var;

    for (i=1; i<11; i=i+1){

    int m = var*i;

    printf("%d x %d = %d \n",i,var,m);
    }

}
*/
//while loop mutiply table
/*
{
    int i= 1;
    int var;

    printf("Input me an integer to receive a multiplacation table X10: ");
    cin >> var;

    //int m = var*i;
   // printf("%d x %d = %d \n",i,var,m);

    while (i<=10){

    int m = var*i;

    printf("%d x %d = %d \n",i,var,m);
    i = i+1;
    }
    return 0;
}
*/
//whith a DO WHILE
/*
{
    int i= 1;
    int var;

    printf("Input me an integer to receive a multiplacation table X10: ");
    cin >> var;

    do {
    int m = var*i;

    printf("%d x %d = %d \n",i,var,m);
    i = i+1;

    }

    while (i<=10);


    return 0;

}
*/


{
int i, j, rows;
rows = 15;
for (i=1;i<=rows;++i) {
for (j=1;j<=i;++j)
{
printf("a");
}

printf("\n");
}
return 0;
}
