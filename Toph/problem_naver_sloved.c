#include<stdio.h>
int main(){
    int n,k,score;
    scanf("%d %d",&n,&k);
    int all_balls=n*6;
    int sum=0,balls=0;

    for(int i=1;i<=k;i++){
        sum=0;
        balls=0;

        while(0<all_balls){
            scanf("%d",&score);
            if(score==-1){
                balls++;
                all_balls--;
                break;
            }else{
                balls++;
                all_balls--;
                sum+=score;
            }
        }

       

        if(balls<=0){
            printf("No more players\n");
            break;
        }else{
            double total_score=1.0*sum/balls;
            printf("%.2lf\n",total_score);
        }

    }


    return 0;
}