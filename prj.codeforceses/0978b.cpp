#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
int main(){
    std::vector<char> a;
    int n,cntr,flag;
    flag=0;
    std::string x;
    cntr=0;
    std::cin >> n;
    std::cin>>x;
    for (char i:x){
        a.push_back(i);
        }
    int cc=0;
    while (cc<100){
        for (char l:a){ if(l!='x'){flag=1;}}
        if (flag!=1){cntr=n-2;break;}
        cc+=1;
        for (int i = 0;i<n;i++){
                if (a[i]=='x' and a[i+1]=='x' and a[i+2]=='x'){
                    a.erase(a.begin()+i);
                    cntr+=1;
            }
            
        }
        
    }
    std::cout<<cntr;
    
}
