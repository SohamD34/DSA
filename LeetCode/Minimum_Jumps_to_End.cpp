int minJumps(int arr[], int n){
        
        if(n <= 1){
            return 0;
        }
        
        int max_range = 0;
        int max_reach = arr[0];
        int jumps = 0;
        
        for(int i=0; i<n; i++){
            max_reach = max(i+arr[i], max_reach);
            
            if(i==max_range){
                max_range = max_reach;
                jumps++;
                
                if(max_range >= n-1){
                    return jumps;
                }
            }
        }
        return -1;
    }