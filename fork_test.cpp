#include <iostream>
#include <unistd.h> 

using namespace std;

void fork_test_1(){
	for(int i = 0 ; i < 2 ; ++i){
		int pid = fork();
		if(pid == 0){
			cout<<"I am child: "<<getpid()<<endl;
		}else{
			cout<<"I am father: "<<getpid()<<endl;
		}	
	}
}

void fork_test_2(){
      	for(int i = 0 ; i < 2 ; ++i){
                int pid = fork();
                if(pid == 0){
                        cout<<"I am child: "<<getpid()<<endl;
			break;
                }else{
                        cout<<"I am father: "<<getpid()<<endl;
                }
        }
}

void fork_test_3(){
        for(int i = 0 ; i < 2 ; ++i){
                int pid = fork();
                cout<<"-\n";
        }
}

void fork_test_4(){
        for(int i = 0 ; i < 2 ; ++i){
                int pid = fork();
                if(pid == 0)
		  cout<<"-";
		else cout<<"*";
        }
}


int main(){
	fork_test_4();
	return 0;
}
