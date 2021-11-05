#include<stdio.h>
int main()
{
    int n,a[100],mi=0,p=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
for(int i=0;i<n;i++){
    if(i==0){
        if(a[i]>a[i+1]){
            mi=a[i]-a[i+1];
        }
        else{
            mi=a[i+1]-a[i];
        }

        if(mi%2==1) {
                p=i+1;

        }
    }
else if(i==n-1)
{
    if(a[i]>a[i-1]){
            mi=a[i]-a[i-1];
        }
        else{
            mi=a[i-1]-a[i];
        }
    if(mi%2==1) p=i+1;
}

    else {
            if(a[i]>a[i+1]){
            mi=a[i]-a[i+1];
        }
        else{
            mi=a[i+1]-a[i];
        }
        if(mi%2==1) {
             if(a[i]>a[i-1]){
            mi=a[i]-a[i-1];
        }
        else{
            mi=a[i-1]-a[i];
        }
    if(mi%2==1) {
            p=i+1;
            break;
    }

        }
    }
}
    printf("%d",p);

}
