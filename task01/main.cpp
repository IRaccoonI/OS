#include <iostream>
#include <unistd.h>

using std::cout;
using std::endl;

int main()
{
  pid_t rootPid = getpid();

  cout << rootPid << endl;

  int i;
  for(i = 0; i < 3; i++){
    if (rootPid == getpid()){
      fork();
    }
  }

  cout << "pid: " << getpid() << ", parent pid: " << getppid() << ", root pid: " << rootPid << endl;

  while(true);

  // switch(pid=fork()) {
  //   default:
  //     fork();
  // };

  // while(true){};
}
