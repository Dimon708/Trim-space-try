#include <iostream>
#ifndef CHECK_IT_H
#define CHECK_IT_H
int *arr;
using namespace std;
class check_it {
private:
int col=0;
public:
	void input(int *input, int no=-1)
	{
	if(no==-1)
	{
	cout<<"Input length: ";
    cin>>col;
	if (col <= 0)
	{
		cout << "Incorrect data, try again!\n";
		return;
	}
	cout<<"Input array: "<<endl;
    for(int i=0;i<col;++i)
    {
    cout<<i<<": ";
    cin>>arr[i];
    }
	}
	else
	{
       arr=input;
	   col=no;
	   print();
	}
}
void disignation(){
for(int i=0;i<col-1;++i){
   if(!(i%2)){
    int tmp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=tmp;
   }
}
}
void print()
{
	if (col <= 0)
	{
		return;
	}
    cout<<"Print array:"<<endl;
for(int i=0;i<col;++i)
{
   cout<<i<<": ";
   cout<<arr[i]<<endl;
}
}
};

#endif // CHECK_IT_H
