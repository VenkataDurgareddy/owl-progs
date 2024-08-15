//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data % 10;
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends
// User function template for C++

/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
public:
    Node* reverse(Node* head) {
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        
        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        return prev;
    }

    Node* addOne(Node* head) {
        // Handle the case where the list is empty
        if (head == NULL) return new Node(1);

        // Reverse the linked list
        Node* temp = reverse(head);
        Node* temp2 = temp;

        int carry = 0;
        int first = temp->data + 1;

        if (first >= 10) {
            temp->data = first % 10;
            carry = first / 10;
        } else {
            temp->data = first;
            carry = 0;
        }

        temp = temp->next;
        Node* prev = temp2;  // Start with the first node reversed

        while (temp != NULL) {
            prev = temp;
            int currSum = temp->data + carry;

            if (currSum >= 10) {
                temp->data = currSum % 10;
                carry = currSum / 10;
            } else {
                temp->data = currSum;
                carry = 0;
            }

            temp = temp->next;
        }

        // If carry is still there, add a new node
        while (carry > 0) {
            Node* newNode = new Node(carry % 10);
            prev->next = newNode;
            prev = newNode;
            carry /= 10;
        }

        // Reverse the list back to the original order
        Node* finalAns = reverse(temp2);
        return finalAns;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        int data = arr[0];
        struct Node* head = new Node(data);
        struct Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends