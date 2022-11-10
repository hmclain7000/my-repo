/*
Name: Harrison McLain
Class: CPSC 122, Section 1
Date Submitted: nov 6 2022
Assignment: project 9
Description: write linked list class
*/

#include <iostream>
using namespace std;

#include "2-List.h"


//Class-related functions
//Constructor
List::List()
{       
 length = 0;
 head = NULL;
}

//Destructor
List::~List()
{
}

//Head-related functions
void List::PutItemH(itemType item)
{
    node* temp = new node;
    temp -> next = head;
    temp -> item = itemIn;
    head = temp;
    length++;
    temp = NULL;
    
}

// gets item in list
itemType List::GetItemH() const
{
    if(head != NULL)
        return head -> item;
    return -1;
}

//deletes item in list
void List::DeleteItemH()
{
    if(head != NULL)
    {
        node* t = head;
        head = t -> next;
        delete t;
        t = NULL;
        length--;
    }
    
}


//General operations on the class
//prints list
void List::Print() const
{
    node* cur = head;
    while(cur != NULL)
        {
            cout << cur->item << " ";
            cout << cur->next;
            
        }
}

//checks if list is empty
bool List::IsEmpty() const
{
    if(head == NULL)
    {
        return true;
    }
 return true;
}

//gets length of list
int List::GetLength() const
{
    int c = 0;
    node* cur = head;
    
    while(cur != NULL)
    {
        cur -> item;
        cur = cur -> next;
        c++;
    }
    
}

//finds item in list
int List::Find(const itemType target) const
{
    int cnt = 0;
    node* cur = head;
    while(cur != NULL)
    {
        if(cur -> item == target)
        {
            cnt++;
        }
        cur = cur -> next;
        
    }
    return cnt;
    
}
