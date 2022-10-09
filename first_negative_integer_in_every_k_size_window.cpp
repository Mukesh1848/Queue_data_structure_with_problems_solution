
vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                                     
            deque<long long>dq;
           vector<long long> ans;
           
  // process first element of K size
         
         for(int i=0;i<K;i++){
             if(A[i]<0){
                 dq.push_back(i);
             }
         }  
         
         // store answer of first K sized window 
         if(dq.size()>0){
             ans.push_back(A[dq.front()]);
         }else{
             ans.push_back(0);
         }
         // process for remaining windows
         
         for(int i=K;i<N;i++){
             // removal
             if(!dq.empty() && i-dq.front() >= K){
                 dq.pop_front();
             }
             
             // addition
             if(A[i]<0){
                 dq.push_back(i);
             }
             
             // ans store
             if(dq.size()>0){
                 ans.push_back(A[dq.front()]);
             }
             else{
                 ans.push_back(0);
             }
            
         }
          return ans;
    }
