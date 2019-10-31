#include <iostream>
#include <iomanip>
#include <vector>
# include <set>
using namespace std;

void add_record();
void list_record();
void modify_record();
class STUDENT
{
  friend ostream &operator<<(ostream &os,const STUDENT &s);  
    private:
    string name,brach;
    int math_marks,sci_marks,total,roll_no,percentage;
public:
STUDENT()=default;
STUDENT(string n,int r)
:name{n},roll_no{r}{}
void write()
{
   cout<<"name :";
    cin>>name;
    cout<<"roll_number:";
    cin>>roll_no;
    cout<<"barch :";
    cin>>brach;
     cout<<"math_marks :";
    cin>>math_marks;
    cout<<"sci_marks :";
    cin>>sci_marks;
    total=math_marks+sci_marks;
    percentage=total/2;
    
}
void print()
{
    cout<<name<<" "<<roll_no<<" "<<brach<<" "<<math_marks<<" "<<sci_marks<<" "<<total<<endl;
}
bool operator<(const STUDENT &s) const
{
    return(this->roll_no<s.roll_no);
}
bool operator==(const STUDENT &s)const
{
    return(this->roll_no==s.roll_no && this->name==s.name);
}
~STUDENT()
{}
};
ostream & operator<<(ostream &os,const STUDENT &s)
{
  os<<setw(15)<<s.roll_no<<setw(15)<<s.name<<setw(15)<<s.brach<<setw(15)<<s.math_marks<<setw(15)<<s.sci_marks<<setw(15)<<s.total<<setw(10)<<" "<<s.percentage<<endl;
  return os;
}
set<STUDENT>v;
int main()
{ 
/*STUDENT p;
p.write();
p.marks();
p.print();*/
//vector<STUDENT>v;
int n;
    do
 {
    cout<<setfill('*')<<setw(40)<<"STUDENT DATABASE SYSTEM"<<setw(20)<<""<<endl;
    cout<<"1:Add record"<<endl;
    cout<<"2:List record"<<endl;
    cout<<"3:Modify record"<<endl;
    cout<<setfill(' ')<<"4:exit"<<endl;
    //cout<<setw(20)<<"1:Add record"<<endl;

   cin>>n; 
    switch(n)
    {
        case 1:
       // add_record();
      { STUDENT x;
       x.write();
       // vector<STUDENT>v;
      v.insert(x);}
        break;
        case 2:
        cout<<setw(15)<<"ROLL NUMBER"<<setw(15)<<"NAME"<<setw(15)<<"BRANCH"<<setw(15)<<"MATH MARKS"<<setw(15)<<"SCI MARKS"<<setw(15)<<"TOTAL"<<setw(15)<<"PERCENTAGE"<<endl;
       // list_record();
       {
          for( const auto &e:v)     
             cout<<e;
       }
        break;
        case 3:
       // modify_record();
       {   string n;
          int r,l;
    cout<<"press 1:If you want to delete the student from the list "<<endl;
    cin>>l;
    if(l==1)
        {      cout<<"student name: "<<endl;
               cin>>n;
               cout<<"student roll no:"<<endl;
               cin>>r;
                //STUDENT x;
               auto it=v.find(STUDENT(n,r));
               if(it!=v.end())
                 v.erase(it);
               else
                 cout<<"there is no student "<<endl;
       }
    else if(l==2)
      {
        
          
      }
       
    }
        break;
        case 4:
        cout<<"exit";
        break;
        default:
        cout<<"Enter right key"<<endl;
     }
 }
while(n!=4);

return 0;
}
/*void add_record()
{
    
    STUDENT x;
    x.write();
  // vector<STUDENT>v;
   v.insert(x);
}
void list_record()
{
for( const auto &e:v)     
    cout<<e;
}
void modify_record()
{   string n;
    int r;
    cout<<"press 1:If you want to delete the student from the list "<<endl;
    cout<<"student name: "<<endl;
    cin>>n;
    cout<<"student roll no:"<<endl;
    cin>>r;
    //STUDENT x;
    auto it=v.find(STUDENT x(n,r));
    if(it!=v.end())
        v.erase(it);
    else
        cout<<"there is no student "<<endl;
}*/
