#include <stdio.h>
int main()
{
    int n,m,i,j,sum[1005]={0},xiao[1001][101];
    scanf("%d %d",&n,&m);
    int a[n],max=0;
    for(i=0;i<m;i++){
    	for(j=0;j<n;j++){
    		scanf("%d",&xiao[i][j]);
		}
    }
    for(i=0;i<n;i++){
    	for(j=0;j<m;j++){
    		sum[i]+=xiao[j][i];
		}
		if(max<sum[i]){
			max=sum[i];
		}
	}
	int f=0;
		printf("%d\n",max);
		for(i=0;i<n;i++){
			if(sum[i]==max){
					
				if(f!=0){
					printf(" ");
				}
				else{
					f++;
				}
				printf("%d",i+1);
			}
		}
    return 0;
}
