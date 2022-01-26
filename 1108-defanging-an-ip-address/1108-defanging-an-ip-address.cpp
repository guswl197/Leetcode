class Solution {
public:
    string defangIPaddr(string address) {
        string::size_type pos=0; 
        string::size_type offset=0; 
        
        while((pos=address.find(".",offset))!=string::npos){
            address.replace(address.begin()+pos, address.begin()+pos+1,"[.]");
            offset=pos+3; 
        }
        return address; 
    }
};