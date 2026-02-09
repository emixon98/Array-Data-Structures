# Array Data Structures
# Week 1 CISC 187
 (Including answers from main.cpp here as well for ease of locating)

## Task 1:
To create an array of 100 elements in C++ you need to declare a datatype (int, double, char, etc.), followed by an identifiable name (much like with a standard variable), attach square brackets to the name, and within the brackets declare a size for the array. In this case 100. 
```C++
int array[100]; 
```

## Task 2:
The size of each element in an array depends on the context, I will give two approaches.
Firstly, each index of the array can contain an integer, by that definition, each element takes up exactly
one position, [0], [1], [2]...etc.
Secondly, the size of an element is also dependent on the data type used, in this case integer. An integer is typically 4 bytes in modern systems, however we can clarify this with the standard library function sizeof(), which I have called in main.

```C++
sizeof(array[0]);
```
```C++
cout << "The size of an integer in this array is = " << sizeof(array[0]) << " bytes\n";
```

## Task 3 (Number of steps for the following operations):

Reading: A single step, simply access the index, ex. array[0]

Searching for a value not contained within the array: (Brute Force Search) Potentially N steps, where N is the size of the array. Classically incrementing and comparing each index to desired element.

Insertion at the beginning of the array: N + 1 steps, again where N is the size of the array. The reason for this is not potential anymore, but due to the fact that we have to shift all existing index's/elements over 1 to make a new index [0], in which inserting that index is our + 1.

Insertion at the end of the array: 1 step. The opposite of insertion at the beginning. We don't have to shift any elements and can instead simply add our new element to the last index (if considering a dynamic array). In a fixed array this is possible if there is unused space at the end, and still requires only one step.

Deletion at the beginning of the array: Much like insertion, when we delete the first index, we still need to shift everything to the left position once. This means that our steps are (N - 1) + 1 = N, where N - 1 is the new size of the array and our respective shifts, and the + 1 is our actual deletion.

Deletion at the end of the array: Similar to insertion at the end, we do not need to consider shifting other elements. There is only 1 step required and it is the deletion itself.

## Task 4 (search for every instance):

Given an unordered array, if we were asked to find every instance of the word "apple", to ensure we find every occurence, we would need to compare each string literal in the array with the string "apple". This means the steps required would be N, where N is the size of the array. 

## Task 5 (Finding memory address of an array):

Thankfully addresses are a key part of C++ and are as easy as typing a single character. By using & followed by our variable name for our array we can reference the location of our array, which will point to the entire array, which contiguously contains the rest of the elements following it.

```C++
cout << "Our array resides at " << &array << " which is it's address\n";
```
```C++
address = &array;
```

My Video Covering the Assignment: https://youtu.be/bj0iYqrxiqY

