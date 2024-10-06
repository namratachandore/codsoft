#include<iostream.h>
#include<conio.h>
const int allowed_task=100;
void task_menu()
{
cout<<"List of tasks:\n";
cout<<"1.Add Task\n"<<"2.View Task.\n"<<"3.Delete Task.\n"<<"4.Exit.\n";
cout<<"Enter your choice:";
}
void addtask(char tasks[],int & taskcounts)
{
 if(taskcounts>=allowed_task)
 {
 cout<<"Today's Schedule is full. Not allowed to do more tasks.\n";
 return;
 }
 cout<<"Enter details of task:";
 cin.ignore();
getline(cin,tasks[taskcounts]);
 taskcounts++;
 cout<<"Task added to To do list\n";
 }
void viewtask(char tasks[],int count)
{
if(count==0)
{
cout<<"Your To-do-List is empty.\n";
}
else
{
cout<<"\nList of Tasks:";
for(int i=0;i<count;i++)
{
cout<<i+1<<"."<<tasks[i]<<endl;
}
}
}
void deltask(char task[],int &taskcount)
{
if(taskcount==0)
{
cout<<"To Do List is Empty.\n";
return;
}
viewtask(task,taskcount);
int taskindex;
cout<<"Enter the task number to delete:\n";
cin>>taskindex;
if(taskindex > 0 && taskindex <= taskcount)
{
for(int i=taskindex-1;i< taskcount-1;++i)
{
task[i]=task[i+1];
}
taskcount--;
cout<<"Task deleted\n";
}
else
{
cout<<"Invalid task number.\n";
}
}
int main()
{
char tasks[allowed_task];
int taskcount = 0;
int choice;
do
{
task_menu();
cin>>choice;
switch(choice)
{
case 1: addtask(tasks,taskcount);break;
case 2: viewtask(tasks,taskcount);break;
case 3: deltask(tasks,taskcount); break;
case 4: cout<<"Exiting To do list. GoodBye Namrata!\n";
default: cout<<"Invalid choice.Enter Proper Choice.\n";
}
}while(choice < 5);
return 0;
}


