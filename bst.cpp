//
//  main.cpp
//  hike
//
//  Created by Sachin Kumar Singh on 28/12/1940 Saka.
//  Copyright © 1940 Sachin Kumar Singh. All rights reserved.
//

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
struct node{
    int data;
    node *left;
    node *right;
}*head,*tail,*temp;
class bst
{
    int c=0;
public:
    void insert_top(int n)
    {
        temp= new node;
        temp->data=n;
        temp->right=NULL;
        temp->left=NULL;
        if(head==NULL)
        {
            head=temp;
        }
        else
        {
            tail=head;
            while((tail->right!=NULL)&&(tail->left!=NULL))
            {
                if(tail->data>=n)
                {
                    tail=tail->left;
                }
                else
                {
                    tail=tail->right;
                }
            }
            
            if(tail->data>=n)
            {
                tail->left=temp;
            }
            else
            {
                tail->right=temp;
            }
        }
    }
    int checkheight()
    {
        tail=head;
        while(tail->left!=NULL)
        {
            tail=tail->left;
            c++;
        }
        c++;
        return c;
    }
};
int main()
{
    bst ob;
    int ch=1,ch2,k;
    while(ch==1)
    {
        std::cout<<"Enter 1 for insertion, 2 for checking height";
        std::cin>>ch2;
        switch (ch2) {
            case 1:
                std::cout<<"Enter the value";
                cin>>k;
                ob.insert_top(k);
                break;
            case 2:
                k=ob.checkheight();
                std::cout<<k;
                break;
            default:std::cout<<"Wrong Choice";
                break;
        }
        std::cout<<"Enter 1 for continue, 2 for exit";
        std::cin>>ch;
    }
}
