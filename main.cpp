#include <iostream>
using namespace std;    


//Task 1
main(){
    
    int array[100]; //Initializing an array of 100 integers
    cout << "The size of my array is " << sizeof(array) << " elements\n";

    //Task 2, the size of each element in an array depends on the context, I will give two approaches
    //Firstly, each index of the array can contain an integer, by that definition, each element takes up exactly
    //one index spot
    // Secondly, the size of an element is also dependent on the data type used, in this case integer. 
    // An integer is typically 4 bytes, however we can clarify this with the standard library function sizeof()
    cout << "The size of an integer in this array is = " << sizeof(array[0]) << " bytes\n";


    return 0;
}