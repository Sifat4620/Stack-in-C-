#include<iostream>
using namespace std;
#define n 3

class stack{
 int* arr;
 int top;

 public:
   stack (){
     arr =  new  int [n];
     top = -1 ;
   }

   void push(int x){
        if(top<=n-1){
                cout<<"Successfully added a number "<<endl;
                top = top +1 ;  // top += 1;
                arr[top]= x;
        }
        else {
            cout<<" Error for number inserting"<< endl;

        }

   }
     int pop(){
       if(top>=0){

       }
          int val = arr[top];
          top--;
        return val;

       }
    bool empty(){

      if(top>=-1){
        cout<<"Empty "<<endl;
        return true;
      }
      else{
        return false;
      }

    }
     int Top (){
              if(top>=-1 ){
            int value =arr[top];
            return value;
      }
    else{
     return -1;

      }

      }
};

int main(){
  stack st;
  st.empty();
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(100);
  st.push(200);
  st.Top();
  cout<<"This is top call "<<st.Top()<<endl;
  st.pop();
  cout<<st.pop()<<endl;
  st.push(10);


  return 0;
}
