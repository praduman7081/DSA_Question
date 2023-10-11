#include<iostream>
  using namespace std;
  
 #define n 100 
  class stack{
      int* arr;
      int top;
      public:
      stack(){
          arr= new int[n];
          top=-1;
      }
      void push(int x){
          if(top==n-1){
              cout<<"Stack overflow"<<endl;
          }
          top++;
          arr[top]=x;
      }
     
     void pop(){
         if(top==-1){
              cout<<"No element to pop"<<endl;
              return;
         }
         top--;
     }
     int peek(){
         if(top==-1){
             cout<<"stack is empty"<<endl;
             return  -1;
         }
         return arr[top];
        //  cout<<arr[top]<<endl; 
     }

     bool empty(){
        
       return top== -1;
         
     }

  };

int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    cout<<st.empty()<<endl;
    st.pop(); 
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    cout<<st.empty()<<endl;
    return 0;
}