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
        Node *newNode = new Node; // create ptr that points to dynamically allocated space
        if (methodChoice == 1) { // adding to head
        
            // adds node at head
            if (!head) { // If list is empty
                head = newNode; 
                newNode->next = nullptr; 
                newNode->rating = tmpRating; 
                newNode->comments = tmpComments;
            }
            else { // If list is not empty
                newNode->next = head; 
                newNode->rating = tmpRating; 
                newNode->comments = tmpComments;
                head = newNode; // head now points to the same thing that newNode points to (dyn space)
                // which is the new first node
            } 
        }

        else { // adding to tail
            // if list is empty, same as above
            if (!head) { // If list is empty
                head = newNode; 
                newNode->next = nullptr; 
                newNode->rating = tmpRating; 
                newNode->comments = tmpComments;
            }
            else {
                // if not: traverse list to the end, and make the pointer of the last node point to the new node
                Node *current = head;
                while (current) { // Traverse list
                    current = current->next;
                }
                

            }
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