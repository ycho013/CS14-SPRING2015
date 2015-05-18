#ifndef BST_H
#define BST_H
#define TEST

#include <cassert>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <map>
#include <list>
#include <math.h>
#include <queue>

using namespace std;





template <typename Value>
class BST
{
    class Node
    {
        public:
            Node* left;
            Node* mid;
            Node* right;
            Value value;
            Value value1;
            Node(const Value v = Value(), const Value l = Value())
            : value(v), left(0), mid(0),right(0)
            {}
            Value& content() {return value + " " +value1;}
            bool isInternal() {return left != 0 && mid != 0 &&right != 0;}
            bool isExternal() {return left != 0 || mid != 0 || right != 0;}
            bool isLeaf() {return left == 0 && mid == 0 && right == 0;}
            int height() //implement
            {
                int count = 0;;
                int count1 = 0;
                while (left != NULL)
                {
                    count ++;
                }
                while (right!= NULL)
                {
                    count ++;
                }
                if ( count < count1)
                {
                    return count1;
                }
                return count;
            }
            int size()
            {
                int count;
                while (left != NULL)
                {
                    count ++;
                }
                while (right!= NULL)
                {
                    count ++;
                }
                return count;
            }
    }; //end node
    
    //const Node* 0;
    Node* root = 0;
    int count;
    public:
        
        void print_node(const Node*n)
        {
            cout << n->value << endl;
        }
        
        
        void preorder(Node* node) const
        {
            if ( node )
            {
                cout << node->value << " ";
                Preorder(node->left);
                Preorder(node->right);
            }
            /*Node *temp = root;
            cout << temp->value << endl;
            while (temp->left != NULL)
            {
                
                temp = temp->left;
                cout << temp->value << endl;
            }
            
            while (temp->right!= NULL)
            {
                 cout << temp->data << endl;
                 temp = temp->right;
            }*/
            
        }
        void postorder(Node* node) const
        {
           if(node != 0)
            {

                postorder(node->left);
                postorder(node->right);
                cout << node->value << endl;

            }
        }
        
        
        BST():count(0), root(0){}
        
        
       
}; //bst
#endif