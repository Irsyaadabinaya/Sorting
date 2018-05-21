#include<iostream>
using namespace std;

int main(){
	
	char back;
   int n , pilih;
  menu:
   cout<<"1.selection sort"<<endl;
   cout<<"2.bubble sort"<<endl;
   cout<<"3.merge sort"<<endl;
   cout<<"PILIHAN ANDA : ";cin>>pilih;

	int a, b, c, simpan;
    		int data[100];
  
  
   switch (pilih) {
   	
   case 1 : 
			system ("cls");
 
  
    cout<<"jumlah angka yang di input : "; cin>>n;
    
	for(a=0;a<n;a++)
    {
        cout<<"Masukkan nilai "<<a+1<<" : ";cin>>data[a];
    }
    for(a=0;a<n-1;a++)
    {
        for(b=0;b<n;b++)
        {
            if(data[b]<data[c])
            {
          
            }
        }
        simpan=data[c];
        data[c]=data[a];
        data[a]=simpan;
    }
