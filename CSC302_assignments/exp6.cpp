#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
	int coeff, power;
	Node *next;
	Node(int coeff, int power)
	{
		this->coeff = coeff;
		this->power = power;
		this->next = NULL;
	}
};

void addPolynomials(Node *head1, Node *head2)
{

	if (head1 == NULL && head2 == NULL)
		return;
	else if (head1->power == head2->power)
	{
		cout << " " << head1->coeff + head2->coeff << "x^" << head1->power << " ";
		addPolynomials(head1->next, head2->next);
	}
	else if (head1->power > head2->power)
	{
		cout << " " << head1->coeff << "x^" << head1->power << " ";
		addPolynomials(head1->next, head2);
	}
	else
	{
		cout << " " << head2->coeff << "x^" << head2->power << " ";
		addPolynomials(head1, head2->next);
	}
}

void insert(Node *head, int coeff, int power)
{
	Node *new_node = new Node(coeff, power);
	while (head->next != NULL)
	{
		head = head->next;
	}
	head->next = new_node;
}

void printList(Node *head)
{
	cout << "Linked List" << endl;
	while (head != NULL)
	{
		cout << " " << head->coeff << "x" << "^" << head->power;
		head = head->next;
	}
}

int main()
{
	int n, p, pow, coeff;
	cout << "Enter no. of terms in 1st polynomial - ";
	cin >> n;
	p = n;
	Node *head;
	while (n--)
	{
		cout << "Enter power of term number " << p - n << " :: ";
		cin >> pow;
		cout << "Enter coefficient of term number " << p - n << " :: ";
		cin >> coeff;
		if (n == p - 1)
			head = new Node(coeff, pow);
		else
			insert(head, coeff, pow);
	}
	cout << "Enter no. of terms in 2nd polynomial - ";
	cin >> n;
	p = n;
	Node *head2;
	while (n--)
	{
		cout << "Enter power of term number " << p - n << " :: ";
		cin >> pow;
		cout << "Enter coefficient of term number " << p - n << " :: ";
		cin >> coeff;
		if (n == p - 1)
			head2 = new Node(coeff, pow);
		else
			insert(head2, coeff, pow);
	}
	printList(head);
	cout << endl;
	printList(head2);
	cout << endl
		 << "Addition:" << endl;
	addPolynomials(head, head2);

	return 0;
}
