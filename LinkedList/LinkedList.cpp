#include<iostream>
using namespace std;

struct LinkedList{
	struct LinkedList *next;
	int val;
};
LinkedList * newNode(int val){
	LinkedList *temp = new LinkedList;
	temp->next = NULL;
	temp->val = val;
	return temp;
}
LinkedList * insertAtStart(LinkedList *head, int data){
	LinkedList *temp = newNode(data);
	temp->next = head;
	return temp;
}
LinkedList * insertAtIndex(LinkedList *head, int data, int index){
	if (index == 0)
		return insertAtStart(head, data);
	LinkedList *temp = newNode(data);
	LinkedList *a = head;
	for (int i = 1; i < index-1 && a->next != NULL; i++)
		a = a->next;
	temp->next = a->next;
	a->next = temp;
	return head;
}
void displayLL(LinkedList *head){
	while (head->next != NULL)
	{
		cout << head->val << "-->";
		head = head->next;
	}
	cout << head->val;
}
bool searchNode(LinkedList *head, int data){
	while (head != NULL){
		if (head->val == data)
			return true;
		head = head->next;
	}
	return false;
}
LinkedList * deleteNode(LinkedList *head, int data){
	if (head == NULL)
		return NULL;
	if (head->val == data)
		return head->next;
	LinkedList * temp = head;
	while (head->next != NULL){
		if (head->next->val == data){
			head->next = head->next->next;
			return temp;
		}
		head = head->next;
	}
	return temp;
}
int main(){
	int a[] = { 1, 2, 3, 4, 5 };
	LinkedList * head = NULL;
	for (int i = 0; i < 5; i++)
		head = insertAtStart(head, a[i]);
	head = insertAtIndex(head, 6, 0);
	displayLL(head);
	cout << "\n";
	cout << searchNode(head, 7);
	cout << "\n";
	cout << searchNode(head, 4);
	cout << "\n";
	displayLL(head);
	head = deleteNode(head, 2);
	cout << "\n";
	displayLL(head);
	head = deleteNode(head, 1);
	cout << "\n";
	displayLL(head);
	head = deleteNode(head, 6);
	cout << "\n";
	displayLL(head);
	head = deleteNode(head, 7);
	cout << "\n";
	displayLL(head);
	cin.ignore();
}
