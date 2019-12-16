#include<iostream>
#include<stdio.h>


using namespace std;

class movie{
    public:
        static int Count;
string name[100];
string no[100];

    movie()
    {

    name[0]="Inception";
    name[1]="Limiteless";
    name[2]="Ip man";
    name[3]="Ip man 2";
    name[4]="Ip man 3";
    name[5]="Kick";
    name[6]="DDLG";
    name[7]="Inside out";
    name[8]="Horror story";
    name[9]="Titanic";
    name[10]="The Great Gatsby";
    name[11]="Fantastic Mr Fox";
    name[12]="Blood Diamond";
    name[13]="Shutter Island";
    name[14]="Zootopia";
    name[15]="100 Days of love";
    name[16]="Toy Story";
    name[17]="Forrest Gump";
    name[18]="Fight Club";
    name[19]="Now you see me";
    name[20]="Catch Me If You Can";


    }
        void add(string a)
        {
            name[Count]=a;
            Count++;
        }

};
class movieDetails:public movie{

public:
    movieDetails()
    {
        countp=21;
    }
    string dicname[100];
    string rating[100];
    string cast[100];
    string type[100];
    static int countp;
    void addp(string dic,string rat,string cst,string tpr)
    {
        dicname[countp]=dic;
        rating[countp]=rat;
        cast[countp]=cst;
        type[countp]=tpr;

    }

    void setdetails()
    {
        dicname[0]="Christhoper Nolan";
        rating[0]="9.0";
        cast[0]="Di caprio,ken watanbale, ellen page";
        type[0]="Sci-Fi";

        dicname[1]="Neil Burger";
        rating[1]="7.4";
        cast[1]="Bradely cooper,Robert de Niro,abbie cornish";
        type[1]="Sci-Fi";

        dicname[2]="Foshan";
        rating[2]="8.5";
        cast[2]="Bruice lee,Lok yiu";
        type[2]= "Material arts";

        dicname[3]="Foshan";
        rating[3]="8.5";
        cast[3]="Bruice lee,Lok yiu";
        type[3]= "Material arts";

        dicname[4]="Foshan";
        rating[4]="8.5";
        cast[4]="Bruice lee,Lok yiu";
        type[4]= "Material arts";

        dicname[5]="Foshan A";
        rating[5]="8.7";
        cast[5]="Bruice lee,Lok yiu";
        type[5]= "Material arts";

        dicname[6]="Foshan B";
        rating[6]="8.8";
        cast[6]="Bruice lee,Lok yiu";
        type[6]= "Material arts";

        dicname[7]="Foshan S";
        rating[7]="9.5";
        cast[7]="Bruice lee,Lok yiu";
        type[7]= "Material arts";

        dicname[8]="xxFoshan";
        rating[8]="5.5";
        cast[8]="Bruice lee,Lok yiu";
        type[8]= "Material arts";

        dicname[9]="hhFoshan";
        rating[9]="9.5";
        cast[9]="Bruice lee,Lok yiu";
        type[9]= "Material arts";

        dicname[10]="qqFoshan";
        rating[10]="6.5";
        cast[10]="Bruice lee,Lok yiu";
        type[10]= "Material arts";

        dicname[11]="rrFoshan";
        rating[11]="8.5";
        cast[11]="Bruice lee,Lok yiu";
        type[11]= "Material arts";

        dicname[12]="Foshan";
        rating[12]="8.5";
        cast[12]="Bruice lee,Lok yiu";
        type[12]= "Material arts";

        dicname[13]="Foshan";
        rating[13]="8.5";
        cast[13]="Bruice lee,Lok yiu";
        type[13]= "Material arts";

        dicname[14]="Foshan";
        rating[14]="8.5";
        cast[14]="Bruice lee,Lok yiu";
        type[14]= "Material arts";

        dicname[15]="Foshan";
        rating[15]="8.5";
        cast[15]="Bruice lee,Lok yiu";
        type[15]= "Material arts";

        dicname[16]="Foshan";
        rating[16]="8.5";
        cast[16]="Bruice lee,Lok yiu";
        type[16]= "Material arts";

        dicname[17]="Foshan";
        rating[17]="8.5";
        cast[17]="Bruice lee,Lok yiu";
        type[17]= "Material arts";

        dicname[18]="Foshan";
        rating[18]="8.5";
        cast[18]="Bruice lee,Lok yiu";
        type[18]= "Material arts";

        dicname[19]="Foshan";
        rating[19]="8.5";
        cast[19]="Bruice lee,Lok yiu";
        type[19]= "Material arts";

        dicname[20]="Foshan";
        rating[20]="8.5";
        cast[20]="Bruice lee,Lok yiu";
        type[20]= "Material arts";


    }
    void serch(int obj)
    {

        cout<<dicname[obj]<<endl<<"Olala"<<rating[obj]<<endl<<cast[obj]<<endl<<type[obj]<<endl;

    }
    void change(string d,string r,string c,string t,int b)
    {
        dicname[b]=d;
        rating[b]=r;
        cast[b]=c;
        type[b]=t;

    }

};


