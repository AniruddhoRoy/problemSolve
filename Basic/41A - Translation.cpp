#include <iostream>
#include <algorithm>

int main() {
    std::string str,str2;
    std::cin>>str;
    std::cin>>str2;
    // Reverse the string
    std::reverse(str.begin(), str.end());
    
   // std::cout << "Reversed string: " << str << std::endl;
    if(str==str2)
    {
    std::cout<<"YES";
    }
    else
    {
    std::cout<<"NO";
    }
    return 0;
}
