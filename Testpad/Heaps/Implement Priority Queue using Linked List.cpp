/* class QueueNode
{
  int data;
  int priority;
  QueueNode next;
  public QueueNode(int data, int p) 
  {
    this.data = data;
    this.priority = p;
  }
} is provided to you. */ 

class PQueueLL
{
    public QueueNode front, rear;
    
    public PQueueLL() {
        front = null;
        rear = null;
    }
  
    public void EnQueue(int data, int priority)
    {
        QueueNode newNode = new QueueNode(data,priority);
        
        if(front==null || priority < front.priority) {
            newNode.next = front;
            front = newNode;
            if(rear==null) {
                rear = newNode;
            }
            return;
        }
        
        QueueNode current = front;
        while(current.next != null && current.next.priority <= priority) {
            current = current.next;
        }
        
        newNode.next = current.next;
        current.next = newNode;
        
        if(newNode.next==null) {
            rear = newNode;
        }
    }    

    public int DeQueue()
    {
        if(front==null) {
            return -1;
        }
        
        int result = front.data;
        front = front.next;
        
        if(front==null) {
            rear = null;
        }
        
        return result;
    }    
}
