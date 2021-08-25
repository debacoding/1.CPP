
vector<int> sumInRanges(vector<int> &arr, int n, vector<vector<long long>> &queries, int q) {
    // Write your code here
    long long MOD = 1000000007;
    vector<long long> prefixSum(n + 1);
    prefixSum[0] = 0;
    
    for(long long i = 0; i < n; i++){
        prefixSum[i + 1] = (prefixSum[i] + arr[i]) % MOD;
    }
    
    vector<int> ans(q);
    long long rangeSum, blockSum, upperBlockNum, lowerBlockNum, numBlocks;
    
    blockSum = prefixSum[n];
    
    for(long long i = 0; i < q; i++){
        long long l = queries[i][0] - 1;
        long long r = queries[i][1] - 1;
        upperBlockNum = r / n;
        lowerBlockNum = l / n;
        int rMOD = r % n;
        int lMOD = l % n;
        numBlocks = (upperBlockNum - lowerBlockNum + 1) % MOD;
        rangeSum = (blockSum * numBlocks) % MOD;
        
        if(r != (upperBlockNum + 1) * n - 1)
            rangeSum = (rangeSum - (blockSum - prefixSum[rMOD + 1]) % MOD + MOD) % MOD;
        if(l != lowerBlockNum * n)
            rangeSum = (rangeSum - prefixSum[lMOD] + MOD) % MOD;
        
        ans[i] = rangeSum;
    }
    return ans;
    
}
