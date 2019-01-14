#include<bits/stdc++.h>

using namespace std;

#define PROBLEM "12347"

struct node{

	int data;
	node *left  = NULL;
	node *right = NULL;
};

node *insert(node *head, int item){

	node *tmp = new node;
	tmp->data = item;

	if(!head)
		return tmp;
	
	node *now    = head;
	node *parent = head;

	while(now != NULL){

		parent = now;
		if(now->data > item)
			now = now->left;
		
		else
			now = now->right;
	}
	if(parent->data > item)
		parent->left  = tmp;
	else
		parent->right = tmp;

	//printf("%d\n", tmp->data);
	return head;
}

void Post(node *Root){

	if(!Root)
		return;
	Post(Root->left);
	Post(Root->right);
	printf("%d\n", Root->data);
}

int main(void){

	#ifdef DBG
	freopen(PROBLEM ".in", "r", stdin);
	freopen(PROBLEM ".out", "w", stdout);
	#endif

	node *head = NULL;
	int tmp;

	while(scanf("%d", &tmp) != EOF){

		head = insert(head, tmp);
	}
	Post(head);
	
	return 0;
}