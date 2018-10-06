#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

struct Node{
	struct Node *left;
	struct Node *right;
	int data;
};

typedef struct Node NODE;

void pre_order(NODE *root);
void in_order(NODE *root);
void post_order(NODE *root);

NODE *create_node();
void insert_node(NODE **root, NODE *new_node);
NODE *delete_node(NODE *root, int item);

		int main()
{
	NODE *root, *new_node;
	root = NULL;
	int choice, item;

	while(1){
		printf("Enter your choice: \n");
		printf("1. Insert\n");
		printf("2. Pre Order Traversal\n");
		printf("3. In Order Traversal\n");
		printf("4. Post Order Traversal\n");
		printf("5. Delete from BST\n");
		scanf("%d", &choice);
		int element;

		switch(choice){
			case 1: new_node = create_node();
							insert_node(&root, new_node);
							break;
			case 2: pre_order(root);
							printf("\n");
				break;
			case 3: in_order(root);
							printf("\n");
				break;
			case 4: post_order(root);
							printf("\n");
				break;
			case 5: printf("Enter item to be deleted\n");
							scanf("%d", &item);
							root = delete_node(root, item);
							break;
			default: printf("Wrong option\n");
		}
	}
}

NODE *min_value_node(NODE *node)
{
    NODE *current = node;

    while (current->left != NULL)
        current = current->left;

    return current;
}

void pre_order(NODE *root)
{
	if(root == NULL){
		return;
	}
	printf("%d ", root->data);
	pre_order(root->left);
	pre_order(root->right);
}

void in_order(NODE *root)
{
	if(root == NULL){
		return;
	}
	in_order(root->left);
	printf("%d ", root->data);
	in_order(root->right);
}

void post_order(NODE *root)
{
	if(root == NULL){
		return;
	}
	post_order(root->left);
	post_order(root->right);
	printf("%d ", root->data);
}

NODE *create_node()
{
	NODE *new_node;
	new_node = (NODE*)malloc(sizeof(NODE));
	int element;
	printf("Enter element\n");
	scanf("%d", &element);
	new_node->left = NULL;
	new_node->data = element;
	new_node->right = NULL;
	return new_node;
}

void insert_node(NODE **root, NODE *new_node)
{
	if(*root == NULL){
		*root = new_node;
	}
	else{
		if(new_node->data > (*root)->data){
			insert_node(&(*root)->right, new_node);
		}
		else{
			insert_node(&(*root)->left, new_node);
		}
	}
}

NODE *delete_node(NODE *root, int item)
{
	if (root == NULL)
		return root;

	if (item < root->data)
        root->left = delete_node(root->left, item);

    else if (item > root->data)
        root->right = delete_node(root->right, item);

    else
	{
		if (root->left == NULL)
		{
			NODE *temp = root->right;
			free(root);
			return temp;
		}
		else if (root->right == NULL)
		{
			NODE *temp = root->left;
			free(root);
			return temp;
		}

		NODE *temp = min_value_node(root->right);

		root->data = temp->data;
        root->right = delete_node(root->right, temp->data);
    }
	return root;
}
