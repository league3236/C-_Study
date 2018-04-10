//해당 저작권 : jizard.tistory.com
//18.04.10 이진트리 만들기 공부

#include <iostream>
#define null 0

using namespace std;

template <typename T>
class Tree;


template <typename T>
class TreeNode {
	friend class Tree<T>; // private지만 Tree에서 사용할 수 있게 친구를 맺어줌. 하지만 TreeNode가 Tree를 가져오는건 x
private:
	T data;
	TreeNode* left;
	TreeNode* right;
public:
	TreeNode(T data =0, TreeNode* left = null, TreeNode* right = null) {
		this->data = data;
		this->left = left;
		this->right = right;
	}
};


template <typename T>
class Tree {
private:
	TreeNode<T>* root;
	
public:
	Tree(T data = 0) {
		root = new TreeNode<T>(data);
	}
	//Tree 만들기
	/*
				A
			B		C
		D	  E	  F	   G
	H	  I J	 K
	*/
	void buildTree() {
		root->left = new TreeNode<T>('B', new TreeNode<T>('D', new TreeNode<T>('H'), new TreeNode<T>('I')), new TreeNode<T>('E', new TreeNode<T>('J')));
		root->right = new TreeNode<T>('C', new TreeNode<T>('F',new TreeNode<T>('K')),new TreeNode<T>('G'));
	}

	TreeNode<T>* getRoot() {
		return root;
	}

	void visit(TreeNode<T>* current) {
		cout << current->data << " ";
	}

	//전위 순회 Current - Left - Right
	void preorder(TreeNode<T>* current) {
		if (current != null) {
			visit(current);
			preorder(current->left);
			preorder(current->right);
		}
	}

	//중위 순회 Left - Current - Right
	void inorder(TreeNode<T>* current) {
		if (current != null) {
			inorder(current->left);
			visit(current);
			inorder(current->right);
		}
	}

	//후위 순회 Left - Right - Current
	void postorder(TreeNode<T>* current) {
		if (current != null) {
			postorder(current->left);
			postorder(current->right);
			visit(current);
		}
	}

};

int main() {
	Tree<char> tree('A');
	tree.buildTree();
	cout << "Preorder >> ";
	tree.preorder(tree.getRoot());
	cout << endl;

	cout << "Inorder >> ";
	tree.inorder(tree.getRoot());
	cout << endl;

	cout << "Postorder >> ";
	tree.postorder(tree.getRoot());
	cout << endl;

	return 0;
}
