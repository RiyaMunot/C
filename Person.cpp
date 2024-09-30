#include<iostream>
#include<string.h>
using namespace std;
class Person
{
	protected:
	char pname[20],addr[20];
	int phno;
	public:
		void read_person()
		{
			cout<<"\nENter person name";
			cin>>pname;
			cout<<"\nENter address";
			cin>>addr;
			cout<<"\nEnter phone no";
			cin>>phno;
		}
		void show_person()
		{
			cout<<"\nPerson name="<<pname;
			cout<<"\nAddress="<<addr;
			cout<<"\nPhone no="<<phno;
		}
};
class Emp:public Person
{
	int eno,sal;
	public:
		void read_emp()
		{
			cout<<"\nENter emp no";
			cin>>eno;
			cout<<"\nENter salary";
			cin>>sal;
			
		}
		void show_emp()
		{
			cout<<"\nEmp no="<<eno;
			cout<<"\nSalary="<<sal;
			
		}
		Emp operator=(int)
		{
			Emp temp;
			temp.eno=eno;
			temp.sal=sal;
			temp.phno=phno;
			strcpy(temp.pname,pname);
			strcpy(temp.addr,addr);
			return(temp);
		}
		friend int search_emp(Emp [],int ,int);
};
class Student :public Person
{
	int rollno;
	float per;
	public:
		void read_student()
		{
			cout<<"\nENter rollno";
			cin>>rollno;
			cout<<"\nENter per";
			cin>>per;
			
		}
		void show_student()
		{
			cout<<"\nRollno="<<rollno;
			cout<<"\nPer="<<per;
		
		}
			Student operator=(int)
		{
			Student temp;
			temp.rollno=rollno;
			temp.per=per;
			temp.phno=phno;
			strcpy(temp.pname,pname);
			strcpy(temp.addr,addr);
			return(temp);
		}
		friend int search_stu(Student[],int ,int);
};
int search_emp(Emp e[],int veno,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(e[i].eno==veno)
		  return(i);
	}
	return(-1);
}
int search_stu(Student s[],int vrno,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(s[i].rollno==vrno)
		  return(i);
	}
	return(-1);
}


int main()
{
   Student s[10];
   Emp e[10];
   int ne,ns,i,choice,pos,veno,vrno;
   do
   {
   	cout<<"\n1->read info of emp";
   	cout<<"\n2->read info of student";
   	cout<<"\n3->display info of emp";
   	cout<<"\n4->display info of student";
   	cout<<"\n5->add new emp";
   	cout<<"\n6->add new student";
   	cout<<"\n7->update info of emp";
   	cout<<"\n8->update info of student";
   	cout<<"\n9->exit";
   	cout<<"\nEnter your chocie";
   	cin>>choice;
   	switch(choice)
   	{
   		case 1:cout<<"\nHow many emp";
   		       cin>>ne;
   		       cout<<"\n****ENter info of emp****";
   		       for(i=0;i<ne;i++)
   		       {
   		       	e[i].read_person();
   		       	e[i].read_emp();
				  }
				  break;
		case 2:cout<<"\nHow many students";
   		       cin>>ns;
   		       cout<<"\n****ENter info of students****";
   		       for(i=0;i<ns;i++)
   		       {
   		       	s[i].read_person();
   		       	s[i].read_student();
				  }
				  break;
		case 3:cout<<"\nInfo of emp=\n";
		       for(i=0;i<ne;i++)
		       {
		       	e[i].show_person();
		       	e[i].show_emp();
			   }
			   break;
		case 4:cout<<"\nInfo of Student=\n";
		       for(i=0;i<ns;i++)
		       {
		       	s[i].show_person();
		       	s[i].show_student();
			   }
			   break;
		case 5:
			   cout<<"\nEnter info of emp tobe added";
			   Emp e1;
			   
			   e1.read_person();
			   e1.read_emp();
			   cout<<"\nEnter pos at which record is added";
			   cin>>pos;
			   for(i=ne-1;i>=pos;i--)
			   {
			   	e[i+1]=e[i];
			   }
			   e[pos]=e1;
			   ne++;
			   break;
		case 6:
			   cout<<"\nEnter info of student tobe added";
			   Student s1;
			   int pos;
			   s1.read_person();
			   s1.read_student();
			   cout<<"\nEnter pos at which record is added";
			   cin>>pos;
			   for(i=ns-1;i>=pos;i--)
			   {
			   	s[i+1]=s[i];
			   }
			   s[pos]=s1;
			   ns++;
			   break;
		case 7:cout<<"\nEnter emp no which info you want to update";
		       cin>>veno;
		       pos=search_emp(e,veno,ne);
		       if(pos!=-1)
		       {
		       	e[pos].read_person();
		       	}
			    
			   break;
		case 8:cout<<"\nEnter rollno which info you want to update";
		       cin>>vrno;
		       pos=search_stu(s,vrno,ns);
		       if(pos!=-1)
		       {
		       	s[pos].read_person();
		       	}
			   
			   break;
		case 9:break;
	   }
	   }	while(choice!=9);
}




