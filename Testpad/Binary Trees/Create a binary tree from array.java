/* 
 *  class Node {
 *    int data;
 *    Node left; 
 *    Node right;
 *    public Node() {
 *      data = 0;
 *    }
 *    public Node(int d)  {
 *      data = d;
 *    }
 *  }
 *
 *  The above class defines a tree node.
 */

// Return the root node of the tree
static Node buildTree(int arr[], int n) {
  // Complete the function body
  if(n==0) {
    return null;
  }
  
  Node root = new Node(arr[0]);
  Queue<Node> queue = new LinkedList<>();
  queue.offer(root);
  
  int i = 1;
  while(i<n)
  {
    Node currentNode = queue.poll();
    if(i<n) {
      currentNode.left = new Node(arr[i]);
      i++;
      queue.offer(currentNode.left);
    }
    if(i<n) {
      currentNode.right = new Node(arr[i]);
      i++;
      queue.offer(currentNode.right);
    }
  }
  
  return root;
}
