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
static void printLevelWise(Node root) {
  // Write your code here
  List<List<Integer>> result = new ArrayList<>();
  if(root==null) {
    return;
  }
  Queue<Node> queue = new LinkedList<>();
  queue.offer(root);
  while(!queue.isEmpty())
  {
    int levelSize = queue.size();
    List<Integer> currentLevel = new ArrayList<>(levelSize);
    for(int i=0;i<levelSize;i++) {
      Node currentNode = queue.poll();
      // currentLevel.add(CurrentNode.data); 
      System.out.print(currentNode.data);
      if(i!=levelSize-1) {
        System.out.print(" ");
      }
      if(currentNode.left != null) {
        queue.offer(currentNode.left);
      }
      if(currentNode.right != null) {
        queue.offer(currentNode.right);
      }
    }
    System.out.println();
    //result.add(currentLevel);
  }
}
