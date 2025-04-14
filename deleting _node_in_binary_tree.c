#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

// Create a new node
struct Node* newNode(int data) {
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

// Level-order traversal to delete the deepest node
void deleteDeepest(struct Node* root, struct Node* d_node) {
    struct Node* temp;
    struct Node* last = NULL;
    struct Node** queue = (struct Node**) malloc(100 * sizeof(struct Node*));
    int front = 0, rear = 0;

    queue[rear++] = root;

    while (front < rear) {
        temp = queue[front++];

        if (temp->left) {
            if (temp->left == d_node) {
                temp->left = NULL;
                free(d_node);
                return;
            } else {
                queue[rear++] = temp->left;
            }
        }

        if (temp->right) {
            if (temp->right == d_node) {
                temp->right = NULL;
                free(d_node);
                return;
            } else {
                queue[rear++] = temp->right;
            }
        }
    }

    free(queue);
}

// Main delete function
struct Node* deleteNode(struct Node* root, int key) {
    if (!root) return NULL;

    if (!root->left && !root->right) {
        if (root->data == key) {
            free(root);
            return NULL;
        } else {
            return root;
        }
    }

    struct Node* temp;
    struct Node* key_node = NULL;
    struct Node** queue = (struct Node**) malloc(100 * sizeof(struct Node*));
    int front = 0, rear = 0;

    queue[rear++] = root;

    while (front < rear) {
        temp = queue[front++];

        if (temp->data == key)
            key_node = temp;

        if (temp->left)
            queue[rear++] = temp->left;

        if (temp->right)
            queue[rear++] = temp->right;
    }

    if (key_node) {
        int x = temp->data;
        deleteDeepest(root, temp);
        key_node->data = x;
    }

    free(queue);
    return root;
}

// Inorder traversal
void inorder(struct Node* root) {
    if (root) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

// Example usage
int main() {
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    printf("Inorder before deletion:\n");
    inorder(root);

    int key = 2;
    root = deleteNode(root, key);

    printf("\nInorder after deleting %d:\n", key);
    inorder(root);

    return 0;
}

/* OUTPUT
Inorder before deletion:
4 2 5 1 3
Inorder after deleting 2:
4 5 1 3*/
