// A program that determines which mailboxes were closed.

#include <iostream> // Preprocessor directive that includes input/output stream.

using namespace std; // Using the standard namespace.


// My prototypes:
// Initializes the mailboxes by opening even ones.f
void initializeMailboxes(bool mailboxes[]);
// Perform the operations on the mailboxes.
void performOperations(bool mailboxes[]);
// Display the numbers of the closed mailboxes.
void displayClosedMailboxes(const bool mailboxes[]);

int main() // The main function.
{
    // Array to hold the mailboxes, false is closed, true is open.
    bool mailboxes[151] = {false};

    // Initializes the mailboxes by opening even ones.
    initializeMailboxes(mailboxes);

    // Performs the operations on the mailboxes.
    performOperations(mailboxes);

    // Displays the closed mailboxes by number.
    displayClosedMailboxes(mailboxes);

    return 0; // Returns 0 to end program.
}

// Solves the initialization the mailboxes by opening even ones.
void initializeMailboxes(bool mailboxes[])
{
    for (int i = 2; i <= 150; i += 2) // Loops through even mailboxes.
    {
        mailboxes[i] = true; // Opens the mailbox.
    }
}

// Solves to perform the operations on the mailboxes.
void performOperations(bool mailboxes[])
{
    for (int i = 3; i <= 150; i += 1) // Loops through the operations.
    {
        for (int j = i; j <= 150; j += i) // Loops through the mailboxes.
        {
            mailboxes[j] = !mailboxes[j]; // Toggle the mailbox.
        }
    }
}

// Solves to display the numbers of the closed mailboxes.
void displayClosedMailboxes(const bool mailboxes[])
{
    // Outputs the closed mailboxes.
    for (int i = 1; i <= 150; i += 1) // Loops through the mailboxes.
    {
        if (mailboxes[i] == 0) // If the mailbox is closed.
        {
            cout << i << " "; // Output the mailbox number.
        }
    }
    cout << endl; // Creates a newline.
}