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
bool checkFullTree(Trees *root){
	if (root == NULL)
		return true;
	if (root->left == NULL && root->right == NULL)
		return true;
	if (root->left != NULL && root->right != NULL)
		return (checkFullTree(root->left) && checkFullTree(root->right));
	return false;
}
int main(){
	Trees *root = newNode(8);
	root->left = newNode(4);
	root->left->left = newNode(3);
	//root->left->left->left = newNode(1);
	root->left->right = newNode(5);
	root->right = newNode(20);
	root->right->left = newNode(10);
	root->right->left->left = newNode(9);
	root->right->left->right = newNode(15);
	root->right->right = newNode(25);
	root->right->right->right = newNode(40);
	root->right->right->left = newNode(22);
	cout << checkFullTree(root);
	cin.ignore();
	return 0;
}
*/