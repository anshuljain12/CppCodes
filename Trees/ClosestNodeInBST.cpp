#include<iostream>
#include<cmath>
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
Trees * closestNode(Trees *root, int data){
	if (root == NULL)
		return root;
	if (root->val == data)
		return root;
	Trees *temp = NULL;
	if (root->val > data)
		temp = closestNode(root->left, data);
	else
		temp = closestNode(root->right, data);
	if (temp == NULL)
		return root;
	if (abs(root->val - data) < abs(temp->val - data))
		return root;
	else
		return temp;
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
	cout << closestNode(root, 7)->val;
	cout << closestNode(root, 6)->val;
	cin.ignore();
	return 0;
}
