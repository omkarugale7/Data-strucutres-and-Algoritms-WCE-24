#include<bits/stdc++.h>
using namespace std ;

class Node{
    public :
    int data ;
    Node * left ;
    Node * right ;
    Node(int data, Node* left, Node* right)
    {
        this->data = data ;
        this->left = left ;
        this->right = right ;
    }
} ;

// here we are taking input in preorder and forming a tree
Node * preorderBuild()
{
    int d ;
    cin >> d ;
    if (d == -1) return NULL ;

    // if d != -1 form a node
    Node * n = new Node(d, NULL, NULL) ;

    // now form a left subtree and point left of n to it
    n->left = preorderBuild() ;

    // form right subtree and point right of n to it
    n->right = preorderBuild() ;

    return n ;
}


Node * levelOrderBuild(vector<int> levelOrder)
{
    queue<Node *> q ;

    int n = levelOrder.size() ;

    // make first element root and add it to queue
    Node * root  = new Node(levelOrder[0], NULL, NULL);
    q.push(root) ;

    int  i = 1 ;
    while (!q.empty()) 
    {

        // take out front of queue
         Node * curr = q.front() ;
         q.pop() ;

         if (i < n) {

             // assign left child for curr
             if (levelOrder[i] == -1) {
                 curr->left = NULL ;
             } else 
             {
                 curr->left = new Node(levelOrder[i], NULL, NULL) ;
                 q.push(curr->left) ;
             }
         } 
         i++ ;

         if (i < n) {
                // assign right child for curr
             if (levelOrder[i] == -1) {
                 curr->right = NULL ;
             } else {
                 curr->right = new Node(levelOrder[i], NULL, NULL) ;
                 q.push(curr->right) ;
             }
         } i++ ;
    }

    return root ;
}

void printInorder(Node * root)
{
    if (root == NULL) return ;

    // first print left subtree
    printInorder(root->left) ;

    // then print current root data
    cout << root->data << " " ;

    // then print right subtree
    printInorder(root->right) ;
}


void printPreorder(Node * root)
{

    if (root == NULL) return  ;

     // first print current root data
    cout << root->data<< " ";

    // print left subtree
    printPreorder(root->left) ;

    // print right subtree
    printPreorder(root->right) ;
}

void printPostOrder(Node * root)
{
    if (root == NULL) return ;

    // first print left subtree
    printPostOrder(root->left) ;

    // then print right subtree
    printPostOrder(root->right) ;

    // then print current root data
    cout << root->data << " " ;
}


void printLevelOrder(Node * root)
{
    queue<Node *> q ;

    if (root != NULL) {
        q.push(root) ;
        q.push(NULL) ;
    }

    while (!q.empty())
    {
        Node * curr = q.front() ;
        q.pop() ;

        if (curr == NULL) {
            cout << "\n" ;
            if (!q.empty())
            q.push(NULL) ;

        } 

        else 
        {
            cout << curr->data << " " ;

            if (curr->left != NULL) 
                q.push(curr->left) ;

            if (curr->right != NULL)
              q.push(curr->right) ;
        }
        
    }

}

int height(Node * n)
{
  if (n == NULL) return 0 ;

  if (n->left == NULL && n->right == NULL) return 0 ;

  int x = 0 , y = 0 ;
  if (n->left != NULL) x = height(n->left) ;
  if (n->right != NULL) y = height(n->right) ;

    return max(x, y) + 1 ;

}


int main()
{
    //1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
  Node * root = preorderBuild() ;
  printInorder(root) ;
  cout << "\n" ;
  printLevelOrder(root) ;
  cout << "\nHeight : " << height(root) << " " ;
}












