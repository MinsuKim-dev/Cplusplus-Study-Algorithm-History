#pragma once

struct Node
{
	Node*	prarent = nullptr;
	Node*	left = nullptr;
	Node*	right = nullptr;
	int		key = { }; // data
};

class BinarySearchTree
{
public:
	void Print() { Print(_root, 10, 0); }
	void Print(Node* node, int x, int y);
	void PrintInOrder() { PrintInOrder(_root); }
	void PrintInOrder(Node* node);

	Node* Search1(Node* node, int key);
	Node* Search2(Node* node, int key);

	Node* Min(Node* node);
	Node* Max(Node* node);
	Node* Next(Node* node);

	void Insert(int key);

	void Delete(int key);
	void Delete(Node* node);

	void Replace(Node* u, Node* v);

private:
	Node* _root = nullptr;


};

