class Solution {
public:
    string interpret(string command) {
        string str; 
        for(int i=0; i<command.length();i++){
            if(command[i]=='G'){
                str+='G';
            }
            else if(command[i]=='('){
                if(command[i+1]=='a'){
                    str+="al"; 
                }
                else{
                    str+='o';
                }
            }
        }
        
        return str;
    }
};