class Search:public movieDetails
{
public:
    Search(string mvy)
    {
        for(int i=0;i<22;i++)
        {
            if(name[i]==mvy)
            {
                cout<<"Found your movie"<<"name:"<<name[i]<<endl;

                        cout<<name[i]<<endl<<i<<endl;
        cout<<dicname[i];
        cout<<rating[i];
        cout<<cast[i];
        cout<<type[i];
            }
        }
    }
    void showdetails(int i)
    {
        cout<<name[i];
        cout<<dicname[i];
        cout<<rating[i];
        cout<<cast[i];
        cout<<type[i];

    }

};
int movie::Count=0;
int movieDetails::countp=0;


int main()
{
    movieDetails  m[100];
    char ch;
    do{

    string pass;
    cout<<"1:Login as Admin\n"<<endl;
    cout<<"2.For User\n"<<endl;
    cout<<"3.Exit\n"<<endl;


    char choice;

    int mor;
    cin>>mor;

    if(mor==1)
    {
        cout<<"Please enter the admin pass"<<endl;
        cin>>pass;
        int q;
        if(pass=="sadat")
        {
            cout<<"Welcome MR.Sadat"<<endl;
            cout<<"Now...\n"<<endl;
            cout<<"1.Add"<<endl;
            cout<<"2.chek every thing is okay"<<endl;
            cin>>q;
            if(q==1)
            {
        cout<<"add:"<<endl;
        movieDetails a1;
        string a;
        string b;
        string c;
        string d;
        string t;
        cin>>a>>b>>c>>d>>t;
        a1.add(a);
        a1.addp(b,c,d,t);
            }
            else if (q==2)
            {
                cout<<"Everything is okay:"<<endl;
            }

        }
        else
        {
            cout<<"Sorry not matched"<<endl;
        }

    }
    if(mor==2)
    {
        cout<<"1:Search\n"<<endl;
        cout<<"2:Download\n"<<endl;
        cout<<"3:Watch Online\n"<<endl;
        cout<<"4:Rate\n"<<endl;
        cin>>choice;
    if(choice=='1')
    {
        movieDetails nhn;
        for(int j=0;j<20;j++)
        cout<<nhn.name[j]<<endl;

        string sr;
        fflush(stdin);
        getline(cin,sr);
        Search abc(sr);
        //Search fnny(sr);

    }
    if(choice=='2')
    {
        cout<<"Go www.yts.to for download "<<endl;
    }
    if(choice=='3')
    {
        cout<<"Connect to Internet first"<<endl;
    }
    if(choice=='4')
    {
        int i,rating;
        cout<<"NUmber of movie"<<endl;
        cin>>i;

        cout<<"Rate the mvy"<<endl;
        cin>>rating;
        movieDetails m;
        m.rating[i]=rating;
    }
  /*  if(choice=='5')



    {
    search s;
    s.showdetails(0);
    }
*/

    }
   if(mor==3)
    {
        cout<<"Exit is here:"<<endl;
    }

    cout<<"Do You want to continue again:[Y/N]"<<endl;
    cin>>ch;
    }while(ch!='n');
}

