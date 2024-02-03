#include <iostream>
#include <cstring>
#include <windows.h>

using namespace std;
class Products
{
private:
    int code;
    char name[20];
public:
    Products(int c = 0, char *na = "abc"):code(c){strcpy(name,na);}
    virtual void ownInput(){}
    virtual void ownOutput(){}
    void input(){
        cout<< "Enter Id  : ";cin>>code;
        cout<< "Enter Name: ";fflush(stdin);cin.get(name,20);
        ownInput();
    }
    void output(){
        cout<< code << "\t"<< name<<"\t";
        ownOutput();
        cout<< endl;
    }
    virtual float income(){return 0;}
};
class Suppliers:public virtual Products{
    private:
        float price;
        char supplier[20];
    public:
        Suppliers(int c = 0, char *na = "abc", float pr = 0, char *su = "Zan1"):Products(c,na),price(pr){strcpy(supplier,su);}
        virtual void ownInput(){
            cout<< "Enter Price : ";cin>>price;
            cout<< "Enter Supplier : ";fflush(stdin);cin.get(supplier,20);
        }
        virtual void ownOutput(){
            cout<< price<< "\t"<<supplier<< "\t";
        }
        //float getPrice(){return price;}
        virtual float income(){return 0;}
};
class Discount:public virtual Products{
    private:
        float dis,price;
    public:
        Discount(int c = 0, char *na = "abc", float pr = 0,float d = 0):Products(c,na),price(pr),dis(d){}
        virtual void ownInput(){
            cout<< "Enter Discount : ";cin>>dis;
        }
        virtual void ownOutput(){
            cout<< price<< "\t"<< dis<< "\t"<< Discount::income()<<"\t";
        }
        virtual float income(){
            return price-(price*dis/100);
        }
};
class SupDis:public Suppliers, public Discount{
    public:
        SupDis(int c = 0, char *na = "abc",float pr = 0,char *su = "Zan",float d = 0):
        Products(c,na),Suppliers(pr,su),Discount(d){}
        virtual void ownInput(){
            Products::ownInput();
            Suppliers::ownInput();
            Discount::ownInput();
        }
        virtual void ownOutput(){
            Products::ownOutput();
            Suppliers::ownOutput();
            Discount::ownOutput();
            cout<< SupDis::income();
        }
        virtual float income(){return Suppliers::income() + Discount::income();}
};
int main(){
    system("cls");
    Products *a[6] = {
        new Products(1,"Men T-shirt"),
        new Suppliers(2,"Women T-shirt",15,"Zando"),
        new Discount(3,"Kid T-shirt",5,10),
        new SupDis(4,"Kid",25,"Ten11",10),
        new SupDis(5,"Girl",10,"361",15),
        new Discount(6,"Boy T-shirt",5,10),
    };
    for(int i = 0; i<6; i++)
        a[i]->output();
}


