#include <iostream>
#include <string>


void printCombinations(int n);
void printCombinations(std::string& s, int n, int i);

int main(void){
    int n;
    std::cout<<"Enter n: "<<std::endl;
    std::cin>>n;

    printCombinations(n);

    return 0;
}

void printCombinations(int n){
    std::string s(n, 'a');

    printCombinations(s, n, 0);
}

void printCombinations(std::string& s, int n, int i){
    if (i>=n){
        std::cout<< s<< std::endl;
        return;
    }
    while (s[i] <= 'z'){
        printCombinations(s,n, i+1);
        s[i]++;
        if (s[i]==s[i+1]&&s[i]==s[i+2]){
            return;
        }
    }
    s[i]='a';
}