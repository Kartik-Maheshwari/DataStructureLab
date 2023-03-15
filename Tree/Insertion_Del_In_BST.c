#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;                 // node will store some data
    struct node *right; // right child
    struct node *left;  // left child
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

// function to find the minimum value in a node
struct node *find_minimum(struct node *root){
    if (root == NULL)
        return NULL;
    else if (root->left != NULL)         // node with minimum value will have no left child
        return find_minimum(root->left); // left most element will be minimum
    return root;
}

// deletion
struct node *delete(struct node *root, int x){
    // searching for the item to be deleted
    if (root == NULL)
        return NULL;
    if (x > root->data)
        root->right = delete (root->right, x);
    else if (x < root->data)
        root->left = delete (root->left, x);
    else{
        // No Child node
        if (root->left == NULL && root->right == NULL){
            free(root);
            return NULL;
        }

        // One Child node
        else if (root->left == NULL || root->right == NULL){
            struct node *temp;
            if (root->left == NULL)
                temp = root->right;
            else
                temp = root->left;
            free(root);
            return temp;
        }

        // Two Children
        else{
            struct node *temp = find_minimum(root->right);
            root->data = temp->data;
            root->right = delete (root->right, temp->data);
        }
    }
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
    struct node *root;
    root = new_node(20);
    insert(root, 5);
    insert(root, 1);
    insert(root, 15);
    insert(root, 9);
    insert(root, 7);
    insert(root, 12);
    insert(root, 30);
    insert(root, 25);
    insert(root, 40);
    insert(root, 45);
    insert(root, 42);

    inorder(root);
    printf("\n");
    root = delete (root, 1);
    root = delete (root, 40);
    root = delete (root, 45);
    root = delete (root, 9);
    inorder(root);
    printf("\n");

    return 0;
}
