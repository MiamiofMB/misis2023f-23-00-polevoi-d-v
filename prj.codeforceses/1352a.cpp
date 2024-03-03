#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <string>
std::string str_builder(std::string m, int n){
    for (int i = 0;i<n;i++){
        m+='0';
        }
    return m;
    }
std::vector<std::string> make_shift(std::string x){
    std::vector<std::string> ans;
    int cntr = x.size()-1;
    for (char i:x){
        std::string m;
        if (i!='0'){
            m+=i;
            m=str_builder(m,cntr);
            ans.push_back(m);
            }
        cntr--;
        }
    return ans;
}

int main(){
    int w,n;
    std::vector<std::vector<std::string>> q;
    std::string r;
    std::cin >> n;
    for (int i=0;i<n;i++){
        std::cin>>w;
        r=std::to_string(w);
        q.push_back(make_shift(r));
        }
    for(int i=0;i<n;i++){
        std::cout<<q[i].size()<<'\n';
        for(int j=0;j<q[i].size();j++){
            std::cout<<q[i][j]<<" ";
            }
        std::cout<<'\n';
        }
    }
