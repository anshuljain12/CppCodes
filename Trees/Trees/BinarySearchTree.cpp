#include<iostream>
using namespace std;
/*
struct Trees{
	struct Trees *left;
	struct Trees *right;
	int val;
};
Trees * newNode(int val){
	Trees *temp = new Trees;
	temp->val = val;
	temp->left = temp->right = NULL;
	return temp;
}

void inOrderTraversal(Trees *root){
	if (root == NULL)
		return;
	inOrderTraversal(root->left);
	cout << root->val << " ";
	inOrderTraversal(root->right);
}
void preOrderTraversal(Trees *root){
	if (root == NULL)
		return;
	cout << root->val << " ";
	inOrderTraversal(root->left);
	inOrderTraversal(root->right);
}
void postOrderTraversal(Trees *root){
	if (root == NULL)
		return;
	inOrderTraversal(root->left);
	inOrderTraversal(root->right);
	cout << root->val << " ";
}

Trees * searchNode(Trees *root, int data){
	if (root == NULL || root->val == data)
		return root;
	if (root->val > data)
		return searchNode(root->left, data);
	else
		return searchNode(root->right, data);
}
Trees * insertNode(Trees *root, int data){
	Trees *temp = root;
	if (root == NULL)
		return newNode(data);
	while (temp != NULL){
		if (temp->val > data){
			if (temp->left == NULL){
				temp->left = newNode(data);
				break;
			}
			temp = temp->left;
		}
		else{
			if (temp->right == NULL){
				temp->right = newNode(data);
				break;
			}
			temp = temp->right;
		}
	}
	return root;
}
Trees * deleteNode(Trees *root, int data){
	if (root == NULL)
		return root;
	if (root->val == data)
	{
		if (root->left == NULL && root->right == NULL)
			return NULL;
		if (root->left == NULL)
			return root->right;
		if (root->right == NULL)
			return root->left;
		Trees *temp = root->left;
		while (temp->right != NULL)
			temp = temp->right;
		int a = temp->val;
		deleteNode(root, a);
		root->val = a;
	}
	if (root->val>data)
		root->left = deleteNode(root->left, data);
	else
		root->right = deleteNode(root->right, data);
	return root;
}
Trees *deleteNode(Trees *root, Trees *node){
	if (root == NULL || node == NULL)
		return root;
	if (node->left == NULL && node->right == NULL){
		node = NULL;
		return root;
	}
	else if (node->left == NULL)
		node = node->right;
	else if (node->right == NULL)
		node = node->left;
	else
	{
		Trees *temp = node->left;
		while (temp->right != NULL)
			temp = temp->right;
		node->val = temp->val;
		deleteNode(root, temp);
	}
	return root;
}
int main(){
	int a[] = {8,4,3,5,15,22,1,10,9,20};
	int n = sizeof(a) / sizeof(int);
	Trees *root = NULL;
	for (int i = 0; i < n; i++){
		root = insertNode(root, a[i]);
	}
	inOrderTraversal(root);
	Trees *node = searchNode(root, 5);
	if (node!=NULL)
		cout << "\n" << node->val;
	deleteNode(root, 8);
	cout << "\n";
	inOrderTraversal(root);
	cout << "\n";
	deleteNode(root, root);
	inOrderTraversal(root);
	cin.ignore();
	return 0;
}
*/