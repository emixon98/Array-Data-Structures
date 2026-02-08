#include <iostream>
using namespace std;    


//Task 1:
int main(){

    int array[100]; //Initializing an array of 100 integers
    cout << "The size of my array is " << sizeof(array) / sizeof(array[0]) << " elements\n";
    //dividing entire byte size of array by a single elements size to give length of array

    //Task 2:
    //The size of each element in an array depends on the context, I will give two approaches
    //Firstly, each index of the array can contain an integer, by that definition, each element takes up exactly
    //one index spot
    // Secondly, the size of an element is also dependent on the data type used, in this case integer. 
    // An integer is typically 4 bytes, however we can clarify this with the standard library function sizeof()
    cout << "The size of an integer in this array is = " << sizeof(array[0]) << " bytes\n";

    //Task 5:
    //Thankfully addresses are a key part of C++ and are as easy as typing a single character.
    //By using & followed by our variable name for our array we can reference the location of our array, 
    //which will point to the entire array, which contiguously contains the rest of the elements 
    //following it.

    cout << "Our array resides at " << &array << " which is it's address\n";

    return 0;
}