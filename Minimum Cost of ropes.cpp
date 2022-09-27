long long minCost(long long arr[], long long n) {
        priority_queue<long long int,vector<long long int>,greater<long long int>> pq;
        for(int i=0;i<n;i++)
        {
            pq.push(arr[i]);
        }
        long long int ans=0;
        while(pq.size()>1)
        {
            long long int a=pq.top();
            pq.pop();
            long long int b=pq.top();
            pq.pop();
            long long int sum=a+b;
            ans+=sum;
            pq.push(sum);
        }
        return ans;
}
