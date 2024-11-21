class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        swap(n,m);
        vector<vector<char>>v(n,vector<char>(m,'.'));
       for(auto it:guards)
       {
           v[it[0]][it[1]]='g';
       }
        for(auto it:walls)
        {
          v[it[0]][it[1]]='w';
        }
        
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++)
                {
                    if(v[i][j]=='g')
                    {
                        int x=i+1,y=j;
                        while(x<n&&v[x][y]!='g'&&v[x][y]!='w')
                            v[x++][y]='?';
                        x=i-1;
                          while(x>=0&&v[x][y]!='g'&&v[x][y]!='w')
                            v[x--][y]='?';
                        x=i;y=j+1;
                          while(y<m&&v[x][y]!='g'&&v[x][y]!='w')
                            v[x][y++]='?';
                        x=i;y=j-1;
                         while(y>=0&&v[x][y]!='g'&&v[x][y]!='w')
                            v[x][y--]='?';
                    
                   
                    }
                }
            }
        
            int cnt=0;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++)
                {
                    cnt+=(v[i][j]=='.');
                }
            }
           
        
        return cnt;
    }
};