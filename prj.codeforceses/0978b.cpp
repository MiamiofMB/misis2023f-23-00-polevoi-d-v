#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>






int main(){
    std::vector<std::string> a;
    int n,cntr;
    std::string x;
    cntr=0;
    std::cin >> n;
    for (int i =0 ; i<n;i++){
        std::cin>>x;
        a.push_back(x);
        }
    int cc=0;
    while (cc<100){
        for (int i = 0;i<n;i++){
                if (a[i]=="x" and a[i+1]=="x" and a[i+2]=="x"){
                    a.erase(a.begin()+i);
                    cntr+=1;
            }
            
        }
        cc++;
    }
    for (std::string i:a){
        
        std::cout<<i;
        }
    std::cout << " "<<cntr;
    
}
