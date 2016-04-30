import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		Tree tree;
		int t, n;
		
		t = scanner.nextInt();
		
		for (int tc = 1; tc <= t; tc++) {
			tree = new Tree();
			n = scanner.nextInt();
			
			for (int i = 0; i < n; i++) {
				tree.insert(scanner.nextInt());
			}
			
			System.out.println("Case " + tc + ":");
			System.out.print("Pre.:");
			tree.preOrderTraversal();
			System.out.println();
			System.out.print("In..:");
			tree.inOrderTraversal();
			System.out.println();
			System.out.print("Post:");
			tree.postOrderTraversal();
			System.out.println();
			System.out.println();
		}
		
		scanner.close();
	}
}

class Tree {

	private Node root;
	
	public Tree() {
	}
	
	public Tree(Node root) {
		this.root = root;
	}

	public Node getRoot() {
		return root;
	}
	
	public void insert(int key) {
		insert(new Node(key));
	}
	
	public void insert(Node node) {
		if (root == null) {
			root = node;
		} else {
			insert(root, node);
		}
	}
	
	private void insert(Node parent, Node newNode) {
		if (newNode.getKey() < parent.getKey()) {
			if (parent.getLeft() == null) {
				parent.setLeft(newNode);
			} else {
				insert(parent.getLeft(), newNode);
			}
		} else if (newNode.getKey() > parent.getKey()) {
			if (parent.getRight() == null) {
				parent.setRight(newNode);
			} else {
				insert(parent.getRight(), newNode);
			}
		}
	}
	
	public void inOrderTraversal() {
		inOrderTraversal(root);
	}
	
	public void inOrderTraversal(Node node) {
		if (node != null) {
			inOrderTraversal(node.getLeft());
			System.out.print(" " + node.getKey());
			inOrderTraversal(node.getRight());
		}
	}
	
	public void preOrderTraversal() {
		preOrderTraversal(root);
	}
	
	public void preOrderTraversal(Node node) {
		if (node != null) {
			System.out.print(" " + node.getKey());
			preOrderTraversal(node.getLeft());
			preOrderTraversal(node.getRight());
		}
	}
	
	public void postOrderTraversal() {
		postOrderTraversal(root);
	}
	
	public void postOrderTraversal(Node node) {
		if (node != null) {
			postOrderTraversal(node.getLeft());
			postOrderTraversal(node.getRight());
			System.out.print(" " + node.getKey());
		}
	}
}

class Node {
	
	private int key;
	private Node left, right;

	public Node() {
	}
	
	public Node(int key) {
		this.key = key;
	}
	
	public int getKey() {
		return key;
	}
	public void setKey(int key) {
		this.key = key;
	}
	public Node getLeft() {
		return left;
	}
	public void setLeft(Node left) {
		this.left = left;
	}
	public Node getRight() {
		return right;
	}
	public void setRight(Node right) {
		this.right = right;
	}
}
