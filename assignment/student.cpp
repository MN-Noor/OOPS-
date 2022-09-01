#include"student.h"
void student::get()
{float qz1;
float qz2;
float pz;
float mid;
float f;

cout<<"Enter  your Name"<<endl;
cin>>name;
cout<<"Enter roll no"<<endl;
cin>>rollno;
 do{ 
    
    cout<<"Enter the marks of Quiz 1"<<endl;
    cin>>qz1;
   
  if(qz1>10)
       {cout<<"incorret marks marks should be out of 10"<<endl;}
    
   }while(qz1>10);
   do{ 
    
    cout<<"Enter the marks of Quiz 2"<<endl;
    cin>>qz2;
   
  if(qz1>10)
      { cout<<"incorret marks marks should be out of 10"<<endl;}
    
   }while(qz1>10);
pz=((qz1+qz2)/20)*25;
do{ 
    
    cout<<"Enter the marks of midterm"<<endl;
    cin>>mid;
   
  if(mid>50)
       {cout<<"incorret marks marks should be out of 50"<<endl;}
    
   }while(mid>50);
   int midz;
   midz=(mid/50)*25;
   internal=midz+pz;
   
   do{ 
    
    cout<<"Enter the marks of Final Paper"<<endl;
    cin>>f;
   
  if(f>100)
       {cout<<"incorret marks marks should be out of 100"<<endl;}
    
   }while(f>100);
   finel=(f/100)*50;
   
   

}
void student::show()
{
    cout<<"Roll no:"<<rollno<<"/n";
    cout<<"Name:"<<name<<"/n";
    cout<<"Internal%:"<<internal<<"\n";
    cout<<"Final%"<<finel<<"\n";
    cout<<"Grades:"<<grade<<"\n";
    cout<<"GPA:"<<gpa<<"\n";
    
}
void student::calculate()
{
    float per;
     per=internal+finel;
   if(per>80)
   {
       grade='A';
       gpa=4;
   }
   else if(per>70&&per<80)
   {
       grade='B';
       gpa=3;
   }
   else if(per>60&&per<70)
   {
     grade='C';
       gpa=2;  
   }
    else if(per>50&&per<60)
   {
     grade='D';
       gpa=1;  
   }
   else{
      grade='F';
       gpa=0;  
   }
}
bool student::froll(string r)
{
   if(rollno==r)
   {
return true;
   }
   else{
       return false;
   }

}
bool student::fname(string n)
{
   if(name==n)
   {
return true;
   }
   else{
       return false;
   }

}
