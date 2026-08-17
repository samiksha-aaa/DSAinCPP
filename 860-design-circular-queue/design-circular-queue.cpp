class MyCircularQueue {
public:
int* arr;
int front;
int rear;
int size;
    MyCircularQueue(int k) {
        size=k;
        arr=new int[k];
        front=-1;
        rear=-1;
    }
    
    bool enQueue(int value) {
        if(isFull()){
            return false;
        } 
         if (isEmpty()) {
            front = 0;
            rear = 0;
            arr[rear] = value;
            return true;
        }

        rear=(rear+1)%size;
        arr[rear]=value;
        return true;
    }
    
    bool deQueue() {
       if(isEmpty()){
        return false;
       }
       // Only one element
        if (front == rear) {
            front = -1;
            rear = -1;
            return true;
        }
              front=(front+1)%size;
       return true;
    }
    
    int Front() {
        if(front==-1){
            return -1;
        } else{
return arr[front];
        }
    }
    
    int Rear() {
        if(rear==-1){
            return -1;
        }else{
            return arr[rear];
        }
    }
    
    bool isEmpty() {
        if(front==-1 && rear==-1){
            return true;
        } else{
            return false;
        }
    }
    
    bool isFull() {
        if((rear+1)%size==front){
            return true;
        } return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */