int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        for(int i=0;i<n;i++){
            bool flag=true;
            for(int j=0;j<n;j++) { // Checking row hroizontally for a celebrity
                if(M[i][j]!=0){
                    flag=false;
                    break;
                }
            }
            if(flag==false) continue;
            for(int j=0;j<n;j++){
                if(M[j][i]!=1 and i!=j){
                    flag=false;
                    break;
                }
            }
            if(flag) return i;
        }
        return -1;
    }