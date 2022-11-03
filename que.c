// first in first out method
// leave from the front
// added from the rear
// in stack to add and remove we had only one access point - top
// in que we have two access points , front and rear
// in real world when one leaves all the elements move one step forward but that sort of implementation is costly 
// when it comes to computational world 
// 
#include <stdio.h>
#define size 5
struct que{
    int arr[size];
    int front; 
    int rear;


}q1;

// write the four functions enquee dequee isempty isfull
void enquee(int data){
    if(size!=q1.rear){
        q1.arr[q1.rear]=data;
        q1.rear++;
    }else{
        printf("que is full \n");
    }
}
void dequee(){
    if(q1.front<size-1){
        q1.front++;
        int element = q1.arr[q1.front];
        printf("%d \n", element);
    }else{
        printf("que is empty \n");
    }
    
}
int main(){
    q1.front=-1;
    q1.rear=0;
   enquee(10);
   enquee(20);
   enquee(30);
   enquee(40);
   enquee(50);

   dequee();
   dequee();
   dequee();
   dequee();
   dequee();
   dequee();
   dequee();

  enquee(25);

   
   
}