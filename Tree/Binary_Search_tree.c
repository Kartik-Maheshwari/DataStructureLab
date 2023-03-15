#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *right;
    struct node *left; 
};

// function to create a node
struct node *new_node(int x){
    struct node *temp;
    temp = malloc(sizeof(struct node));
    temp->data = x;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

// searching operation
int search(struct node *root, int x){
    if (root->data == x) // if root->data is x then the element is found
        return 1;
    else if(root == NULL)
        return 0;
    else if (x > root->data) // x is greater, so we will search the right subtree
        return search(root->right, x);
    else // x is smaller than the data, so we will search the left subtree
        return search(root->left, x);
}

// insertion
struct node *insert(struct node *root, int x){
    // searching for the place to insert
    if (root == NULL)
        return new_node(x);
    else if (x > root->data) // x is greater. Should be inserted to the right
        root->right = insert(root->right, x);
    else // x is smaller and should be inserted to left
        root->left = insert(root->left, x);
    return root;
}


// Inorder Traversal
void inorder(struct node *root){
    if (root != NULL){ // checking if the root is not null
        inorder(root->left);  // traversing left child
        printf(" %d ", root->data); // printing data at root
        inorder(root->right); // traversing right child
    }
}

int main(){
    printf("Name: Kartik Maheshwari \tRoll No: 2100320120086  \t Branch and Section: CS-B\n");
    int n;
    struct node *root;
    root = new_node(20);
    insert(root, 5);
    insert(root, 1);
    insert(root, 15);
    insert(root, 9);
    insert(root, 7);
    insert(root, 12);
    insert(root, 30);

    inorder(root);
    printf("\n");
    printf("Enter the value to be searched: ");
    scanf("%d",&n);
    if(search(root, n)){
        printf("\nElement is Found.");
    }
    else{
        printf("\nElement is Not present.");
    }

    return 0;
}
