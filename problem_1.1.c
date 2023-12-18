#include<stdio.h>
int main(){
    int n,d,s;
    int m=0;
    int t;
    scanf("%d%d",&n,&d);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        if(t<=(1000000)&&t>=1){
            m=0;
        }
        else
        m=1;
        arr[i]=t;
    }
   
  
        if(1<=d&&d<=n &&!m){
        for(int i=0;i<d;i++){
            s=arr[0];
            for(int j=0;j<(n-1);j++){
                arr[j]=arr[j+1];
            }
            arr[n-1]=s;
        }
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ",arr[i]);
        }
    
        
        
     
    
   
    return 0;
}
