#include<iostream>
using namespace std;

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
Trees * commonAncestorInBinaryTree(Trees *root, Trees *a, Trees *b){
	if (root == NULL)
		return root;
	if (root->val == a->val || root->val == b->val)
		return root;
	Trees *left = commonAncestorInBinaryTree(root->left, a, b);
	Trees *right = commonAncestorInBinaryTree(root->right, a, b);
	if (left != NULL && right != NULL)
		return root;
	if (left != NULL)
		return left;
	if (right != NULL)
		return right;
	return NULL;
}
Trees * commonAncestorInBST(Trees *root, Trees *a, Trees *b){
	if (root == NULL)
		return root;
	if (root->val == a->val || root->val == b->val)
		return root;
	Trees *min = NULL, *max = NULL;
	if (a->val > b->val){
		min = b;
		max = a;
	}
	else{
		min = a;
		max = b;
	}
	if (min->val<root->val && max->val>root->val)
		return root;
	if (min->val < root->val && max->val < root->val)
		return commonAncestorInBST(root->left, a, b);
	else
		return commonAncestorInBST(root->right, a, b);
}
Trees * searchNode(Trees *root, int data){
	if (root == NULL || root->val == data)
		return root;
	if (root->val > data)
		return searchNode(root->left, data);
	else
		return searchNode(root->right, data);
}
int main(){
	Trees *root = newNode(8);
	root->left = newNode(4);
	root->left->left = newNode(3);
	root->left->left->left = newNode(1);
	root->left->right = newNode(5);
	root->right = newNode(20);
	root->right->left = newNode(10);
	root->right->left->left = newNode(9);
	root->right->left->right = newNode(15);
	root->right->right = newNode(25);
	root->right->right->right = newNode(40);
	root->right->right->left = newNode(22);
	cout << commonAncestorInBinaryTree(root,searchNode(root, 4),searchNode(root, 40))->val << "\n";
	cout << commonAncestorInBST(root, searchNode(root, 9), searchNode(root, 22))->val << "\n";
	cin.ignore();
	return 0;
}
