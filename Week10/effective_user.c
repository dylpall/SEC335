#include <stdlib.h>
#include <pwd.h>
#include <stdio.h>
#include <unistd.h>

/*
SEC335 Illustrate SUID Programs

* Make sure to run the following
* sudo chown root:root "name of program"
* sudo chmod u+s "name of program"
*/

int main(int argc, char *argv[])
{
  struct passwd *pw;
  uid_t uid;

  uid = geteuid ();
  pw = getpwuid (uid);
  if (pw)
    {
	puts (pw->pw_name);
	exit (EXIT_SUCCESS);
    }
  else
  {
	puts ("Error");
	exit (EXIT_FAILURE);
  }
}
