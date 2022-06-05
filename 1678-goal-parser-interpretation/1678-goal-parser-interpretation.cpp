class Solution {
public:
    string interpret(string command) {
        int n=command.size();
        string s="";
        int i=0;
        while(i<n)
        {
            if(command[i]=='G')
            {
                s+='G';
                i+=1;
            }
            else if(command[i+1]=='a')
            {
                s+="al";
                i+=4;
            }
            else
            {
                s+='o';
                i+=2;
            }
        }
        return s;
    }
};