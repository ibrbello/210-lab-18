// COMSC-210 | Lab 18 | Ibrahim Bello
// This code asks the user stores movie reviews in a linked list.
// The program asks the user whether they want the new reviews added at the beginning or end of the list
// Once all reviews have been added, the program outputs the reviews and calculates the average rating.
#include <iostream>
#include <string>
using namespace std;


// Step 1: Node struct
struct Node {
    // data
    double rating;
    string comments;
    // pointer
    Node *next;
};

// Step 2: Main function
int main() {
    // Ask whether the user wants to add node to head or tail
    cout << "Which linked list method should we use?" << endl;
    cout << "   [1]: New nodes are added at the head of the linked list" << endl;
    cout << "   [2]: New nodes are added at the tail of the linked list" << endl;
    int methodChoice;
    cin >> methodChoice;
    cout << "The choice was " << methodChoice;

    string anotherEntry;
    // enter do-while loop
    do {
    // if statement based on above, 
        if (methodChoice == 1) { // adding to head

        } 

        else { // adding to tail

        }
        cout << "Do you want to enter another review? y/n: " << endl;
        cin >> anotherEntry;
    } while (anotherEntry != "n");
   
 // traverse list

    // output total

    // compute average

    // print average
    return 0;
}