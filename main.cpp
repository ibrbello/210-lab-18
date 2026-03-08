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
        // get user input
        cout << "Enter review rating 0-5: ";
        double tmpRating;
        cin >> tmpRating;
        cin.ignore(); 

        cout << "Enter review comments: ";
        string tmpComments;
        getline(cin, tmpComments);

        Node *head = nullptr;
        if (methodChoice == 1) { // adding to head
            Node *newNode = new Node; // create ptr that points to dynamically allocated space
        
        // adds node at head
        if (!head) { // If head is pointing to nullptr (i.e. empty list)
            head = newNode; // head now points to what newNode points to (dyn allocated space)
            newNode->next = nullptr; // make the dyn-allocated space's next ptr point to nullptr (housekeeping?)
            newNode->rating = tmpRating; // make the '' 's value be the random int
            newNode->
        }
        else { // If head is not pointing to nullptr
            newNode->next = head; // make the dyn-allocated space's next ptr point what head is 
            // pointing to, i.e. the first node. This makes newNode the first node in the list
            newNode->value = tmp_val; // same as above
            head = newNode; // head now points to the same thing that newNode points to (dyn space)
            // which is the new first node
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