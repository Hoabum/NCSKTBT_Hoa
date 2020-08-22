#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
struct BTreeNode
{
    int *data;
    BTreeNode **child_ptr;
    bool leaf;
    int n;
}*root = NULL , *np = NULL, *x = NULL;
BTreeNode * init()
{
    int i;
    np = new BTreeNode;
    np->data = new int[5];
    np->child_ptr = new BTreeNode *[6];
    np->leaf = true;
    np->n = 0;
    for (i=0;i < 6;i++)
    {
        np->child_ptr[i] = NULL;
    }
    return np;
}
void traverse(BTreeNode *p)
{
    cout<<endl;
    int i;
    for ( i = 0; i < p->n; i++)
    {
        if(p->n == false)
        {
            traverse(p->child_ptr[i]);
        }
        cout<< " "<<p->data[i];
    }
    if (p->leaf == false)
    {
        traverse(p->child_ptr[i]);
    }
    cout<<endl;
}
void sort(int *p,int n)
{
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i; i <= n; i++)
        {
            if(p[i] > p[j])
            {
                int temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
        
    }
    
}