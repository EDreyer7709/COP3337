#include <iostream>
#include <string>

bool isvowel(char c){
    c=tolower(c);
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}

void reverseVowels(std::string& s){
    std::string vowelStr;
    for (int i=0; i< s.length(); i++){
        if (isvowel(s[i])){
            vowelStr += s[i];
        }
    }
    int idx= vowelStr.size()-1;
    for (int i=0; i< s.length(); i++){
        if (isvowel(s[i])){
            s[i]=vowelStr[idx];
            idx--;
}
    }
}

void reverse (std::string& s){
   int l=0;
   int r=s.length()-1;
   while (l<r){
    std::swap(s[l], s[r]);
    l++;
    r--;
   }
}

int main(void) {
    std::string s(".snAutcirtsne lineetadde htow ioy adevurp lliw i ,"
                   "toht ruf ecnedava datnemiced eht edavurp iay dno ssilc s'yudsendoW " 
                   "dnatta at ulbe tin ori eay fe\n\n"
                   "01 - 40:serotcoL\n)2.11 ratpehC( scasaB retnaiP ,)7.21 ,6.21( sratceV ,)"
                   "7 rotpohC( syarre ,)6-rutpihC( snoatcneF ,)5-rAtpahC( spaeL ,)4-retpohC"
                   "( sgnortS dni sretcarihC:sratpehC keubtxeT\n)dIkso ub llaw sneotsaeq 01( ."
                    "skrom 01 :skraM leteT\n\n.setanam 02 raf ,ssolC gnurod  ,)yidsendeW( 5202/71/90" 
                    ":omuT & eteD\n.sselc yidsendeW roa nI 2 zioQ iveh ot gnuig ari iw ,rodnamir kcuiq o");
    
     reverseVowels(s);
     reverse(s);
    std::cout << s << std::endl;
    return 0;
}



