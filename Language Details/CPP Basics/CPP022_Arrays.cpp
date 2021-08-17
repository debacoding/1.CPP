#include <iostream>
using namespace std;

main()
{
    int array[4]; //Type_Name[Size_of_Elements]

    //Initialization
    array[0]=10;
    array[1]=20;
    array[2]=30;
    array[3]=40;

    //Printing the array elements and address of each element
    cout<<"array[0] = "<<array[0]<<" , Address = "<<&array[0]<<endl;
    cout<<"array[0] = "<<array[1]<<" , Address = "<<&array[1]<<endl;
    cout<<"array[0] = "<<array[2]<<" , Address = "<<&array[2]<<endl;
    cout<<"array[0] = "<<array[3]<<" , Address = "<<&array[3]<<endl;

    if(&array[0] == array)
        cout<<"TRUE";
}

/*
Output:
array[0] = 10 , Address = 0x7ffd6d0aaf50
array[0] = 20 , Address = 0x7ffd6d0aaf54
array[0] = 30 , Address = 0x7ffd6d0aaf58
array[0] = 40 , Address = 0x7ffd6d0aaf5c
TRUE
*/
