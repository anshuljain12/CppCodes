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
	inOrderTraversal(root);
	cout << "\n";
	preOrderTraversal(root);
	cout << "\n";
	postOrderTraversal(root);
	cin.ignore();
	return 0;
}
