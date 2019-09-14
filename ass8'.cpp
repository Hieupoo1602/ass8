#include <stdio.h>
bool kiem_tra_so(int x,int a[],int n){


for(int i=0;i<n;i++){if(0==a[i]-x){return true;
}}
return false;
}
int main(){
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	
	if(kiem_tra_so(11,a,10)){printf("co thuoc");}else{printf("kh thuoc");
	}
	return 0;
	}

