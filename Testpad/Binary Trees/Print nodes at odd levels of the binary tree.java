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
class Result {
  static void printOdd(Node root) {
	// Write your code here
    if(root==null) {
      return;
    }
    
    Queue<Node> queue = new LinkedList<>();
    queue.offer(root);
    int level = 1;
    
    while(!queue.isEmpty())
    {
      int levelSize = queue.size();
      for(int i=0;i<levelSize;i++) {
        Node currentNode = queue.poll();
        if(level%2!=0) {
          System.out.print(currentNode.data + " ");
        }
        if(currentNode.left != null) {
          queue.offer(currentNode.left);
        }
        if(currentNode.right != null) {
          queue.offer(currentNode.right);
        }
      }
      level += 1;
    }
  }
}
