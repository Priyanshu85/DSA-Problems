#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define n 10

// WE CREATE A CLASS QUEUE 
class Queue{

    // WE HABE TWO ENDS FRONT AND REAR OF QUEUE
        public:
        int front,rear;
    
    // WE CREATE AN ARR OF SIZE 10
        int arr[n];
        Queue(){

            //WE INITIALIZE FRONT AND REAR TO -1 

            front =-1;
            rear=-1;
            for(int i=0;i<n;i++){
                //INITIALIZE ARRAY AS 0

                arr[i]=0;
            }
        } 
        bool isempty(){
            // WE CHECK IF REAR = -1 
            //IF IT IS TREU THEN IT IS EMPTY.

            if(rear==-1){
                return true;
            }
            else{
                return false;
            }

        } 
        bool isfull(){

            // IF REAR == N (i.e 10) THEN WE SAY IT IS FULL

            if(rear==n){
                return true;
            }
            else{
                return false;
            }

        }

        // Add element to queue

        void enque(int data){
            //check if queue is full or not.

            if(isfull()){
                cout<<"Queue overflowed"<<endl;
            }

            // if not full then we increment rear by 1 and add element to location pointed by rear

            else{
                ++rear;
                arr[rear]=data;
            }
        }

        //remove element from queue

        void deque(){
            //check if queue is empty 

            if(isempty()){
                cout<<"Queue underflow"<<endl;
            }

            //if not empty increment front

            else{
                ++front;
            }
        }

        //print elements of queue

        void print()
        {
            //check if front and rear both are equal queue empty
            if(front==rear)
            {
                cout<<"nothing to  print"<<endl;
            }

            else
            {
                for(int i=front+1;i<=rear;i++){
                    cout<<arr[i]<<" ";
                }
            }
        }
};

int main () {
    Queue b;
    b.enque(1);
    b.enque(2);
    b.enque(3);
    b.enque(4);
    b.enque(5);
    b.enque(6);
    b.enque(7);
    b.deque();
    b.deque();
    b.deque();
    b.deque();
    b.print();
    return 0;
}