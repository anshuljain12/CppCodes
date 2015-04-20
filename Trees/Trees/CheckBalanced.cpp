#include<iostream>
#include<cmath>
using namespace std;
/*
struct Trees{
	Trees *left;
	Trees *right;
	int val;
};
Trees * newNode(int val){
	Trees *temp = new Trees;
	temp->left = temp->right = NULL;
	temp->val = val;
	return temp;
}
int getHeight(Trees *root){
	if (root == NULL)
		return 0;
	int left = getHeight(root->left);
	int right = getHeight(root->right);
	if (left == -1 || right == -1)
		return -1;
	if (abs(left - right) > 1)
		return -1;
	if (left > right)
		return left + 1;
	else
		return right + 1;
}
bool checkBalanced(Trees *root){
	if (root == NULL)
		return true;
	if (getHeight(root)==-1)
		return false;
	return true;
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
	cout << checkBalanced(root);
	cin.ignore();
	return 0;
}
*/