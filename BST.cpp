#include<iostream>
#include <iomanip>
using namespace std;

struct node
{
    int key;
    node *left;
	node *right;
};
  
// A utility function to create a new BST node
struct node *newNode(int item)
{
    node *temp =  new node;
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
  
// A utility function to do inorder traversal of BST
void inorder(node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout<<root->key<<endl;
        inorder(root->right);
    }
}

/* A utility function to insert a new node with given key in BST */
node* insert(node* node, int key)
{
    /* If the tree is empty, return a new node */
    if (node == NULL) 
	{
		return newNode(key);
	}
 
    /* Otherwise, recur down the tree */
    if (key < node->key)
        node->left  = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);   
 
    /* return the (unchanged) node pointer */
    return node;
}



node* search(node* root, int key)
{
    // Base Cases: root is null or key is present at root
    if (root == NULL || root->key == key)
       return root;
    
    // Key is greater than root's key
    if (root->key < key)
       return search(root->right, key);
 
    // Key is smaller than root's key
    return search(root->left, key);
}

void postorder(node* p, int indent=0)
{
    if(p != NULL) {
        if(p->left) postorder(p->left, indent+4);
        if(p->right) postorder(p->right, indent+4);
        if (indent) {
            cout<<setw(indent) << ' ';
        }
        cout<< p->key << "\n ";
    }
}


int main()
{
    /* Let us create following BST
              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80 */
    node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    // print inoder traversal of the BST 
   cout<<"Ordered List" <<endl;  
   //inorder(root);
   postorder(root);
  
    cout<<endl<<endl<<"********Search******"<<endl;
    node *sresult = new node;
    sresult = search(root,70);
    cout<<endl<<"Search Result  :"<<sresult->key;
    
  
   
    return 0;
}


