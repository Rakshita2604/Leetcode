class Solution {
public:
    
    string decodeAtIndex(string s, int k) {
        string ans="";
        if(k==1)
            ans+=s[0];
        else
        {
            int count=0;
            char lastch='\0';
            for(int i=0;i<s.size();i++)
            {
                char c=s[i];
                if(c>=48 && c<=57)
                {
                    if(count>k/(c-'0'))
                    {
                        int d=k%count;
                        if(d==0)
                        {
                           
                            ans+=lastch;
                            break;
                        }
                        else
                            return decodeAtIndex(s.substr(0,i+1),d);
                    }
                    else
                    {
                        count*=(c-'0');
                        if(count==k)
                        {
                            
                            ans+=lastch;
                            break;
                        }
                    }
                }
                else
                {
                    lastch=s[i];
                    count++;
                    if(count==k)
                    {
                        ans+=lastch;
                        break;
                    }
                }
            }
        }
        return ans;
    }
};