
//Description: The sleep_for () function is defined in the header <thread>.
// The sleep_for () function blocks the execution of the current thread at least for the specified time 
//i.e. sleep_duration.




#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
  
int main()
{
    cout << "Hello I'm waiting...." << endl;
    this_thread::sleep_for(chrono::milliseconds(20000) );
    cout << "Waited 20000 ms\n";
}

//The function usleep () suspends the execution of calling thread for useconds microseconds '
//or until the signal is delivered to the thread that interrupts the execution.


#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
int main()
{
  cout << "Hello ";
  cout.flush();
  usleep(10000);
  cout << "World";
  cout << endl;
   
  return 0;
}

//The sleep () function causes the program or the process in which it is called, 
//to suspend its execution temporarily for a period of time in seconds specified by the function parameter.
// Execution is suspended until the requested time is elapsed or a signal or an interrupt is delivered to the function.
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
  cout << "Hello ";
  cout.flush();
  sleep(10);
  cout << "World";
  cout << endl;
   
  return 0;
}


