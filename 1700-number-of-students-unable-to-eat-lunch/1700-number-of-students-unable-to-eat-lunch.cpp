class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int on=0,ze=0;
        for(auto it:students)
        {
            on+=(it==1);
            ze+=(it==0);
        }
        for(int i=0;i<sandwiches.size();i++)
        {
            if(sandwiches[i]==1)
            {
                if(!on)
                  return (int)(students.size()-i);
                on--;
            }
            else 
            {
                if(!ze)
                  return (int)(students.size()-i);
                ze--;
            }
        }
        return 0;
    }
};