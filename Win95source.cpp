/* Just a joke, not actually Windows 95 * /

/*
  TOP SECRET Microsoft Code ©
  Project: Chicago™
  
  Projected release-date:
  Summer 1994, Spring 1995
  
*/

#include <stdio.h>
#include <dos.h>
#include <conio.h>
#include "win31.h"
#include "win1.h"
#include "stuff.h"
#include "scam.h"


/*
Following code is harmful. DO NOT RUN! [JOKE]
*/
#define INSTALL = HARD

void main()
{
  while(!CRASHED)
    {
      display_copyright_message();
      display_bill_rules_message();
      do_nothing_loop();
      if(first_time_installation)
	{
	  make_50_megabyte_swapfile();
	  do_nothing_loop();
	  totally_screw_up_HPFS_file_system();
	  search_and_destroy_the_rest_of_OS/2();
	  hang_system();
	}
      write_something(anything);
      display_copyright_message();
      do_nothing_loop();
      do_some_stuff();
      if(still_not_crashed)
	{
	  display_copyright_message();
	  do_nothing_loop();
	  runWindows3.09();
	  do_nothing_loop();
	  do_nothing_loop();
	}
    }
  


/*
  if(still_not_crashed)
    {
       write_cheer();
       finished();
    }
*/

  create_general_protection_fault();
}
