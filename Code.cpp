#include<iostream>
#include<cstring>
using namespace std;
int main(void){
    
    string lotofwords;//Elements i/\/ 7#e ztring
    int G;            //[-]ow many units uu111 b3 lz3served
    int strl;         //7he length of the string
    int groups;       //"I"he len9th 0f the I#inal reserved (_)n1t
    
    while(1){

        cin>>G;
        if(G==0)
        {
            break;
        }else{
            cin>>lotofwords;
            strl=lotofwords.size();
            groups=strl/G;
            
            for(int i=0;i<strl;i+=groups){
              for(int j=i+groups-1;j>=i;j--){
                  cout<<lotofwords[j];
        }
    }
    
}
    }
}
