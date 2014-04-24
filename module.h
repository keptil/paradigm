#ifndef MODULE_H_
#define MODULE_H_

/*
MODULE: Object base
Every object in Paradigm is a module.
Using this system allows different types of
modules, say switches and LEDs to all be related,
everything leading back to a base data type.

Example: MODULE *led = new LED;
*/

#include <iostream>
#include <string>

using namespace std;

class MODULE
{
private:
	string module_name; // Name of object, ("Red LED", "L293 Motor Driver", etc)
	string description; // Description of object, basically describes what it does
	string icon_file;   // Holds the file name for the module's icon, 
							  // a small image that is displayed in program to make it 
							  // easier to identify
public:
	MODULE();
	int createTest();	
	virtual ~MODULE() = 0;
	virtual int onLoad(string f) = 0;
	virtual int onLoop() = 0;
	virtual int onTest() = 0;
};

#endif

}