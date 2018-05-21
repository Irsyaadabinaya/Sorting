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

int a, b, min, simpan;
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
	min=a;
        for(b=a;b<n;b++)
        {
            if(data[min]>data[b])
            {
          	min=b;
            }
        }
        simpan=data[a];
        data[a]=data[min];
        data[min]=simpan;
    }
    cout<<"\nsetelah diurutkan akan menjadi : \n";
    for(a=0;a<n;a++)
    {
        cout<<data[a]<<" ";
        cout<<endl;
    }
  break;

	case 2 :
 
  system ("cls");
  cout<<"jumlah angka yang di input : "; cin>>n;
  for(a=0;a<n;a++){
  	cout<<"Masukkan nilai "<<a+1<<" : ";cin>>data[a];
  }         
  for(a=0; a<n; a++){
  	for(b=a; b<n; b++){
        	if(data[a]>data[b]){
            		simpan = data[b];
           		data[b] = data[a];
          		data[a] = simpan;
              	}
      }
   }
    cout<<"\nsetelah diurutkan akan menjadi : \n";
    for(a=0;a<n;a++)
    {
        cout<<data[a]<<" "<<endl;
    }
   	cout<<endl;
	break;

	case 3 :
		//merge sort
		
default : cout<<endl;
			cout<<"error"<<endl;
}


cout<<"back ?  (y/n) ";cin>>back;
if (back=='y' or back=='Y'){
		system ("pause");
		system ("cls");
	goto menu;	

}else { 
return 0;
}


return 0;
}
