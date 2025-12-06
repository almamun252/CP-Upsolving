#include<stdio.h>
int main(){
    int n,score,count=0;
    long long int sum=0,t;
    scanf("%d %lld",&n,&t);

    for(int i=0; i<n;i++){
        scanf("%d",&score);
        if(score==-1){
            continue;
        }
        sum+=score;
        count++;
        if(sum>=t){
            break;
        }
    }

    if(sum<t){
        printf("Mission Failed\n");
    }else{
    printf("%d\n",count);
    }
    
    return 0;
}