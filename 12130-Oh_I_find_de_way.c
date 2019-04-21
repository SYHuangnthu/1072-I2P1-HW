#include <stdio.h>
char S[1000000];


void Find(){
    int check;
    int n;
    while(scanf("%d\n",&n)!=EOF){
        check=0;
        /// input string
        for(int i=0;i<n;i++){
            scanf("%c",&S[i]);
        }

        if(n>1) {
            for(int i=1;i<n;i++){
                if(S[i]!=S[i-1]){
                    check=1;
                    printf("YES\n%c%c\n",S[i-1],S[i]);
                }
            }
        }
        if(check==0)printf("NO\n");

    }



}
int main(){
    Find();
    return 0;
}
