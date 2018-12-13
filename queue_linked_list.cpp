#include <iostream>
using namespace std;

struct node
{	int no;
	char nama[50];
    char posisi[50];
    struct node *next;
}*front=NULL,*rear,*temp;

void Enqueue()
{
    temp=new node;
    cout<<"Data Pemain Bola \n";
    cout<<"===================\n";
    cout<<"No punggung : ";cin>>temp->no;
    cout<<"Nama        : ";fflush(stdin);gets(temp->nama);
    cout<<"Posisi      : ";fflush(stdin);gets(temp->posisi);
    temp->next=NULL;
    if(front==NULL){
        front=rear=temp;
    }
    else
    {
        rear->next=temp;
        rear=temp;
    }
    cout<<endl;
}

void Dequeue()
{
    if(front==NULL)
    {
        cout<<"Antrian masih kosong\n\n";
        system("pause");
        
    }
    else
    {
        temp=front;
        front=front->next;
        delete(temp);
    }
}

void Tampil()
{
    if(front==NULL)
    {
        cout<<"Tidak ada antrian\n\n";
              
    }
    else
    {
        temp=front;
            cout<<"Isi antrian"<<endl;
            cout<<"================="<<endl;
        while(temp!=NULL)
        {
            cout<<temp->no<<" -> "<<temp->nama<<" -> "<<temp->posisi<<endl;
            temp=temp->next;
        }
        cout<<endl;
       
        
    }
}

int main()
{
    int pilih;
    do
    {
        cout<<"========================================================"<<endl;
        cout<<"\t\tQUEUE MENGGUNAKAN LINKED LIST"<<endl;
        cout<<endl<<endl;
        cout<<"1. Enqueue"<<endl;
        cout<<"2. Dequeue"<<endl;
        cout<<"3. Tampil"<<endl;
        cout<<"4. Exit"<<endl<<endl;
        cout<<"PILIH(1-4): ";
        cin>>pilih;
        cout<<endl;
        switch(pilih)
        {
            case 1:
                Enqueue();
            break;
            case 2:
                Dequeue();
            break;
            case 3:
                Tampil();
            break;
            case 4:
            break;
            default:
            cout<<"error!!!!"<<endl;
            system("pause");            
            break;
        }
    }while(pilih!=4);

    return 0;
}