import java.util.*;
/* class Node {
  int data; // data used as key value
  Node leftChild;
  Node rightChild;
  public Node()  {
    data=0;  }
  public Node(int d)  {
    data=d;  }
 } Above class is declared for use. */
class Result {
  static List<Integer> levelList(Node root, int target) {
    List<Integer> temp = new ArrayList<>();
    if(root==null) {
      return temp;
    }
    Queue<Node> queue = new LinkedList<>();
    queue.offer(root);
    boolean flag = false;
    
    while(!queue.isEmpty())
    {
      int levelSize = queue.size();
      List<Integer> result = new ArrayList<>();
      for(int i=0;i<levelSize;i++) 
      {
        Node currentNode = queue.poll();
        result.add(currentNode.data);
        if(currentNode.data==target) {
          flag = true;
        }
        if(currentNode.leftChild != null) {
          queue.offer(currentNode.leftChild);
        }
        if(currentNode.rightChild != null) {
          queue.offer(currentNode.rightChild);
        }
      }
      if(flag==true) {
        return result;
      }
    }
    return temp;
  }
  
  static boolean isSibling(Node root, int num, int target)
  {
    if(root==null) {
      return false;
    }
    if(root.leftChild != null && root.rightChild != null)
    {
      if((root.leftChild.data == num && root.rightChild.data == target) ||
         (root.leftChild.data == target && root.rightChild.data == num)) 
      {
        return true;
      }
    }
    return (isSibling(root.leftChild,num,target) || isSibling(root.rightChild,num,target));
  }
  static void printCousins(Node root, int k) {
    List<Integer> result = levelList(root,k);
    boolean found = false;
    
    for(int val : result) {
      if(val != k && !isSibling(root,val,k)) {
        found = true;
        System.out.print(val + " ");
      }
    }
    
    if(!found) {
      System.out.print(-1);
    }
    
  }
}
