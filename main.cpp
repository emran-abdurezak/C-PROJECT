#include <iostream>
#include <iomanip>
using namespace std;
int main(){

char name[5][20];
int mark[5][3];
int total[5];
float average[5];


for(int i=0;i<5;i++){
    cout<<"Enter student name: ";
    cin.getline(name[i],20);


for(int j=0;j<3;j++){
    cout<<"Enter Mark "<<j+1<<": ";
    cin>>mark[i][j];
}
cin.ignore(1000, '\n');
}

for(int i=0;i<5;i++){
    total[i]=0;
    for(int j=0;j<3;j++){
        total[i]+=mark[i][j];
    }
}
for (int i=0;i<5;i++){
    average[i]=total[i]/3.0;
}

cout<<"                       STUDENT MARK SHEET"<<endl;
cout<<"--------------------------------------------------------------"<<endl;
cout<<left<<setw(20)<<"Name"
<<setw(8)<<"Mark1"
<<setw(8)<<"Mark2"
<<setw(8)<<"Mark3"
<<setw(8)<<"Total"
<<setw(10)<<"Average"<<endl;
cout<<"--------------------------------------------------------------"<<endl;


for(int i=0;i<5;i++){
    cout<<left<<setw(20)<<name[i];
    for (int j=0;j<3;j++){
    cout<<setw(8)<<mark[i][j];
}
cout<<setw(8)<<total[i];
cout<<fixed<<setprecision(2)<<setw(10)<<average[i]<<endl;
}
int topIndex=0;
for (int i=1;i<5;i++){
    if(total[i]>total[topIndex]){
    topIndex=i;
    }
}
cout<<"=============================================================="<<endl;
cout<<"Top Student: "<<name[topIndex]<<endl;
    return 0;
}