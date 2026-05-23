#include <iostream>
#include<vector>
using namespace std;
struct Node 
{
    int data;
    Node* next;
};

int main()
 {
    int arr[10] = {8, 4, 2, 1, 5, 12, 30, 9, 13, 10};
    Node* head = new Node();
    head->data = arr[0];
    head->next = NULL;
    Node* temp = head;
    
    for (int i = 1; i < 10; i++) {
        Node* newNode = new Node();
        newNode->data = arr[i];
        newNode->next = NULL;

        temp->next = newNode;
        temp = newNode;
    }
    /*
    // Bubble sort
    bool swapped = true;
    while (swapped) {
        swapped = false;
        Node* curr = head;

        while (curr->next != NULL) 
		{
            if (curr->data > curr->next->data) {
                int t = curr->data;
                curr->data = curr->next->data;
                curr->next->data = t;
                swapped = true;
            }
            curr = curr->next;
        }
    }
   
   
//insertion sort
Node* sorted = NULL;
Node* cur = head;
while (cur) {
    Node* nxt = cur->next;

    if (!sorted || sorted->data >= cur->data) {
        cur->next = sorted;
        sorted = cur;
    } else {
        Node* t = sorted;
        while (t->next && t->next->data < cur->data)
            t = t->next;
        cur->next = t->next;
        t->next = cur;
    }

    cur = nxt;
}

head = sorted;

  */
  
     // Selection sort
    for (Node* i = head; i != NULL; i = i->next) {
        Node* minNode = i;
        for (Node* j = i->next; j != NULL; j = j->next) {
            if (j->data < minNode->data) {
                minNode = j;
            }
        }
        int t = i->data;
        i->data = minNode->data;
        minNode->data = t;
    }

   
    //Print
    Node* print = head;
    while (print != NULL) {
        cout << print->data << " ";
        print = print->next;
    }

    return 0;
}

