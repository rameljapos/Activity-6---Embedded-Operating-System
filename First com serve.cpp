#include <iostream>
using namespace std;


int main() {
  int process;
  int time=0;
  int sum=0;
  cout<<"Enter number of processes: ";
  cin>>process;
  
  int burst_time[process];

  cout<<"Enter the burst time of each process: ";
  for (int i=0; i<process; i++){
    cin>>burst_time[i];
    sum = sum + burst_time[i];
  }

  cout<<"Time\t\t\Processd"<<endl;
  int count = 1;
  while (time <= sum){
    cout<<time<<"\t\t\t";
    if (count <= process){
        cout<<"P"<<count<<endl;
    }
    time = time + burst_time[count-1];
    count++;
  }


}
