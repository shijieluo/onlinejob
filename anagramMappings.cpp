#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> anagramMappings(vector<int>& A, vector<int>& B) {        
        vector<int> P;
        int b[B.size()+1] = {0};
        for(int i=0; i<A.size(); i++){
            for(int j=0; j<B.size(); j++){
                if(b[j] == 0 && A[i] == B[j]){
                    P.push_back(j);
                    cout << j <<endl;
                    b[j] = 1;
                    break;
                }
            }
        }
        return P;
    }
};

int main(){
    vector<int> A,B;
    A.push_back(21);
    A.push_back(5);
    A.push_back(74);
    A.push_back(5);
    A.push_back(74);
    A.push_back(21);
    B.push_back(21);
    B.push_back(5);
    B.push_back(74);
    B.push_back(74);
    B.push_back(5);
    B.push_back(21);
    Solution a;
    a.anagramMappings(A,B);   

}