#include<iostream>
#include<string>
#include<algorithm>

void transfer(int a, string b){
    string c;
    if (a>=2)
    { 
        c = to_string(a%2);
        a = a/2;
        b +=c;
        
    }
    else if (a=1)
    {
        b+="1";
    }
    
    reverse(b.begin(),b.end());
    
}

class Solution {
public:
    int hammingDistance(int x, int y) {
        string strx,stry;
        transfer(x,strx);
        transfer(y,stry);
        int num=0;
        for (int r = 0;strx[r]&&stry[y];r++){
            num+=strx[r]^stry[r];
            
        }
      return num;  
    }
    
};



int stringToInteger(string input) {
    return stoi(input);
}

int main() {
    string line;
    while (getline(cin, line)) {
        int x = stringToInteger(line);
        getline(cin, line);
        int y = stringToInteger(line);
        
        int ret = Solution().hammingDistance(x, y);

        string out = to_string(ret);
        cout << out << endl;
    }
    return 0;
}