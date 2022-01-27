class Solution {
public:
    string interpret(string command) {
        string str; 
        for(int i=0; i<command.length();i++){
            if(command[i]=='G'){
                str.push_back('G'); 
            }
            else if(command[i]=='('){
                if(command[i+1]=='a'){
                    str.push_back('a'); 
                     str.push_back('l'); 
                }
                else{
                    str.push_back('o'); 
                }
            }
        }
        
        return str;
    }
};