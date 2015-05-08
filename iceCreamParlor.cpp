#include <cmath>
#include <cstdio>
#include <stdlib.h>
#include <vector>
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <map>
#include <sstream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
   int T;
    scanf("%d",&T);
    int i;
    std::string result="";
    for(i=0;i<T;i++){
        int M;
        int N;
        scanf("%d",&M);
        scanf("%d",&N);
        int j;
        std::map<int,int> seen;
        int *prices = (int*)malloc(sizeof(int)*N);
        for(j=0;j<N;j++){
            scanf("%d",&prices[j]);
            if(0 != seen[M-prices[j]]){
                std::ostringstream sstream;
                sstream << seen[M-prices[j]]<<" "<<j+1<<std::endl;
                result.append(sstream.str());
                break;
            }
            seen[prices[j]]=j+1;
        }
	    for(int k=j+1;k<N;k++)
            scanf("%d",&M);

    }
    std::cout<<result;
    return 0;
}
