queue<int> modifyQueue(queue<int> q, int k) {
   
   stack<int>s;
 
   for(int i=0;i<k;i++){
       int element = q.front();
       q.pop();
       s.push(element);
   }
   
   while(!s.empty()){
       int element = s.top();
       s.pop();
       q.push(element);
   }
   
   int t = q.size() - k;
   while(t--){
       int value= q.front();
       q.pop();
       q.push(value);
   }
   return q;
}
