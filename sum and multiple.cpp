#include<iostream>
using namespace std;

int sum(int array[],int len){
	int s=0;
	for(int i=0; i<len; i++){
		s=s+array[i];
	}
	return s;
}

int multiple(int array[],int len){
	int m=1;
	for(int i=0; i<len; i++){
		m=m*array[i];
	}
	return m;
}

int main(){
	int array[]={4,2,7,8,1,2,5};
	int len=sizeof(array)/sizeof(array[0]);
	int su=sum(array,len);
	int multipl=multiple(array,len);
	cout<<"The sum of array is "<<su<<endl;
	cout<<"The multiple of array is "<<multipl<<endl;
	return 0;
}