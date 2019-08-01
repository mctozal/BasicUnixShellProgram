/*******************************************************************
    File:  BasicShell.c
	
    	Programmer:  Mücahit Tozal
	Web-Site  :  https://www.mtozal.com
	e-mail    :  mucahit.tozal@virtualmetric.com
    	Started:  15.07.2019
	End    :  01.08.2019
	Description:  A simple unix shell program using C . I used Ubuntu for developing and compiling.

	Used For Project: 
	-Visual Studio Code
	-Ubuntu CommandInterpreter 
	
	
	Lecturer  : Yusuf Altunel
	Lesson    : Operating Systems
	University: İstanbul Kültür Üniversitesi
	
		
    // Compile and run BasicShell.c      
	
	1-) Command : gcc BasicShell.c   for compiling project
	2-) Command : ./a.out            for executing project


	Commands implemented: 

	- help
	- exit
	- cd dir
	- pwd
	- echo [string to echo]
	- clear
	- ls [-ail] [dir1 dir2 ...]
	- cp source target (or) cp file1 [file2 ...] dir
	- mv source target (or) mv file1 [file2 ...] dir
	- rm file1 [file2 ...]
	- mkdir dir1 [dir2 ...]
	- rmdir dir1 [dir2 ...]
	- ln [-s] source target
	- cat [file1 file2 ...]

	Other features : 
	
	Input, Output and Error Redirection (<, <<, >, >>, 2>, 2>> respectively)  : ");
	Example: ls -i >> outfile 2> errfile [Space mandatory around redirection operators!]");

