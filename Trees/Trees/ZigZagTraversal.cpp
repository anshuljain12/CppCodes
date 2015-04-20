#include<iostream>
#include<stack>
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

void zigZagDisplay(Trees *root){
	stack<Trees *> s;
	s.push(root);
	bool flag = true;
	while (!s.empty()){
		stack<Trees *> temp;
		while (!s.empty()){
			Trees *b = s.top();
			s.pop();
			cout << b->val <<" ";
			if (flag){
				if (b->left != NULL)
					temp.push(b->left);
				if (b->right != NULL)
					temp.push(b->right);
			}
			else{
				if (b->right != NULL)
					temp.push(b->right);
				if (b->left != NULL)
					temp.push(b->left);
			}
		}
		cout << "\n";
		s = temp;
		flag = !flag;
	}
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
	zigZagDisplay(root);
	cin.ignore();
	return 0;
}