#include <iostream>
#include <vector>

void print(const std::vector<int>& v);
void rotateRight(std::vector<int>& v, int k);
void rotateLeft (std::vector<int>& v, int k);

int main(void){
    std::vector<int> v {1,2,3,4,5,6};
    print(v);

    std::vector<int> v2(5,10);
    print (v2);

    std::vector<int> v3(v);
    print (v3);

    // print the current number of elements
    std::cout <<v3.size()<<std::endl;

    //front and back
    std::cout<< "Front "<< v3.front()<<std::endl;
    std::cout<< "Back "<< v3.back()<<std::endl;

    //add to end
    v3.push_back(8);
    v3.push_back(9);

    //remove last
    v3.pop_back();
    std::cout<< "After addition and removal\n";
    print(v3);

    //iterators - is and object that enables traversal over elements
    /*
        begin(): point to the first element
        end(): points to one past the last one
    */

    //insert an element (interator, value)
    v3.insert(v3.begin(), 100);
    print(v3);

    //insert 999 in the middle
    int middle=v3.size() /2;
    v3.insert(v3.begin()+middle, 999);
    print(v3);


    //erase (iterator)
    v3.erase(v3.begin()+1); //remove the second element
    print(v3);

    //rotate right
    rotateRight(v3, 2);
    print(v3);

    rotateLeft(v3,4);
    print(v3);
    

    return 0;
}

void print(const std::vector <int>& v){
    for (int el :v){
        std::cout <<el<< ' ';
    }
    std::cout <<std::endl;
}

void rotateRight(std::vector<int>& v, int k) {
    while (k){
    //get the last insert at the beginning
    v.insert(v.begin(), v.back());
    //remove the last element
    v.pop_back();
    k--;
    }
}

void rotateLeft(std::vector<int>& v, int k){
    k%=v.size();
    while (k){
        v.insert(v.end(), v.front());
        v.erase(v.begin());
        k--;
    }
}