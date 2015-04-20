#include<iostream>
#include<queue>
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
void levelOrderDisplay(Trees *root){
	if (root == NULL)
		return;
	queue<Trees *> q;
	q.push(root);
	while (!q.empty()){
		Trees *temp = q.front();
		q.pop();
		if (temp->left != NULL)
			q.push(temp->left);
		if (temp->right != NULL)
			q.push(temp->right);
		cout << temp->val << " ";
	}
}
vector<vector<int>> levelOrderTraversal(Trees *root){
	vector<vector<int>> v;
	if (root == NULL)
		return v;
	queue<Trees *> q;
	q.push(root);
	while (!q.empty()){
		vector<int> temp;
		queue<Trees *> y;
		while (!q.empty()){
			Trees *x = q.front();
			q.pop();
			temp.push_back(x->val);
			if (x->left != NULL)
				y.push(x->left);
			if (x->right != NULL)
				y.push(x->right);
		}
		v.push_back(temp);
		q = y;
	}
	return v;
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
	levelOrderDisplay(root);
	vector<vector<int>> v = levelOrderTraversal(root);
	for (int i = 0; i < v.size(); i++){
		for (int j = 0; j < v[i].size(); j++){
			cout << v[i][j] << " ";
		}
		cout << "\n";
	}
	cin.ignore();
	return 0;
}
*/