# TwinCAT-XAE-Project1
This follows the C++ Quick-Start example



New (TwinCAT XAE Project1):
I started this on May19th @ 1:30PM. This is a blank start on a C++ project.
1.	I scanned in devices. 
a.	This added an NC-Task under MOTION. I disabled this task.
2.	I added a TwinCAT Versioned C++ Project. I named it MyCppProject.
3.	I then created a TwinCAT Module Class with Cyclic IO. This is similar to C++ Quick Start from Beckhoff InfoSys. I called it CyclicIO.
4.	I added an instance of this (Right-click on MyCppProject), Add New Item.
5.	I added MyCyclicIOtask.
6.	I assigned that task to the Instance (Double-Click MyCppProject_Obj1). Go to Context, assign task.
7.	I enabled the debugger
8.	I signed the Certificate.
9.	I added a SynchUnit to EL1809 and EL2809. This part is missed in the Quick-Start example.
10.	Build All and Activate Configuration. 
11.	Then I enabled the debugger and changed the m_Inputs.Value to 1 and the counter starts running.
12.	I added this to Source Control.
