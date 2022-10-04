#include<stdio.h>
void Symm(int arr1[],int arr2[],int s1,int s2){
    int arr3[100],i=0,j=0,n=s1+s2,m=s1+s2,k=0,l=0,arr4[100],arrs[100],f=0,g=0,sl=0;
    //Calculation Of A-B
    while(n>0){
        if(i<s1 && j<s2){
            if(arr1[i]<arr2[j]){
                arr3[k]=arr1[i];
                i++;
                k++;
            }
            else if(arr1[i]==arr2[j]){
                i++;
                j++;
                n--;
            }
            else{
                j++;
            }
        }
        n--;
    }
    //Calculation of B-A
    while(m>0){
        if(f<s1 && g<s2){
            if(arr1[f]<arr2[g]){
                f++;
            }
            else if(arr1[f]==arr2[g]){
                f++;
                g++;
                m--;
            }
            else{
                arr4[l]=arr2[g];
                g++;
                l++;
            }
        }
        m--;
    }
    // for(int t=0;t<k;t++){
    //     printf("%d ",arr3[t]);
    // }
    // printf("\n");
    // for(int t=0;t<l;t++){
    //     printf("%d ",arr4[t]);
    // }
    for(i=0;i<k;i++){
        arrs[sl]=arr3[i];
        sl++;
    }
    for(i=0;i<l;i++){
        arrs[sl]=arr4[i];
        sl++;
    }
    for(int t=0;t<sl;t++){
        printf("%d ",arrs[t]);
    }
}