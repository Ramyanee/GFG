// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        QueueStack *qs = new QueueStack();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            qs->push(a);
        }else if(QueryType==2){
            cout<<qs->pop()<<" ";

        }
        }
        cout<<endl;
    }
}
// } Driver Code Ends
/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */

/* The method push to push element into the stack */
void QueueStack :: push(int x)
{
    q1.push(x);
        // Your Code
}

/*The method pop which return the element poped out of the stack*/
int QueueStack :: pop()
{
    if(q1.empty()) return -1;
    int s = q1.back();
    //cout<<endl<<"s: "<<s<<endl;
    
    int z =q1.size()-1;
    for (int i = 0; i < z; i++){
    q2.push(q1.front());
    //cout<<"pushed to q2: "<<q2.back()<<endl;
    q1.pop();
    }
    
    q1.pop();
    
    swap(q1,q2);
    //for (int i =0;i<q1.size();i++)
    //cout<<"swapped to q1: "<<q1.front();
    
    return s;
    
        // Your Code       
}
