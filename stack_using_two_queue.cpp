void QueueStack :: push(int x)
{
        q1.push(x);
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
        if(q1.empty()) return -1;
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        while(q2.size() > 1){
            q1.push(q2.front());
            q2.pop();
        }
        int ans = q2.front();
        q2.pop();
        return ans;
}
