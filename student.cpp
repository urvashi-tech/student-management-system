#include<iostream>
using namespace std;

int id[10];
string name[10];
int marks[10];
string course[10];

int n = 0;

// Stack for Undo Delete
int sid[10];
string sname[10];
int smarks[10];
string scourse[10];
int top = -1;

int main()
{
    int choice;

    do
    {
        cout<<"\n--- Student Management System ---\n";
        cout<<"1 Add Student\n";
        cout<<"2 Display Students\n";
        cout<<"3 Search Student\n";
        cout<<"4 Delete Student\n";
        cout<<"5 Undo Delete\n";
        cout<<"6 Sort by Marks\n";
        cout<<"7 Exit\n";

        cout<<"Enter choice: ";
        cin>>choice;

        // Add Student
        if(choice==1)
        {
            cout<<"Enter ID: ";
            cin>>id[n];

            cout<<"Enter Name: ";
            cin>>name[n];

            cout<<"Enter Marks: ";
            cin>>marks[n];

            cout<<"Enter Course: ";
            cin>>course[n];

            n++;

            cout<<"Student Added Successfully\n";
        }

        // Display
        else if(choice==2)
        {
            cout<<"\nID  Name  Marks  Course\n";

            for(int i=0;i<n;i++)
            {
                cout<<id[i]<<" "
                    <<name[i]<<" "
                    <<marks[i]<<" "
                    <<course[i]<<endl;
            }
        }

        // Search
        else if(choice==3)
        {
            int x;
            cout<<"Enter ID to search: ";
            cin>>x;

            bool found=false;

            for(int i=0;i<n;i++)
            {
                if(id[i]==x)
                {
                    cout<<"Found: "
                        <<name[i]<<" "
                        <<marks[i]<<" "
                        <<course[i]<<endl;

                    found=true;
                }
            }

            if(!found)
            cout<<"Student Not Found\n";
        }

        // Delete
        else if(choice==4)
        {
            int x;
            cout<<"Enter ID to delete: ";
            cin>>x;

            for(int i=0;i<n;i++)
            {
                if(id[i]==x)
                {
                    // push into stack
                    top++;
                    sid[top]=id[i];
                    sname[top]=name[i];
                    smarks[top]=marks[i];
                    scourse[top]=course[i];

                    for(int j=i;j<n-1;j++)
                    {
                        id[j]=id[j+1];
                        name[j]=name[j+1];
                        marks[j]=marks[j+1];
                        course[j]=course[j+1];
                    }

                    n--;
                    cout<<"Student Deleted\n";
                }
            }
        }

        // Undo Delete
        else if(choice==5)
        {
            if(top==-1)
            {
                cout<<"Nothing to Undo\n";
            }
            else
            {
                id[n]=sid[top];
                name[n]=sname[top];
                marks[n]=smarks[top];
                course[n]=scourse[top];

                n++;
                top--;

                cout<<"Undo Successful\n";
            }
        }

        // Sort
        else if(choice==6)
        {
            for(int i=0;i<n-1;i++)
            {
                for(int j=0;j<n-i-1;j++)
                {
                    if(marks[j] < marks[j+1])
                    {
                        swap(marks[j],marks[j+1]);
                        swap(name[j],name[j+1]);
                        swap(id[j],id[j+1]);
                        swap(course[j],course[j+1]);
                    }
                }
            }

            cout<<"Sorted by Marks\n";
        }

    }while(choice!=7);

    return 0;
}