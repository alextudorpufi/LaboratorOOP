#pragma once
template <class T>
class Nod {
public:
	T info;
	Nod* st;
	Nod* dr;
	Nod(const T& _info) : info(_info) {}
	Nod(const T& _info, Nod* _st, Nod* _dr) : info(_info), st(_st), dr(_dr) {}

};

template <class T>
class binaryTree {
private:
	Nod<T>* root;

public:

	binaryTree(Nod<T>* _root): root(_root){}
	Nod<T> searchParent(Nod<T> p, Nod<T>* searched)
	{	
		if (p != NULL)
		{
			if (p->st->info == searched->info || p->dr->info == searched->info)
				return p;
			else
			{
				searchParent(p->st, searched);
				searchParent(p->dr, searched);
			}
		}
	}

	void add_node(Nod<T>* newNode, Nod<T>* parent)
	{
		if (parent == nullptr)
			root = newNode;
		else if (parent->info > newNode->info) {
			if (parent->st == nullptr)
				parent->st = newNode;
			else
				add_node(newNode, parent->st);
		}
		else {
			if (parent->dr == nullptr)
				parent->dr = newNode;
			else
				add_node(newNode, parent->dr);
		}
	}
	void insert_node(Nod<T>* newNode,Nod<T> _root)
	{
		if (_root != NULL)
		{
			if (_root->info > newNode->info)
				if (_root->st == NULL)
				{
					_root->st = newNode; break;
				}
				else
					add_node(Nod<T>*newNode, Nod<T> _root->st);
			else
				if (_root->dr == NULL)
				{
					_root->dr = newNode; break;
				}
				else
					add_node(Nod<T>*newNode, Nod<T> _root->dr);
		}
	}
	Nod<T> get_node(Nod<T>* parent)
	{
		if (parent == nullptr)
			return root;
		else if (parent->st != nullptr)
			return parent->st;
		else if (parent->dr != nullptr)
			return parent->dr;
	} // mai e de work aici
	Nod<T> find(Nod<T>* _root, const T& parameter)
	{
		if (searchParent(_root)->st == parameter)
			return parameter;
		else
			return searchParent(_root->st, const T & parameter);
	}

};